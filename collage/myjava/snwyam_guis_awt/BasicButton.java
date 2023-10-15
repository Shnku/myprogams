// package snwyam_guis_awt;

import java.awt.Button;
import java.awt.Color;
import java.awt.Frame;

public class BasicButton extends Frame {
    BasicButton() {
        Button b = new Button("click button");
        b.setBounds(200, 150, 100, 50);
        b.setBackground(Color.CYAN);

        //for frame..
        setSize(500, 400);
        setLayout(null);
        setBackground(Color.DARK_GRAY);
        add(b);
        setVisible(true);
    }

    public static void main(String[] args) {
        new BasicButton();
    }
}

//*or it also can be done normally...
/* 
//public class BasicButton extends Componebts{
public class BasicButton {
    public static void main(String[] args) {
        Frame f = new Frame("frame demo in java");
        Button b = new Button("click button");
        b.setBounds(200, 150, 100, 50);
        b.setBackground(Color.CYAN);

        f.setLayout(null);//if not done then the button fill the whole.
        // f.resize(500, 400);
        f.setSize(500, 400); //same 
        f.setBackground(Color.BLUE);
        f.add(b);
        f.setVisible(true);
        // f.show(); //same
    }
}
*/
