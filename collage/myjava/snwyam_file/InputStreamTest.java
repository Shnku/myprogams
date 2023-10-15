// package file;
//reading a file...

import java.io.FileInputStream;
import java.io.IOException;

public class InputStreamTest {
    public static void main(String[] args) throws IOException {
        FileInputStream fin = new FileInputStream("abc.txt");
        int size = fin.available();
        //returns no of byte available..
        System.out.println("total bytes:: " + size);
        System.out.println("first half display using read()");
        for (int i = 0; i < size; i++) {
            System.out.println(fin.read());
            System.out.println((char) fin.read());
            System.out.println("remainaing bytes: " + fin.available());

        }
    }
}
