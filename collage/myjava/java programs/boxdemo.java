import java.io.Console;

class box2 { // naming it box conflicts with previous box.class fiile..
    float len, width, height;

    box2(float len, float wid, float hei) {
        this.len = len;
        this.height = hei;
        this.width = wid;
    }

    float volume() {
        return len * width * height;
    }
}

public class boxdemo {

    public static void main(String[] args) {
        Console terminal = System.console();
        System.out.println("Enter your name: ");
        String str = terminal.readLine("en the String: ");
        System.out.println("You entered : " + str);

        String no = terminal.readLine("\nenter a no this will be converted: ");
        int num = Integer.parseInt(no);
        System.out.println("the " + no + " converted to  " + num);
        System.out.println("performing multiplictaio: " + num * 2);

        box2 b1 = new box2(num, num / 2, num * 2);
        System.out.println("the vol of box is: " + b1.volume());
    }
}

// output.......
/*
 * Enter your name:
 * en the String: sbbs aaa ma,mma, mam
 * You entered : sbbs aaa ma,mma, mam
 * 
 * enter a no this will be converted: 10
 * the 10 converted to 10
 * performing multiplictaio: 20
 * the vol of box is: 1000.0
 */
