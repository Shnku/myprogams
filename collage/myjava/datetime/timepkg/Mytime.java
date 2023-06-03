package datetime.timepkg;

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
        this(h, m, 0);
    }

    public Mytime(int h) {
        this(h, 0);
    }

    public Mytime() {
        this.hour = this.min = this.sec = 0;
    }

    public Mytime addtMytime(Mytime t) {
        Mytime ret = new Mytime();
        ret.sec = this.sec + t.sec;
        ret.min = ret.sec / 60;
        ret.sec = ret.sec % 60;
        ret.min += this.min + t.min;
        ret.hour = ret.min / 60;
        ret.min = ret.min % 60;
        ret.hour += this.hour + t.hour;
        return ret;
    }

    public void showTime(String s) {
        if (this.sec > 60) {
            this.min += this.sec / 60;
            this.sec %= 60;
        }
        if (this.min > 60) {
            this.hour += this.min / 60;
            this.min %= 60;
        }
        System.out.println(s + "" + ":= " + hour + ":" + min + ":" + sec);
    }
}
