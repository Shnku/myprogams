//Write dsh program to display any digit(n) from 0-9 represented as dsh "7 segment  display".

import java.util.Scanner;

public class S7DigitalDisplay {

    static String dsh = "_\n";
    static String dsh2 = "_";

    static String barLn = "|\n";
    static String bar = "|";

    static String barRn = "  |\n";
    static String barR = "  |";

    public static void main(String[] args) throws Exception {
        Scanner inr = new Scanner(System.in);
        int n = inr.nextInt();
        System.out.println("DIGITAL output: ---\n");
        // Add the necessary code in the below space

        switch (n) {
            case 0:
                System.out.println(" " + dsh + bar + dsh2 + barLn + bar + dsh2 + barLn);
                // break;
            case 1:
                System.out.println(barRn + barRn);
                // break;
            case 2:
                System.out.println(dsh + dsh2 + barLn + bar + dsh);
                // break;
            case 3:
                System.out.println(dsh + dsh2 + barLn + dsh2 + barLn);
                // break;
            case 4:
                System.out.println(bar + dsh2 + barLn + barR);
                // break;
            case 5:
                System.out.println(" " + dsh + bar + dsh + " " + dsh2 + barLn);
                // break;
            case 6:
                System.out.println(" " + dsh + bar + dsh + bar + dsh2 + bar);
                // break;
            case 7:
                System.out.println(dsh + barRn + barRn);
                // break;
            case 8:
                System.out.println(" " + dsh + bar + dsh2 + barLn + bar + dsh2 + bar);
                // break;
            case 9:
                System.out.println(" " + dsh + bar + dsh2 + barLn + barR);
                // break;
            default:
                break;
        }
        inr.close();
    }
}

//output..
/*
 * 
 0
DIGITAL output: ---

 _
|_|
|_|

  |
  |

_
_|
|_

_
_|
_|

|_|
  |
 _
|_
 _|

 _
|_
|_|
_
  |
  |

 _
|_|
|_|
 _
|_|
  |

 */
