import java.awt.Button;
import java.awt.CardLayout;
import java.awt.Color;
import java.awt.Frame;

public class Card_layout {
    Frame f;
    CardLayout card;

    Card_layout() {
        card = new CardLayout(30, 20);
        f = new Frame();

        f.setTitle("card demo layout");
        f.setBackground(Color.gray);
        f.setLayout(card);
        f.setSize(500, 600);

        f.add("1", new Button("card 1"));
        f.add("2", new Button("card 2"));
        f.add("3", new Button("card 3"));
        f.add("4", new Button("card 4"));
        f.add("5", new Button("card 5"));

        f.setVisible(true);
        // actually only card 1 shown as othe event not sated..
    }

    public static void main(String[] args) {
        new Card_layout();
    }
}
