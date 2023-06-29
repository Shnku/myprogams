/*Write a program in Java which will read a string and rewrite it in the alphabetical order. 
For example, the word STRING should be written as GINRST */

public class AlplaOrderedString {
    public static void alphaOrder(String string) {
        char str_arr[] = string.toCharArray();
<<<<<<< HEAD
        for (int i = 0; i < string.length() - 1; i++) {
            for (int j = 0; j < string.length() - i - 1; j++) {
                if (string.charAt(j) > string.charAt(j + 1)) {
                    char temp = str_arr[j];
                    str_arr[j] = str_arr[j + 1];
                    str_arr[j + 1] = temp;
=======
        for (int i = 0; i < str_arr.length - 1; i++) {
            for (int j = 0; j < str_arr.length - i - 1; j++) {
                if (str_arr[j] > str_arr[j + 1]) {
                    char temp = str_arr[j + 1];
                    str_arr[j + 1] = str_arr[j];
                    str_arr[j] = temp;
>>>>>>> master
                }
            }
        }
        System.out.println(str_arr);
    }

    public static void main(String[] args) {
        String str = "STRING";
        alphaOrder(str);
    }
}

<<<<<<< HEAD
// wrong output giving....
// deredString
// SRTIGN
=======
// wrong output giving....//but now ok..
/*
 * javac AlplaOrderedString.java && java AlplaOr
 * deredString
 * GINRST
 */
>>>>>>> master
