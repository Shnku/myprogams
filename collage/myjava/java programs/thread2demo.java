public class thread2demo extends Thread {
    Thread t;
    String n;

    thread2demo(String name) {
        System.out.println("creating " + name + "thread.");
        this.n = name;
        t = new Thread(n);
    }

    @Override
    public void run() {
        System.out.println(n + " Thread start." + t);
        for (int i = 0; i < 5; i++) {
            System.out.println(" " + (i + 1) + "th ..." + n);
        }
        System.out.println("exiting thread.." + n + t);
    }

    public static void main(String[] args) {
        thread2demo d1 = new thread2demo("main");
        thread2demo d2 = new thread2demo("child");
        // d1.run();
        d1.start();
        // d2.run();
        d2.start();
    }
}

// output..
/*
 * creating mainthread.
 * creating childthread.
 * main Thread start.Thread[#20,main,5,main]
 * child Thread start.Thread[#22,child,5,main]
 * 1th ...child
 * 2th ...child
 * 3th ...child
 * 4th ...child
 * 5th ...child
 * exiting thread..childThread[#22,child,5,main]
 * 1th ...main
 * 2th ...main
 * 3th ...main
 * 4th ...main
 * 5th ...main
 * exiting thread..mainThread[#20,main,5,main]
 */
