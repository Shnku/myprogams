// import java.util.*;

abstract class Root {
	public Root() {
		System.out.println("in root constructor...");
	}

	abstract void play();

	abstract String[] rootfunc();
}

// child 1....................
class Child1 extends Root {
	public void play() {
		System.out.println("playing child 1..");
	}

	public String[] rootfunc() {
		System.out.println("in rootfunc of child 1...");
		return new String[] { "rootfunc of child 1" };
	}
}

// child 2....................
class Child2 extends Root {
	public void play() {
		System.out.println("playing child 2..");
	}

	public String[] rootfunc() {
		System.out.println("in rootfunc of child 2...");
		return new String[] { "rootfunc of child 2" };
	}

	public void c2Func() {
		System.out.println("in child 2's own c2Func....");
	}
}

// child 3............................
class Child3 extends Root {
	public void play() {
		System.out.println("playing child 3....");
	}

	public String[] rootfunc() {
		System.out.println("in rootfunc of child 3...");
		return new String[] { "rootfunc of child 3" };
	}

	public void c3Func() {
		System.out.println("in child 3's own c3Func....");
	}
}

// subclass extends child 1..................
class Subchild1 extends Child1 {
	public void play() {
		super.play();
	}

	public String[] rootfunc() {
		return new String[] { "_in subchild1" };
	}
}

// subclass extends child 1..................
class Subchild2 extends Child1 {
	public void play() {
		super.play();
	}

	public String[] rootfunc() {
		return new String[] { "_in subchild2" };
	}

	public void display() {
		System.out.println("subchild2 's own display func..");
	}
}

public class InstrumentMethod {
	public static void main(String[] args) {
		Child2 obj = new Child2();
		obj.play();
		String[] arr = obj.rootfunc();
		for (String item : arr) {
			System.out.println(item);
		}
		obj.c2Func();

		Subchild2 obj1 = new Subchild2();
		obj1.play();
		String[] str = obj1.rootfunc();
		for (String item : str) {
			System.out.println(item);
		}
		obj1.display();
	}
}