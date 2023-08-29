
/**
 * clsInside_Intface
 */
interface clsInside_Intface {

    class class_Inside_Intface {
        int i;

        public class_Inside_Intface(int i) {
            this.i = i;
        }

        int display() {
            return ++i;
        }
    }
}

public class Cls_inside_Intfc {
    public static void main(String[] args) {
        clsInside_Intface.class_Inside_Intface object = new clsInside_Intface.class_Inside_Intface(10);
        System.out.println(object.display()); //output 11;

        // clsInside_Intface iface_ref=new clsInside_Intface;//!error..
    }
}
