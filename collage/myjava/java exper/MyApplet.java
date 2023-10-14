import java.applet.Applet;
import java.awt.Color;
import java.awt.Graphics;

public class MyApplet extends Applet {
    public void init() {
        setBackground(Color.GREEN);
    }

    public void paint(Graphics g) {
        g.drawString("this is an applet window", 150, 25);
        showStatus("this is shown status window..");
    }
}
