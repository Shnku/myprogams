
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
        button1.setBounds(150, 40, 120, 10);
        frame.add(button1);// .setSize(50, 30); //seted via setbound
        JButton button2 = new JButton("<2nd button>");
        button2.setSize(150, 30);
        frame.add(button2);
        // frame.getContentPane().add(button1).setSize(150, 30);
        // frame.getContentPane().add(button2);

        frame.setLayout(null); // no defaust layout manager..
        frame.setVisible(true);
    }
}
