interface First {
    // default method 
    default void show() {
        System.out.println("Default method implementation of First interface.");
    }
}

interface Second {
    // Default method 
    default void show() {
        System.out.println("Default method implementation of Second interface.");
    }
}

public class Static_interface_2_shwm implements First, Second {
    public void show() {
        // public static void show() { //?what error??
        //!This static method cannot hide the instance method from First..
        //!cant use super in static context...
        
        First.super.show();
        Second.super.show();

    }

    public static void main(String[] args) {
        Static_interface_2_shwm obj = new Static_interface_2_shwm();
        obj.show();
    }
}

//output..
/*
javac Static_interface_2_shwm.java && java Static_interface_2_shwm
Default method implementation of First interface.
Default method implementation of Second interface. 
*/
