/*Take a String s1 and s2 as input and check whether s2 is present in s1 or not . 
If it is present display appropriate message 
but if it is not present then 
append s2 at the end of s1 and display s1. */

public class FindSubstring {

    public static boolean isPresent(String line, String word) {
        line = " " + line + " "; // ?adds space at start and end...
        int arr[] = new int[10];
        int length = 0;
        for (int i = 0; i < line.length(); i++) {
            if (line.charAt(i) == ' ') {
                arr[length++] = i;
            }
        }
        for (int index = 0; index < length - 1; index++) {
            String temp = line.substring(arr[index] + 1, arr[index + 1]);
            System.out.println("_" + temp + "_");
            if (temp.equalsIgnoreCase(word)) {
                System.out.print("\n/STRING matched/ " + temp + ": ");
                return true;
            }
        }
        return false;
    }

    public static void stringAppender(String str, String word) {
        if (!isPresent(str, word)) {
            str = str.concat(" ");
            str = str.concat(word);
        }
        System.out.println(str);
    }

    public static void main(String[] args) {
        String s = "This was the Sentense to match";
        // String w1 = "This";
        // String w2 = "was";
        // String w3 = "the";
        // String w4 = "sentense";
        // String w5 = "to";
        String w6 = "match";

        System.out.println(isPresent(s, w6) + "\n");

        // System.out.println(s);
        // String myword = "new";
        String myword = "sentense";
        if (!isPresent(s, myword)) {
            stringAppender(s, myword);
        }
    }
}

// output..
/*
 * _This_
 * _was_
 * _the_
 * _Sentense_
 * _to_
 * _match_
 * 
 * /STRING matched/ match: true
 * 
 * This was the Sentense to match
 * _This_
 * _was_
 * _the_
 * _Sentense_ //?now it will break where it founds...
 * 
 * /STRING matched/ Sentense:
 */
