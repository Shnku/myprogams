class Static1 {
    static int x = 10;
    static {
        x++;
        System.out.println("x= " + x);
    }
    {
        ++x;
        System.out.println("x= " + x);

    }
}

class Static22 extends Static1 {
    static {
        --x;
        System.out.println("x= " + x);
        // System.out.println("x= " + super.x); //!static cannot instanciated
        //!static means global .. so it changes every time..
    }
    {
        x--;
        System.out.println("x= " + x);

    }
}

public class StaticBlock_demo {
    public static void main(String[] args) {
        System.out.println(new Static22().x); //0; //10;
    }
}

/*
x= 11
x= 10
x= 11
x= 10
10
 */
