import java.applet.Applet;
import java.awt.Button;
import java.awt.Color;
import java.awt.GridLayout;
import java.awt.TextField;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Calculatorapplet extends Applet implements ActionListener {
    String msg = " ";
    int v1, v2, result;
    TextField t1;
    Button b[] = new Button[10];
    Button plus, sub, mul, div, clear, mod, eq;
    char op;

    public void init() {
        Color k = new Color(120, 89, 90);
        setBackground(k);

        t1 = new TextField(10);
        GridLayout g1 = new GridLayout(2, 0);
        setLayout(g1);
        add(t1);

        for (int i = 0; i < b.length; i++) {
            b[i] = new Button("" + i);
        }
        plus = new Button("+");
        sub = new Button("-");
        mul = new Button("*");
        div = new Button("/");
        mod = new Button("%");
        clear = new Button("AC");
        eq = new Button("=");

        t1.addActionListener(this);

        for (int i = 0; i < b.length; i++) {
            add(b[i]);
        }
        add(plus);
        add(sub);
        add(mul);
        add(div);
        add(mod);
        add(clear);
        add(eq);

        for (int i = 0; i < b.length; i++) {
            b[i].addActionListener(this);
        }
        plus.addActionListener(this);
        sub.addActionListener(this);
        mul.addActionListener(this);
        div.addActionListener(this);
        mod.addActionListener(this);
        clear.addActionListener(this);
        eq.addActionListener(this);
    }

    public void actionPerformed(ActionEvent ae) {
        String str = ae.getActionCommand();
        char ch = str.charAt(0);

        if (Character.isDigit(ch)) {
            t1.setText(t1.getText() + str);
        } else if (str.equals("+")) {
            v1 = Integer.parseInt(t1.getText());
            op = '+';
            t1.setText("");
        } else if (str.equals("-")) {
            v1 = Integer.parseInt(t1.getText());
            op = '-';
            t1.setText("");
        } else if (str.equals("*")) {
            v1 = Integer.parseInt(t1.getText());
            op = '*';
            t1.setText("");
        } else if (str.equals("/")) {
            v1 = Integer.parseInt(t1.getText());
            op = '/';
            t1.setText("");
        } else if (str.equals("%")) {
            v1 = Integer.parseInt(t1.getText());
            op = '%';
            t1.setText("");
        }

        if (str.equals("=")) {
            v1 = Integer.parseInt(t1.getText());
            switch (op) {
                case '+':
                    result = v1 + v2;
                    break;
                case '-':
                    result = v1 - v2;
                    break;
                case '*':
                    result = v1 * v2;
                    break;
                case '%':
                    result = v1 % v2;
                    break;
                default:
                    break;
            }
            t1.setText("" + result);
        }

        if (str.equals("clear")) {
            t1.setText("");
        }
    }
}
