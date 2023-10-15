import java.awt.Color;
import java.awt.Frame;

public class BasicFrame {
    public static void main(String[] args) {
        Frame f = new Frame("frame demo in java");
        f.resize(500, 400);
        f.setBackground(Color.BLUE);
        f.show();
    }
}

// actually it cannot closed cause no event actio is seted..
