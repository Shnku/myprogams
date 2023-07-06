import java.util.Scanner;

/**
 * IffitInType
 */
public class IffitInType {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the input number: ");
        int n = sc.nextInt();
        boolean canbeparsed = false;
        String s[] = new String[n];
        for (int i = 0; i < n; i++) {
            System.out.println("en data " + (i + 1) + ": ");
            s[i] = sc.next();
        }
        for (int i = 0; i < s.length; i++) {
            try {
                double dd = Double.parseDouble(s[i]);
                System.out.println("\n" + s[i] + " can be fitted in");
                System.out.println("*double");

                long l = Long.parseLong(s[i]);
                System.out.println("*long");

                float f = Float.parseFloat(s[i]);
                System.out.println("*float");

                int d = Integer.parseInt(s[i]);
                System.out.println("*int");

                short ss = Short.parseShort(s[i]);
                System.out.println("*short");

                byte b = Byte.parseByte(s[i]);
                System.out.println("*byte");

                canbeparsed = true;

            } catch (Exception f) {
                // System.out.println(s[i] + " can't be fitted anywhere");
            }
            if (!canbeparsed) {
                System.out.println(s[i] + " can't be fitted anywhere");
            }
        }
        sc.close();
    }
}
