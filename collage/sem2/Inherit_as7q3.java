class Living {
    String name;

    Living(String s) {
        this.name = s;
    }

    void show() {
        System.out.println("name living= " + name);
    }
}

class Animal extends Living {
    String name;

    Animal(String s, String b) {
        super(s);
        this.name = b;
    }

    void show() {
        super.show();
        System.out.println("name Animal=" + name);
    }
}

class Lion extends Animal {
    String name;

    Lion(String s, String a, String b) {
        super(s, a);
        this.name = b;
    }

    void show() {
        super.show();
        System.out.println("name Lion=" + name);
    }
}

public class Inherit_as7q3 {
    public static void main(String[] args) {

        Lion objectLion = new Lion("sjwdj", "j", "jjkvj");
        objectLion.show();
    }
}

//out..
/*name living= sjwdj
name Animal=j
name Lion=jjkvj */
