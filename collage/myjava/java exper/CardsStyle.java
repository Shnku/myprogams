import java.awt.Button;
import java.awt.CardLayout;
import java.awt.Event;

public class CardsStyle extends java.applet.Applet {
    CardLayout c;

    public void init() {
        c = new CardLayout();
        setLayout(c);
        add("1", new Button("card 1"));
        add("2", new Button("card 2"));
        add("3", new Button("card 3"));

    }

    public boolean keyDown(Event e, int key) {
        c.previous(this);
        return true;
    }
}
