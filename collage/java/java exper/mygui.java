
import javax.swing.*;

/**
 * mygui
 */
public class mygui {

    public static void main(String[] args) {
        JFrame frame = new JFrame("my first gui");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(400, 200);

        JButton button1 = new JButton("<press this button>");
        frame.add(button1);
        JButton button2 = new JButton("<2nd button>");
        frame.add(button2);
        // frame.getContentPane().add(button1).setSize(150, 30);
        // frame.getContentPane().add(button2);

        
        frame.setVisible(true);
    }
}
