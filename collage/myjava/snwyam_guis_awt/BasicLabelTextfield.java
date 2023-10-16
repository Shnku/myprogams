import java.awt.Color;
import java.awt.Frame;
import java.awt.Label;
import java.awt.Rectangle;
import java.awt.TextArea;
import java.awt.TextField;

public class BasicLabelTextfield {
    public static void main(String[] args) {
        Frame f = new Frame("lebel + textfield demo");
        Label l1, l2;
        TextField tf;
        TextArea t1, t2;
        Rectangle r = new Rectangle(100, 130);

        l1 = new Label("First label");
        l2 = new Label("2nd label");
        l1.setBackground(Color.green);
        l2.setBackground(Color.red);
        l1.setBounds(r);
        l2.setBounds(500, 400, 100, 50);

        tf = new TextField("a demo test TextField");
        tf.setBackground(Color.BLUE);
        tf.setBounds(500, 300, 100, 50);

        t1 = new TextArea("welcome to t1, this is an demodsadh yus yavdsiupdisfiagfksdfgsdfkjskdfgskj");
        t2 = new TextArea("this is text atrwa 22222");
        t1.setBounds(100, 200, 100, 300);
        t2.setBounds(120, 120, 100, 45);

        f.add(l1);
        f.add(t1);
        f.add(tf);
        f.add(l2);
        f.add(t2);
        f.setSize(800, 600);
        f.setBackground(Color.black);
        f.setLayout(null);
        f.setVisible(true);

    }
    
}
