import java.awt.Choice;
import java.awt.Color;
import java.awt.Frame;
import java.awt.List;
import java.awt.Scrollbar;

public class BasicListChoiceScrollbar extends Frame {
    BasicListChoiceScrollbar() {
        List l = new List(5);
        l.setBackground(Color.red);
        l.setBounds(100, 200, 100, 100);
        l.add("item1");
        l.add("java");
        l.add("c++");
        l.add("python");
        //last is blank..

        Choice c = new Choice();
        c.setBackground(Color.green);
        c.setBounds(230, 200, 120, 25);
        c.add("item1");
        c.add("java");
        c.add("c++");
        c.add("python");

        Scrollbar s = new Scrollbar();
        s.setBounds(475, 30, 20, 360);
        //it just added scrollbar but not mouse functionality..

        add(l);
        add(c);
        add(s);
        setBackground(Color.gray);
        setSize(500, 400);
        setLayout(null); //must be here
        setVisible(true); //before this
        // setLayout(null); //it cannot do it 
    }

    public static void main(String[] args) {
        new BasicListChoiceScrollbar();
    }
}
