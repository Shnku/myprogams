import java.awt.Color;

import javax.swing.JButton;
import javax.swing.JFrame;
// import javax.swing.WindowConstants;

class FirstSwing {
    public static void main(String[] args) {
        JFrame jf = new JFrame("first demo");
        JButton jb = new JButton("click it");

        jb.setBackground(Color.DARK_GRAY);
        jb.setBounds(20, 100, 200, 100);

        jf.add(jb);
        jf.setSize(500, 400);
        jf.setLayout(null);
        jf.setVisible(true);
        // jf.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        jf.setDefaultCloseOperation(3);
    }
}
