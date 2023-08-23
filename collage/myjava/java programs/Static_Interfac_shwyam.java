interface ExtraLarge {
    public String extra = "This is extra-large";

    // default public  void display() { //!we can't do that here..
    //     System.out.println(extra);
    // }
}

class Large {
    public void Print() {
        System.out.println("This is large");
    }
}

class Medium extends Large {
    public void Print() {
        super.Print();
        System.out.println("This is medium");
    }
}

class Small extends Medium {
    public void Print() {
        super.Print();
        System.out.println("This is small");
    }
}

public class Static_Interfac_shwyam implements ExtraLarge {
    public void display() {
        System.out.println(extra);
    }

    public static void main(String[] args) {
        Small s = new Small();
        s.Print();
        Static_Interfac_shwyam q = new Static_Interfac_shwyam();
        q.display();
    }
}
