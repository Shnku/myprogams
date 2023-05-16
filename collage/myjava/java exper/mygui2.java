import javax.swing.JFrame;
import javax.swing.JLabel;

public class mygui2 {

    public mygui2() {
        JFrame myframe = new JFrame("this is lebel demo");
        myframe.setSize(400, 300);
        myframe.setVisible(true);
        myframe.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JLabel mylbl = new JLabel("lebel ist..");
        mylbl.setBounds(120, 230, 50, 20);

        myframe.add(mylbl);
    }

    public static void main(String[] args) {
        new mygui2();
    }

}
