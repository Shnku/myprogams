/*
Create a class First, make instance variable [int x], method [void show ()] and also put
main method inside that class and use the instance variable and method from main.
 */

public class Ass2Qus3 {
    int x;

    void show() {
        System.out.println("showing x=" + x);
    }

    public static void main(String[] s) {
        Ass2Qus3 instanceQus3 = new Ass2Qus3();
        instanceQus3.x = 10;
        instanceQus3.show();

    }
}

//output..
/*
cd "/home/shanku/Public/myprogams/collage/sem2/" 
&& javac Ass2Qus3.java && java Ass2Qus3
showing x=10
 */
