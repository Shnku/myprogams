import java.util.Scanner;

public class Gcd_anotherway {
    static int gcd(int m, int n) {
        System.out.printf("%d > %d ---> gcd(%d ,%d)\n", m, n, n, m);
        if (m > n)
            return gcd(n, m);
        System.out.printf("%d == %d\n", m, n);
        if (m == n)
            return m;
        System.out.printf("%d == 0\n", m);
        if (m == 0)
            return n;
        System.out.printf("%d == 1\n", m);
        if (m == 1)
            return 1;
        System.out.printf("gcd(%d , %d %% %d)\n", m, n, m);
        return gcd(m, n % m);
    }

    public static void main(String[] args) {
        // Read two numbers from the keyboard
        Scanner sc = new Scanner(System.in);
        int p1 = sc.nextInt();
        int p2 = sc.nextInt();
        System.out.print(gcd(p1, p2));
        sc.close();
    }
}

/*
12
18

12 > 18 ---> gcd(18 ,12)
12 == 18
12 == 0
12 == 1
gcd(12 , 18 % 12)

12 > 6 ---> gcd(6 ,12)
6 > 12 ---> gcd(12 ,6)
6 == 12
6 == 0
6 == 1
gcd(6 , 12 % 6)

6 > 0 ---> gcd(0 ,6)
0 > 6 ---> gcd(6 ,0)
0 == 6
0 == 0
6⏎

*/

/*
18
12

18 > 12 ---> gcd(12 ,18)
12 > 18 ---> gcd(18 ,12)
12 == 18
12 == 0
12 == 1
gcd(12 , 18 % 12)

12 > 6 ---> gcd(6 ,12)
6 > 12 ---> gcd(12 ,6)
6 == 12
6 == 0
6 == 1
gcd(6 , 12 % 6)

6 > 0 ---> gcd(0 ,6)
0 > 6 ---> gcd(6 ,0)
0 == 6
0 == 0
6⏎  

*/
