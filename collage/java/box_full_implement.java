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

    float volume() {
        return height * lehgth * width;
    }

}

class box_with_weight extends box {
    float weight;

    box_with_weight(int l, int wd, int h, float w) {
        super(l, wd, h);
        weight = w;
    }
}

class box_package extends box_with_weight {
    float sipping_price;

    box_package(int l, int wd, int h, float w, float p) {
        super(l, wd, h, w);
        sipping_price = p;
    }
}

public class box_full_implement {
    public static void main(String[] args) {

    }
}
