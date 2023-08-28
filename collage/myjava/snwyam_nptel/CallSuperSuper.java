interface callerSuper {
    void caller();

}

class call1super {
    public void disp() {
        System.out.println("displaying root");
    }
}

class call22super extends call1super {
    public void disp() {
        super.disp();
        System.out.println("dosplaying base1");
    }
}

class call333super extends call22super implements callerSuper {
    public void disp() {
        // super.super.disp(); //allSuperSuper.java:16: error: <identifier> expected
        super.disp();
        System.out.println("dosplaying base22");
    }

    public void caller() {//?error if not make public ?
        System.out.println("define interface meth");
    }
}

public class CallSuperSuper {//implements callerSuper {
    //  void caller() { //?error if not make public ?
    //     System.out.println("define interface meth");
    // }

    public static void main(String[] args) {
        call333super foo = new call333super();
        foo.disp();
        foo.caller();
    }
}

/*
displaying root
dosplaying base1
dosplaying base22
define interface meth
 */

/*
If you remove the public access modifier while implementing the callerSuper interface, 
you will encounter an error. 
?This is because interface methods are implicitly public
 */
