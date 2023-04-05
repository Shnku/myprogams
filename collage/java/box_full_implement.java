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



public class box_full_implement {
    public static void main(String[] args) {

    }
}
