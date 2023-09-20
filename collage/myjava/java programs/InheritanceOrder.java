class Animal {
    Animal() {
        System.out.println("Animal constructor");
    }
}

class Mammal extends Animal {
    Mammal() {
        System.out.println("Mammal constructor");
    }
}

class Dog extends Mammal {
    Dog() {
        System.out.println("Dog constructor");
    }
}

public class InheritanceOrder {
    public static void main(String[] args) {
        try {
            new Dog();
        } catch (Exception e) {
        }

    }
}

//output..
/*cd "/home/shanku/Public/myprogams/collage/myjava/java
 programs/" && javac InheritanceOrder.java && java Inherit
anceOrder

Animal constructor
Mammal constructor
Dog constructor 
*/
