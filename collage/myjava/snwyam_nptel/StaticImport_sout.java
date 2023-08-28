import java.util.Scanner;
import static java.lang.System.out; //important..

public class StaticImport_sout {
    // main class Question is created
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String courseName = scanner.nextLine();

        // Print the scanned String
        out.println("Course: " + courseName);
        /*
        ?here we dont use System.out.println...insted we import it statically...
        !not works if not import statically..
        */

        //close system resource..captured by scanner.
        scanner.close();
    }
}

//output
/*
cd "/home/shanku/Public/myprogams/collage/myjava/java programs/" && 
javac StaticImport_sout.java && java StaticImport_sout
uidghwid
Course: uidghwid
 */
