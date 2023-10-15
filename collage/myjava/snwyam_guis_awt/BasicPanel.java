
import java.awt.Color;
import java.awt.Frame;
import java.awt.Panel;

public class BasicPanel {
    public static void main(String[] args) {
        Frame f = new Frame("panel in frame demo");
        Panel p = new Panel();

        f.resize(500, 400);
        f.setBackground(Color.gray);
        f.setLayout(null);
        p.resize(400, 140);
        p.setBackground(Color.red);

        f.add(p); //panel will be inside frame..
        f.show();
    }
}
// actually it cannot closed cause no event actio is seted..
