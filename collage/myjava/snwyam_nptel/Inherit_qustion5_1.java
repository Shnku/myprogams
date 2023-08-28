/**
 * Qustion
 */
class Qustion {

    int i;

    Qustion(int i) { //received i as 20..
        this.i = i--;
    }
}

/**
 * Qustion2 extends Qustion
 */
class Qustion2 extends Qustion {
    Qustion2(int i) {
        super(i++); //i now 21.
        System.out.println("in the i is q2: " + i);
    }

}

public class Inherit_qustion5_1 {
    public static void main(String[] args) {
        Qustion2 foo = new Qustion2(20);

    }
}

//in the i is q2: 21
