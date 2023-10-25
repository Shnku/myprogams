import java.awt.Color;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JCheckBoxMenuItem;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JPasswordField;
import javax.swing.JRadioButton;
import javax.swing.JTextField;

public class PasswordFilling implements ActionListener {
    JFrame f = new JFrame("demo password field");
    JPanel p1JPanel, p2;
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
        p1JPanel = new JPanel();
        p1JPanel.setBounds(10, 20, 200, 200);
        p1JPanel.setBackground(Color.gray);
        p2 = new JPanel();
        p2.setBounds(250, 20, 160, 200);
        p2.setBackground(Color.darkGray);

        input1 = new JLabel("username: ");
        uname = new JTextField(10);
        input2 = new JLabel("password: ");
        pas = new JPasswordField(10);

        b = new JButton("login");
        b.addActionListener(this);

        l = new JLabel();

        p1JPanel.add(input1);
        p1JPanel.add(uname);
        p1JPanel.add(input2);
        p1JPanel.add(pas);
        p1JPanel.add(b);
        p1JPanel.add(l);

        JCheckBox c1 = new JCheckBox("checknox");
        JRadioButton r1 = new JRadioButton("JRadioButton");
        JCheckBoxMenuItem cbm1 = new JCheckBoxMenuItem("kBoxMenuItem");

        p2.add(c1);
        p2.add(r1);
        p2.add(cbm1);

        f.add(p1JPanel);
        f.add(p2);
        f.setLayout(null);
        f.setSize(500, 400);
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    public static void main(String[] args) {
        new PasswordFilling();
    }
}
