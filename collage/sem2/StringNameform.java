/*Take a full name as input and print the intitials . 
If Input is “Mohandas Karamchand Gandhi” 
output – “M.K.G” */

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
        char[] newarr = new char[s.length() - 5];
        int index = 0;
        newarr[index++] = copy[0];
        for (int i = 1; i < copy.length; i++) {
            if (copy[i] == ' ') {
                System.out.println(index);
                newarr[index++] = '.';
                System.out.println(index);
                newarr[index++] = copy[i + 1];
                System.out.println(index);
            }
        }
        // newarr[index] = '\0'; // null autometically assigned..
        System.out.println(newarr);
        for (char c : newarr) { // goes until length..
            System.out.println(c);
        }
        System.out.println("end......");
        for (int i = 0; newarr[i] != '\0'; i++) {
            System.out.println(newarr[i]);
        }
        System.out.println("end");
    }

    public static String shortNameMaker_withTitle(String s) {
        char[] str_arr = s.toCharArray();
        char[] new_name = new char[s.length()];
        int index = 0, lst_space = 0;
        for (int i = 0; i < str_arr.length; i++) {
            if (str_arr[i] == ' ') {
                lst_space = i;
            }
        }
        new_name[index++] = str_arr[0];
        for (int i = 1; i < str_arr.length; i++) {
            if (i >= lst_space) {
                new_name[index++] = str_arr[i];
            } else if (str_arr[i] == ' ') {
                new_name[index++] = '.';
                new_name[index++] = str_arr[i + 1];
            }
        }
        return new String(new_name);
    }

    /* this is the main method,......... */
    public static void main(String[] args) {
        String str = new String("this is a string");
        str = method(str);
        System.out.println(str);

        String str2 = "this is next string";
        System.out.println(method_as_char(str2));

        String s3 = "shabku bagt ka";
        shortNameMaker(s3);

        String shor = shortNameMaker_withTitle("Mohandas Karamchand Gandhi");
        System.out.println("short with titl: " + shor);
    }
}

/*
 * string
 * string
 * 1 ->s
 * 2 ->.
 * 3 ->b
 * 3 ->.
 * 4 ->k
 * 5 ->\0
 * s.b.k
 * s
 * .
 * b
 * .
 * k
 * 
 * 
 * 
 * 
 * end......
 * s
 * .
 * b
 * .
 * k
 * end
 * short with titl: M.K Gandhi
 */
