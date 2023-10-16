import java.awt.BorderLayout;
import java.awt.Button;
import java.awt.Frame;

public class Border_layout {
    Frame f;

    Border_layout() {
        f = new Frame();
        Button b1 = new Button("1button is this");
        Button b2 = new Button("2button is this");
        Button b3 = new Button("3button is this");
        Button b4 = new Button("4button is this");
        Button b5 = new Button("5button is this");

        f.add(b1, BorderLayout.NORTH);
        f.add(b2, BorderLayout.SOUTH);
        f.add(b5, BorderLayout.EAST);
        f.add(b4, BorderLayout.WEST);
        f.add(b3, BorderLayout.CENTER);

        f.setSize(500, 400);
        // f.setLayout(new BorderLayout(20, 20)); //no need ..
        f.setVisible(true);
    }

    public static void main(String[] args) {
        new Border_layout();
    }
}
