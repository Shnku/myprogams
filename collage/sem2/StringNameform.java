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

    // static char[] method_as_char(String s) {
    static StringBuilder method_as_char(String s) {
        char[] arr = s.toCharArray();
        char newarr[] = new char[s.length()];
        int newindex = 0;
        for (int i = arr.length - 1; arr[i] != ' '; i--) {
            newarr[newindex++] = arr[i];
        }
        newarr[newindex] = '\0';
        // return newarr; // not reversed..
        return new StringBuilder(String.valueOf(newarr)).reverse();
    }

    static void shortNameMaker(String s) {
        char[] copy = s.toCharArray();
        char[] newarr = new char[s.length()];
        int index = 0;
        newarr[index++] = copy[0];
        for (int i = 1; i < copy.length; i++, index++) {
            if (copy[i] == ' ') {
                newarr[index] = '.';
                newarr[index + 1] = copy[i + 1];
                System.out.println(index);
            }
        }
        System.out.println(newarr);
        for (char c : newarr) {
            System.out.println(c);
        }
    }

    public static void main(String[] args) {
        String str = new String("this is a string");
        str = method(str);
        System.out.println(str);

        String str2 = "this is next string";
        System.out.println(method_as_char(str2));

        String s3 = "shabku bagt ka";
        shortNameMaker(s3);
    }
}
