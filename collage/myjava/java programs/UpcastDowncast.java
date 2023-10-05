class A {
    String s1 = "A s1";
    String s2 = "A s2";
}

class B extends A {
    String s3 = "B s";
}

public class UpcastDowncast {
    public static void main(String[] args) {
        B objb = new B();
        A obja = objb;

        System.out.println(obja.s1);
        System.out.println(obja.s2);
        // System.out.println(obja.s3); //!error
        System.out.println(((B) obja).s3);
        //!note:: ( (B) obja ).s3

    }
}
//output..
/*
A s1
A s2
B s

 */
