class Aims_root {
    static {
        Aims_base.display();
    }
}

class Aims_base extends Aims_root {
    static void display() {
        System.out.println("hello java");
    }
}

public class All_inherit_meth_static {
    public static void main(String[] args) {
        Aims_base.display();
    }
}

/*
javac All_inherit_meth_static.java && java All_inherit_meth_static
hello java
hello java
 */
