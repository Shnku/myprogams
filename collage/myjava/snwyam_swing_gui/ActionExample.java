import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JTextField;

public class ActionExample {
    ActionExample() {
        JFrame f = new JFrame("acction button ActionExamp");
        JTextField t = new JTextField();
        JButton b = new JButton("click me");

        t.setBounds(50, 50, 150, 30);
        b.setBounds(50, 100, 100, 30);

        //annoymonus class....
        b.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                t.setText("button clickedd");
            }
        });

        f.add(b);
        f.add(t);
        f.setSize(400, 300);
        f.setLayout(null);
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    public static void main(String[] args) {
        new ActionExample();
    }
}
