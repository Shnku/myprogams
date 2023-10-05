class DemoPrint {
    synchronized void printer(int n) {
        for (int i = 1; i < 10; i++) {
            System.out.println(i * n);
        }
        try {
            Thread.sleep(500);
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}

class Mythread1 extends Thread {
    DemoPrint d = new DemoPrint();

    Mythread1(DemoPrint d) {
        this.d = d;
    }

    public void run() {
        d.printer(3);
    }
}

class Mythread2 extends Thread {
    DemoPrint d = new DemoPrint();

    Mythread2(DemoPrint d) {
        this.d = d;
    }

    public void run() {
        d.printer(10);
    }
}

public class SyncThread {
    public static void main(String[] args) {
        DemoPrint obj = new DemoPrint();
        Mythread1 mt1 = new Mythread1(obj);
        Mythread2 mt2 = new Mythread2(obj);

        mt1.start();
        mt2.start();
    }
}

//not sync..
/*

3
6
9
12
15
18
21
24
10
20
30
40
50
60
70
80
90
27 <-end 1 is here
 */


 //synsec

 /*
va SyncThread
3
6
9
12
15
18
21
24
27 <-end 1
10
20
30
40
50
60
70
80
90
  */
