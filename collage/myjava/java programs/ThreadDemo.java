public class ThreadDemo implements Runnable {
    Thread t;
    String n;

    ThreadDemo(String name) {
        System.out.println("creating " + name + "thread.");
        this.n = name;
        t = new Thread(n);
    }

    @Override
    public void run() {
        System.out.println(n + " Thread start." + t);
        for (int i = 0; i < 5; i++) {
            System.out.println(" " + (i + 1) + "th ...");
        }
        System.out.println("exiting thread.." + n + t);
    }

    public static void main(String[] args) {
        ThreadDemo d1 = new ThreadDemo("main");
        ThreadDemo d2 = new ThreadDemo("child");
        d1.run();
        d2.run();
    }
}

// putput..
/*
 * creating mainthread.
 * creating chieldthread.
 * main Thread running.... start.
 * 1th ...
 * 2th ...
 * 3th ...
 * 4th ...
 * 5th ...
 * exiting thread..
 * chield Thread running.... start.
 * 1th ...
 * 2th ...
 * 3th ...
 * 4th ...
 * 5th ...
 * exiting thread..
 */
