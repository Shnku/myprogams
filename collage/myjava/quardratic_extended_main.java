import myjava.quardratic_eq;

class quardratic_cheaking extends quardratic_eq {
    quardratic_cheaking(double a, double b, double c) {
        super(a, b, c);
    }

    boolean has_any_root() {
        if (b * b - 4 * a * c < 0) {
            return true;
        } else if (b * b - 4 * a * c > 0) {
            return false;
        }
        // return false;
    }

}

public class quardratic_extended_main {

    public static void main(String[] args) {

    }
}
