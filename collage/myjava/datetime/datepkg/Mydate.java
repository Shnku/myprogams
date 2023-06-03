package datetime.datepkg;

// import datetime.timepkg.Mytime;

public class Mydate {
    protected int day;
    protected int month;
    protected int year;

    public Mydate() {
        this.month = this.year = this.day = 0;
    }

    public Mydate(int d, int m, int y) {
        this.day = d;
        this.month = m;
        this.year = y;
    }

    public Mydate dayDifference(Mydate date) { // this is wrong...
        Mydate res = new Mydate();
        res.day = this.day - date.day;
        res.month = this.month - date.month;
        res.year = this.year - date.year;
        return res;
        /*
         * date1 := 4/2/2023
         * date2 := 5/8/2023
         * resultant date:= -1/-6/0
         */
    }

    public void showDate(String s) {
        System.out.println(s + "" + ":= " + day + "/" + month + "/" + year);
    }
}
