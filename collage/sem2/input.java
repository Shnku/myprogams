import java.io.DataInputStream;
import java.io.IOException;

class input {
    public static void main(String[] args) throws IOException {
        DataInputStream get = new DataInputStream(System.in);
        System.out.println("enter a integer: ");
        // String s = String.valueOf(get.readLine());
        // The method readLine() from the type DataInputStream is deprecated
        int a = (get.readInt());
        System.out.println("te string is: " + a);
        // But Output: javac input.java && java input
        // enter a integer:
        // 56
        // te string is: 892733962
    }
}
