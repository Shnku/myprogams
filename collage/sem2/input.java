import java.io.DataInputStream;
import java.io.IOException;

class input {
    public static void main(String[] args) throws IOException {
        DataInputStream get = new DataInputStream(System.in);
        System.out.println("enter a sentense: ");

        // String s = String.valueOf(get.readLine());
        String s = get.readLine();

        System.out.println("enter a integer: ");
        int i = Integer.parseInt(get.readLine());
        System.out.println("you enterd: " + s + " " + i);
    }
}

/*
 * Note: input.java uses or overrides a deprecated API.
 * Note: Recompile with -Xlint:deprecation for details.
 * enter a sentense:
 * this
 * enter a integer:
 * 5
 * you enterd: this
 */
/*
 * javac -Xlint input.java
 * input.java:10: warning: [deprecation] readLine() in DataInputStream has been
 * deprecated
 * String s = get.readLine();
 * ^
 * 1 warning
 */

// ! readLine() method from the DataInputStream class is deprecated.

/**
 * input
 */

// public class input {
// public static void main(String[] args) throws IOException {
// DataInputStream input = new DataInputStream(System.in);

// System.out.print("Enter an integer: ");
// int number = input.readInt();
// System.out.println("You entered: " + number);

// System.out.print("Enter a floating-point number: ");
// float floatNumber = input.readFloat();
// System.out.println("You entered: " + floatNumber);

// // Close the DataInputStream
// input.close();
// }
// }

/*
 * Enter an integer: 456
 * You entered: 875902474
 * Enter a floating-point number: 25.23
 * You entered: 1.054609E-8
 */
