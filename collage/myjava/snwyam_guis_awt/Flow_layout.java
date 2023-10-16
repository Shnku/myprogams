import java.awt.Button;
import java.awt.Color;
import java.awt.FlowLayout;
import java.awt.Frame;

public class Flow_layout {
    Frame f;

    Flow_layout() {
        f = new Frame();

        Button b1 = new Button("1button is this");
        Button b2 = new Button("2button is this");
        Button b3 = new Button("3button is this");
        Button b4 = new Button("4button is this");
        Button b5 = new Button("5button is this");
        Button b6 = new Button("6button is this");
        Button b7 = new Button("7button is this");
        Button b8 = new Button("8button is this");
        Button b9 = new Button("9button is this");
        f.add(b1);
        f.add(b2);
        f.add(b3);
        f.add(b4);
        f.add(b5);
        f.add(b6);
        f.add(b7);
        f.add(b8);
        f.add(b9);

        FlowLayout layout = new FlowLayout(FlowLayout.CENTER, 20, 130);
        f.setLayout(layout);

        f.setSize(600, 500);
        f.setBackground(Color.GRAY);
        f.setVisible(true);
    }

    public static void main(String[] args) {
        new Flow_layout();

    }
}
