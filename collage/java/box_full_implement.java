// import boxdemo.box;  //!not possible...as it has main method..

/**
 * box
 */
class box {
    int height, lehgth, width;

    box() {
        height = lehgth = width = 0;
    }

    box(int lehgth, int width, int height) {
        this.height = height;
        this.lehgth = lehgth;
        this.width = width;
    }

    box(int len) {
        height = width = lehgth = len;
    }

    double volume() {
        return height * lehgth * width;
    }

}

class box_with_weight extends box {
    double weight;

    box_with_weight(int l, int wd, int h, double w) {
        super(l, wd, h);
        weight = w;
    }
}

class box_package extends box_with_weight {
    double tax;

    box_package(int l, int wd, int h, double w, double p) {
        super(l, wd, h, w);
        tax = p;
    }

    double shipping_price_is() {
        return weight * tax;
    }
}

public class box_full_implement {
    public static void main(String[] args) {
        box_package obj = new box_package(4, 5, 6, 7, 10.2);

        System.out.println(obj.shipping_price_is());

    }
}
