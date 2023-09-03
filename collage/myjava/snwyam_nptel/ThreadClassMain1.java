class ThreadA extends Thread {
    public void run() { // void run() //error..
        for (int i = 1; i <= 5; i++) {
            System.out.println("from thread A with: " + (i * -1));
        }
        System.out.println("__Exiting from thread A");
    }
}

// todo: when implementing Runnlable Interface..
class ThreadB implements Runnable {
    public void run() {
        for (int i = 1; i <= 5; i++) {
            System.out.println("from thread B with: " + (i * 10));
        }
        System.out.println("__Exiting from thread B");
    }

    public void start() {
        run();
    }
}

//todo:another approach...
class ThreadB2 implements Runnable {
    public void run() {
        System.out.println("another approiach runnable implemenatation running..");
    }
}

class ThreadC extends Thread {
    public void run() {
        for (int i = 1; i <= 5; i++) {
            System.out.println("from thread C with: " + (i * -100));
        }
        System.out.println("__Exiting from thread C");
    }
}

public class ThreadClassMain1 {
    public static void main(String[] args) {
        ThreadA tA = new ThreadA();
        ThreadB tB = new ThreadB();
        ThreadC tC = new ThreadC();
        tA.start();
        tB.start();
        tC.start();

        Thread tB2 = new Thread(new ThreadB2());
        tB2.start();

    }
}

/*result 1

from thread A with: -1
from thread A with: -2
from thread A with: -3
from thread A with: -4
from thread A with: -5
from thread B with: 10
__Exiting from thread A
from thread B with: 20
from thread B with: 30
from thread B with: 40
from thread B with: 50
__Exiting from thread B
from thread C with: -100
from thread C with: -200
from thread C with: -300
from thread C with: -400
from thread C with: -500
__Exiting from thread C
*/

/* result 2

from thread B with: 10
from thread A with: -1
from thread B with: 20
from thread A with: -2
from thread B with: 30
from thread A with: -3
from thread B with: 40
from thread B with: 50
from thread A with: -4
__Exiting from thread B
from thread A with: -5
__Exiting from thread A
from thread C with: -100
from thread C with: -200
from thread C with: -300
from thread C with: -400
from thread C with: -500
__Exiting from thread C
 
 */
