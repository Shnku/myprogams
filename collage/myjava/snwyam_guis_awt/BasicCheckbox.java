/* */

import java.awt.Checkbox;
import java.awt.Color;
import java.awt.Frame;

public class BasicCheckbox {
    BasicCheckbox() {
        Frame f = new Frame("checkbox demo");
        // Checkbox c[] = new Checkbox[2];
        // must have create each saperately..

        Checkbox linux_mint, ubuntu, garuda_linux, fedora;

        linux_mint = new Checkbox("linux mint", true);
        linux_mint.setBounds(50, 100, 100, 30);
        linux_mint.setBackground(Color.gray);

        ubuntu = new Checkbox("ubuntu linux", false);
        ubuntu.setBounds(50, 140, 100, 30);
        ubuntu.setBackground(Color.red);

        garuda_linux = new Checkbox("garuda_linux");
        garuda_linux.setBackground(Color.green);
        garuda_linux.setBounds(50, 180, 100, 30);

        fedora = new Checkbox();
        fedora.setLabel("fedora workstation");
        fedora.setEnabled(true);
        fedora.setBounds(250, 200, 220, 30);
        fedora.setBackground(Color.orange);

        f.add(linux_mint);
        f.add(ubuntu);
        f.add(garuda_linux);
        f.add(fedora);
        f.setLayout(null);
        f.setSize(500, 500);
        f.setBackground(Color.DARK_GRAY);
        f.setVisible(true);
    }

    /* 
    !we cant do it as arrays.....
    BasicCheckbox() {
        Frame f = new Frame("ckeckbox demo");
        Checkbox c[] = new Checkbox[5];
        String[] name = { "c++", "jav", "c", "python", "php", "go" };
    
        for (int i = 0; i < c.length; i++) {
            c[i].setLabel(name[i]);
            c[i].setBounds(10 * i, 20, 80, 40);
    
            if (i % 2 == 0)
                c[i].setBackground(Color.GREEN);
            else
                c[i].setBackground(Color.RED);
    
            f.add(c[i]);
        }
    
        f.setSize(500, 400);
        f.setLayout(null);
        f.setVisible(true);
    }
    */
    public static void main(String[] args) {
        BasicCheckbox foo = new BasicCheckbox();
    }
}
