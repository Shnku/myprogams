/* Write a program to convert the given temperature in Fahrenheit to Celsius using the following conversion formula:
C = (F-32)/1.8
*/

import java.io.IOException;
import java.util.Scanner;

public class ferncelcius {

    static float cel;

    ferncelcius(float val) { // !constrctor can't made static..
        this.cel = val;
    }

    static float convert() {
        return (float) ((cel - 32) / 1.8); // ?typecasting needed..
    }

    public static void main(String[] args) throws IOException {

        float val;
        System.out.println("Enert te Farenhite : ");
        Scanner sc = new Scanner(System.in);
        val = sc.nextFloat();

        // ferncelcius(val); //!error...
        new ferncelcius(val);
        float cov = ferncelcius.convert();

        System.out.println("THE Censius VAL IS ;' " + cov);
    }
}
