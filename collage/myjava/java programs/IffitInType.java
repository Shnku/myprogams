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
            String[] str = new String[6];
            int indx = 0;

            try {
                byte b = Byte.parseByte(s[i]);
                str[indx++] = "*byte";
                canbeparsed = true;
            } catch (Exception e) {
                // TODO: handle exception
            }
            try {
                short ss = Short.parseShort(s[i]);
                str[indx++] = "*short";
                canbeparsed = true;

            } catch (Exception e) {
                // TODO: handle exception
            }
            try {
                int d = Integer.parseInt(s[i]);
                str[indx++] = "*int";
                canbeparsed = true;

            } catch (Exception e) {
                // TODO: handle exception
            }
            try {
                long l = Long.parseLong(s[i]);
                str[indx++] = "*long";
                canbeparsed = true;

            } catch (Exception e) {
                // TODO: handle exception
            }
            try {
                float f = Float.parseFloat(s[i]);
                str[indx++] = "*float";
                canbeparsed = true;

            } catch (Exception e) {
                // TODO: handle exception
            }
            try {
                double dd = Double.parseDouble(s[i]);
                str[indx++] = "*double";
                canbeparsed = true;

            } catch (Exception f) {
                // System.out.println(s[i] + " can't be fitted anywhere");
            }

            if (!canbeparsed) {
                System.out.println(s[i] + " can't be fitted anywhere");
            } else {
                System.out.println("\n" + s[i] + " can be fitted in:");
                for (int j = 0; j < indx; j++) {
                    System.out.println(str[j]);
                }
            }
        }
        sc.close();
    }
}

// output
/*
 * enter the input number:
 * 1
 * en data 1:
 * 56
 * 
 * 56 can be fitted in
 * float
 * double
 * short
 * long
 * int
 * byte
 */
/*
 * enter the input number:
 * 5
 * en data 1:
 * 42323
 * en data 2:
 * 54654654647897546
 * en data 3:
 * 2359689.6565659685
 * en data 4:
 * 2.1
 * en data 5:
 * 56748ghj546
 * 
 * 42323 can be fitted in
 * float
 * double
 * long
 * int
 * 
 * 54654654647897546 can be fitted in
 * float
 * double
 * long
 * 
 * 2359689.6565659685 can be fitted in
 * float
 * double
 * 
 * 2.1 can be fitted in
 * float
 * double
 * 56748ghj546 can't be fitted anywhere
 */
