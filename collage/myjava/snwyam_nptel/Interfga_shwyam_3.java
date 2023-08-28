/**
 * ShapeX
 */
interface ShapeX {
    String base = "this is ShapeX";

    void display1();
}

/**
 * ShapeY
 */
interface ShapeY extends ShapeX {
    String base = "this is ShapeY";

    void display2();
}

class ShapeG implements ShapeY {
    public String base = "This is Shape3";

    //Overriding method in ShapeX interface
    public void display1() {
        System.out.println("Circle: " + ShapeX.base);
    }

    public void display2() {
        // Override method in ShapeY interface
        System.out.println("Circle: " + ShapeY.base);
    }

}

/**
 //!there can be only one public class in a file..
 * Interfga_shwyam_3
 */
public class Interfga_shwyam_3 {
    public static void main(String[] args) {
        //Object of class shapeG is created and display methods are called.
        ShapeG circle = new ShapeG();
        circle.display1();
        circle.display2();
    }
}

//output..
/*
 * Circle: this is ShapeX
*  Circle: this is ShapeY
 */
