package datetime.timepkg;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        System.out.println("---------------------");

        int h, m, s;
        Scanner sc = new Scanner(System.in);

        System.out.print("Put the 1st time : ");
        h = sc.nextInt();
        m = sc.nextInt();
        s = sc.nextInt();
        Mytime time1 = new Mytime(h, m, s);

        System.out.print("Put the 2nd time : ");
        h = sc.nextInt();
        m = sc.nextInt();
        s = sc.nextInt();
        Mytime time2 = new Mytime(h, m, s);

        Mytime result = new Mytime();

        result = time1.addtMytime(time2);
        time1.showTime("time1 ");
        time2.showTime("time2 ");
        result.showTime("resultant time");

        // close scanner...
        sc.close(); // try catch..resource leak warning gone...
    }
}
