import java.awt.Color;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JTextArea;
import javax.swing.JTextField;

public class TextNoCount extends JFrame implements ActionListener {
    JTextArea area;
    JTextField field1, field2;
    JButton b;

    TextNoCount() {
        area = new JTextArea("this is a demo text putted");
        area.setBounds(50, 100, 400, 100);
        area.setBackground(Color.GRAY);
        area.setFont(new Font("", Font.ITALIC, 14));

        field1 = new JTextField();
        field1.setBounds(50, 20, 100, 30);
        field1.setBackground(Color.getHSBColor(52, 10, 20));
        field2 = new JTextField();
        field2.setBounds(160, 20, 100, 30);
        field2.setBackground(Color.getHSBColor(25, 25, 2));

        b = new JButton("click");
        b.addActionListener(this);
        b.setBounds(300, 300, 100, 30);

        add(area);
        add(field1);
        add(field2);
        add(b);

        getContentPane().setBackground(Color.black);
        setLayout(null);
        setSize(500, 400);
        setVisible(true);
        setTitle(getName()); //frame0
        setDefaultCloseOperation(3);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        String text = area.getText();
        String words[] = text.split("\\s");
        // "\\s" is for track the spacebar.........
        field1.setText("words : " + words.length);
        field2.setText("character : " + text.length());
    }

    public static void main(String[] args) {
        new TextNoCount();
    }
}
