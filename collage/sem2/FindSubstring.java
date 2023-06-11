/*Take a String s1 and s2 as input and check whether s2 is present in s1 or not . 
If it is present display appropriate message 
but if it is not present then 
append s2 at the end of s1 and display s1. */

public class FindSubstring {

    public static boolean isPresent(String word, String sentense) {
        if (sentense.substring(0) == word) {
            return true;
        }
        return false;
    }

    public static void stringAppender(String str) {

    }

    public static void main(String[] args) {

    }
}
