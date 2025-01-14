import java.util.Scanner;

class abc {
	public static void main(String[] args) {
		// while(true){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number");
		int n = sc.nextInt();
		int sum = 0;
		for (int i = 1; i <= n; i++)
			sum += i;
		System.out.println("Sum of first " + n + " natural numbers is " + sum);

		// }
	}
}