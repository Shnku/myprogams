import java.awt.Color;
import java.awt.FlowLayout;
import java.awt.Frame;
import java.awt.Label;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.awt.event.MouseMotionListener;
import java.awt.event.MouseWheelEvent;
import java.awt.event.MouseWheelListener;

public class MouseLishenExample extends Frame implements MouseListener, MouseMotionListener, MouseWheelListener {
    Label l, l2, l3;

    MouseLishenExample() {
        addMouseListener(this);
        addMouseMotionListener(this);
        addMouseWheelListener(this);

        l = new Label("l1 .......................... ");
        // l.setBounds(20, 50, 100, 30);
        l.setBackground(Color.yellow);
        l2 = new Label("l2.......................... ");
        // l2.setBounds(60, 100, 130, 30);
        l2.setBackground(Color.red);
        l3 = new Label("l3................................. ");
        // l3.setBounds(100, 150, 130, 30);
        l3.setBackground(Color.green);

        add(l);
        add(l2);
        add(l3);
        setSize(500, 400);
        // setLayout(null);
        setLayout(new FlowLayout(FlowLayout.CENTER, 30, 30));
        setBackground(Color.blue);
        setVisible(true);
    }

    //abstracts interface methods for MouseListener..,.
    public void mouseClicked(MouseEvent e) {
        l.setText("mouseClicked");
    }

    public void mouseEntered(MouseEvent e) {
        l.setText("mouseEntered");
    }

    public void mouseExited(MouseEvent e) {
        l.setText("mouseExited");
    }

    public void mousePressed(MouseEvent e) {
        l.setText("mousePressed");
    }

    public void mouseReleased(MouseEvent e) {
        l.setText("mouseReleased");
    }

    // for MouseMotionListener....
    public void mouseDragged(MouseEvent e) {
        l2.setText("mouseDragged");
    }

    public void mouseMoved(MouseEvent e) {
        l2.setText("mouseMoved");
    }

    //for MouseWheelListener....
    public void mouseWheelMoved(MouseWheelEvent e) {
        l3.setText("mouseWheelMoved");
    }

    //main method...
    public static void main(String[] args) {
        new MouseLishenExample();
    }
}
