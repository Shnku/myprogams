/*Take a full name as input and print the intitials . 
If Input is “Mohandas Karamchand Gandhi” 
output – “M.K.Gandhi” */

public class StringNameform {

    static String method(String s) {
        StringBuilder result = new StringBuilder();
        for (int i = s.length() - 1; s.charAt(i) != ' '; i--) {
            result.append(s.charAt(i));
        }
        result.reverse();
        // return (String.valueOf(result));
        return result.toString();
    }

    static void method_as_char(String s) {
        char[] arr = s.toCharArray();
        for (int i = arr.length - 1; arr[i] != ' '; i--) {

        }
    }

    public static void main(String[] args) {
        String str = new String("this is a string");
        str = method(str);
        System.out.println(str);
    }
}
