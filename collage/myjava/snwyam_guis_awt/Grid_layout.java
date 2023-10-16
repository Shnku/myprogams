import java.awt.Button;
import java.awt.Frame;
import java.awt.GridLayout;

public class Grid_layout extends Frame {
    Grid_layout() {
        Button b1 = new Button("1 button");
        Button b2 = new Button("2 button");
        Button b3 = new Button("3 button");
        Button b4 = new Button("4 button");
        Button b5 = new Button("5 button");
        Button b6 = new Button("6 button");
        Button b7 = new Button("7 button");
        Button b8 = new Button("8 button");
        Button b9 = new Button("9 button");

        add(b1);
        add(b2);
        add(b3);
        add(b4);
        add(b5);
        add(b6);
        add(b7);
        add(b8);
        add(b9);
        GridLayout grid = new GridLayout(4, 3, 30, 40);
        setLayout(grid);
        setSize(500, 400);
        setVisible(true);
    }

    public static void main(String[] args) {
        new Grid_layout();
    }
}
