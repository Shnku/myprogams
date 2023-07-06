import java.util.Scanner;

/**
 * IffitInType
 */
public class IffitInType {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the input number: ");
        int n = sc.nextInt();
        String s[] = new String[n];
        for (int i = 0; i < n; i++) {
            System.out.println("en data " + (i + 1) + ": ");
            s[i] = sc.next();
        }
        for (int i = 0; i < s.length; i++) {
            boolean canbeparsed = false;
            try {
                double dd = Double.parseDouble(s[i]);
                System.out.println("\n" + s[i] + " can be fitted in");
                System.out.println("*double");
                canbeparsed = true;

                float f = Float.parseFloat(s[i]);
                System.out.println("*float");

                long l = Long.parseLong(s[i]);
                System.out.println("*long");

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

// output
/*
 * enter the input number:
 * 5
 * en data 1:
 * -15.2656
 * en data 2:
 * -153
 * en data 3:
 * 4.32
 * en data 4:
 * 56798798798.5789798
 * en data 5:
 * 4787897897987789798787878799
 * 
 * -15.2656 can be fitted in
 * double
 * float
 * 
 * -153 can be fitted in
 * double
 * float
 * long
 * int
 * short
 * 
 * 4.32 can be fitted in
 * double
 * float
 * 
 * 56798798798.5789798 can be fitted in
 * double
 * float
 * 
 * 4787897897987789798787878799 can be fitted in
 * double
 * float
 */
