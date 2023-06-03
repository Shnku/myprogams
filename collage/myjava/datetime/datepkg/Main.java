package datetime.datepkg;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        System.out.println("---------------------");

        int d, m, y;
        Scanner sc = new Scanner(System.in);

        System.out.print("Put the 1st time : ");
        d = sc.nextInt();
        m = sc.nextInt();
        y = sc.nextInt();
        Mydate date1 = new Mydate(d, m, y);

        System.out.print("Put the 2nd time : ");
        d = sc.nextInt();
        m = sc.nextInt();
        y = sc.nextInt();
        Mydate date2 = new Mydate(d, m, y);

        Mydate result = new Mydate();

        result = date1.dayDifference(date2);
        date1.showDate("date1 ");
        date2.showDate("date2 ");
        result.showDate("resultant date");

        sc.close();
    }
}
