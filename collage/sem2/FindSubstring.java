/*Take a String s1 and s2 as input and check whether s2 is present in s1 or not . 
If it is present display appropriate message 
but if it is not present then 
append s2 at the end of s1 and display s1. */

public class FindSubstring {

    public static boolean isPresent(String word, String line) {
        int arr[] = new int[10];
        int length = 0;
        arr[length++] = 0;
        for (int i = 0; i < line.length(); i++) {
            if (line.charAt(i) == ' ') {
                arr[length++] = i + 1; // space_index +1
            }
        }
        arr[length++] = line.length() + 1;

        for (int i : arr) {
            System.out.println(i);
        }
        System.out.println("length= " + line.length());

        for (int i = 0, j = 1; i < line.length(); i++) {
            if (j < length && i == arr[j - 1]) {

                System.out.print(arr[j - 1] + "_to_" + (arr[j] - 1) + "||");
                System.out.println(line.substring(arr[j - 1], arr[j] - 1) + "=" + word);

                if (line.substring(arr[j - 1], arr[j] - 1).equalsIgnoreCase(word)) {
                    System.out.print("\nreturn: ");
                    return true;
                }
                j++;
            }
            // System.out.println(" .........." + i);
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
        String s = "This is the Sentense to match";
        // String w1 = "This";
        // String w2 = "is";
        // String w3 = "the";
        // String w4 = "sentense";
        // String w5 = "to";
        String w6 = "match";

        System.out.println(isPresent(w6, s));
        String myword = "asga";
        stringAppender(s, myword);
    }
}

// !the last word causing problem...
// ?all other words takes space after them but the last word not...
/*
 * 24_to_28||matc=match //heres its..
 * ..........24
 * ..........25
 * ..........26
 * ..........27
 * ..........28
 * ..........29
 */
// todo: arr[length++] = line.length() + 1;
// !not arr[length++] = line.length() ;
// ?in this fixing{ i < line.length() or <= }doesnot matters
// ?also {j < length or j<=length} doesnot matter..
/*
 * 21_to_23||to=match
 * ..........21
 * ..........22
 * ..........23
 * 24_to_29||match=match
 * 
 * return: true
 */
// here the loop doesn't go after 23 ... so this is efficient to cheak before
// not end.. in that case output will like this...
// ..........0
// ..........1
// ..........2
// ..........3
// ..........4
// 0_to_4||This=match //?first loop then match ..

/// .................output.............
/*
 * 0
 * 5 //..including space
 * 8
 * 12
 * 21
 * 24
 * 30
 * 0
 * 0
 * 0
 * length= 29.....//length of sentense..
 * 0_to_4||This=match ... //space -i => arr[j-1] to arr[j]-1
 * 5_to_7||is=match
 * 8_to_11||the=match
 * 12_to_20||Sentense=match
 * 21_to_23||to=match
 * 24_to_29||match=match
 * 
 * return: true
 * 0
 * 5
 * 0
 * 0
 * 0
 * 0
 * 0
 * 0
 * 0
 * 0
 * length= 4
 * 0_to_4||asga=This is the Sentense to match
 * This is the Sentense to match asga
 */
