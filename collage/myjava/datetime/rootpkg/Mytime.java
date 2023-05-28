package datetime.rootpkg;

/**
 * Mytime class...
 */
public class Mytime {

    protected int hour;
    protected int min;
    protected int sec;

    public Mytime(int h, int m, int s) {
        this.hour = h;
        this.min = m;
        this.sec = s;
    }

    public Mytime(int h, int m) {
        this.hour = h;
        this.min = m;
        this.sec = 0;
    }

    public Mytime(int h) {
        this.hour = h;
        this.min = 0;
        this.sec = 0;
    }
}
