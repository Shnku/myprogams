import java.util.Scanner;

class BinaryNumber {
	public static void main(String[] args) {
		int num1, num2;
		int i = 0;
		int r[] = new int[10];
		int r1[] = new int[10];
		int r2[] = new int[10];
		Scanner sc = new Scanner(System.in);
		System.out.println("enter the first Decimal number");
		num1 = sc.nextInt();
		for (i = 0; num1 > 0; i++) {
			r[i] = num1 % 2;
			num1 = num1 / 2;
		}
		// reverse order;
		System.out.println("For First number-");
		for (i = i - 1; i >= 0; i--) {
			System.out.print(r[i]);
		}
		System.out.println("\n");
		System.out.println("enter the Second Decimal number");
		num2 = sc.nextInt();
		for (i = 0; num2 > 0; i++) {
			r1[i] = num2 % 2;
			num2 = num2 / 2;
		}
		// reverse order;
		System.out.println("For First number-");
		for (i = i - 1; i >= 0; i--) {
			System.out.print(r1[i]);
		}
		System.out.println("\n");
		System.out.println("For Adding r and r1:-");
		for (i = 0; i < 4; i++) {
			r2[i] = r[i] + r1[i];
			System.out.print(r2[i]);
		}
		System.out.println("\n");
		System.out.println("IN reversing order");
		for (i = i - 1; i >= 0; i--) {
			System.out.print(r2[i]);
		}
		sc.close();
	}
}