import java.applet.Applet;
import java.awt.Graphics;
import java.awt.TextField;

public class InteractiveApplet extends Applet {
    TextField input1, input2;

    public void init() {
        input1 = new TextField(8);
        input2 = new TextField(8);
        add(input1);
        add(input2);
        input1.setText("0");
        input2.setText("0");
    }

    public void paint(Graphics g) {
        int v1 = 0;
        int v2 = 0;
        int ans = 0;
        g.drawString("enter 2 vals: ", 10, 50);
        try {
            v1 = Integer.parseInt(input1.getText());
            v2 = Integer.parseInt(input2.getText());
            ans = v1 + v2;
        } catch (Exception e) {
            // handle exception
        }
        g.drawString("the sum is: ", 10, 75);
        g.drawString(String.valueOf(ans), 100, 75);
    }
}
