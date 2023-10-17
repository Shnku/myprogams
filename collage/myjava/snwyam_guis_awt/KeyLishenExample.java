import java.awt.Frame;
import java.awt.Label;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;

public class KeyLishenExample extends Frame implements KeyListener {
    Label l;

    KeyLishenExample() {
        addKeyListener(this);
        requestFocus(); //works without this..

        l = new Label(".........................");

        add(l);
        setSize(500, 400);
        setVisible(true);
        setLayout(null);
    }

    public void keyPressed(KeyEvent e) {
        l.setText("kwy keyPressed");
    }

    public void keyReleased(KeyEvent e) {
        l.setText("keyReleased");
    }

    public void keyTyped(KeyEvent e) {
        l.setText(e.getKeyChar() + "pressed");
    }

    public static void main(String[] args) {
        new KeyLishenExample();
    }
}
