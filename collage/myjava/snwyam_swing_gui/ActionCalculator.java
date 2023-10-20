import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JTextField;

public class ActionCalculator extends JFrame implements ActionListener {
    JTextField t1, t2, t3;
    JButton b1, b2;

    ActionCalculator() {
        t1 = new JTextField();
        t1.setBounds(50, 100, 100, 30);
        t2 = new JTextField();
        t2.setBounds(50, 150, 100, 30);
        t3 = new JTextField();
        t3.setBounds(50, 200, 100, 30);

        b1 = new JButton("+");
        b1.setBounds(50, 250, 50, 50);
        b2 = new JButton("-");
        b2.setBounds(100, 250, 50, 50);
        b1.addActionListener(this);
        b2.addActionListener(this);

        add(t1);
        add(t2);
        add(t3);
        add(b1);
        add(b2);
        setSize(500, 400);
        setLayout(null);
        setVisible(true);
        setDefaultCloseOperation(3);
    }

    @Override
    public void actionPerformed(ActionEvent arg0) {
        int n1 = Integer.parseInt(t1.getText());
        int n2 = Integer.parseInt(t2.getText());
        int sum = 0;
        if (arg0.getSource() == b1) {
            sum = n1 + n2;
        } else if (arg0.getSource() == b2) {
            sum = n1 - n2;
        }
        t3.setText(String.valueOf(sum));

        throw new UnsupportedOperationException("Unimplemented method 'actionPerformed'");
    }

    public static void main(String[] args) {
        new ActionCalculator();
    }
}
