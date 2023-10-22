import java.awt.Color;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JPasswordField;
import javax.swing.JTextField;

public class PasswordFilling implements ActionListener {
    JFrame f = new JFrame("demo password field");
    JPanel p;
    JButton b;
    JLabel input1, input2;
    final JTextField uname;
    final JPasswordField pas;
    final JLabel l;

    @Override
    public void actionPerformed(ActionEvent arg0) {
        // if (arg0.getSource() == b) {
        String data = "username " + uname.getText();
        data += ", password: " + new String(pas.getPassword());
        l.setText(data);
        // }
        throw new UnsupportedOperationException("Unimplemented method 'actionPerformed'");
    }

    PasswordFilling() {
        p = new JPanel();
        p.setBounds(20, 20, 200, 200);

        input1 = new JLabel("username: ");
        uname = new JTextField(10);
        input2 = new JLabel("password: ");
        pas = new JPasswordField(10);

        b = new JButton("login");
        b.addActionListener(this);

        l = new JLabel();

        p.add(input1);
        p.add(uname);
        p.add(input2);
        p.add(pas);
        p.add(b);
        p.add(l);
        p.setBackground(Color.gray);

        f.add(p);
        f.setLayout(null);
        f.setSize(500, 400);
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    public static void main(String[] args) {
        new PasswordFilling();
    }
}
