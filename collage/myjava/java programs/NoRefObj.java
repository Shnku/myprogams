
class NoRefObj {

    static int val;
    int val2;

    NoRefObj(int val) {
        NoRefObj.val = val; // As static not using this.val=val...
        // NoRefObj.val2 = val; // !cant do as nonstatic
        this.val2 = val; // ?without this first output get...

    }

    int getval() {
        return val2;
    }

    static int getaval() {
        return val;
    }

    public static void main(String[] args) {
        new NoRefObj(45);
        int v = NoRefObj.getaval();

        NoRefObj foo = new NoRefObj(53);
        int v2 = foo.getval();

        System.out.println("val is : " + v);
        System.out.println("Non static val is : " + v2);

    }
}

// output 1
/*
 * val is : 45
 * Non static val is : 0
 */

// output after constructor fixing..
/*
 * val is : 45
 * Non static val is : 53
 */
