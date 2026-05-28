import java.util.Scanner;

public class SumNaturalNumbers {
    public static void main(String[] args) {
        int n, sum = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        n = sc.nextInt();

        for (int i = 1; i <= n; i++) {
        sum = sum + i;
  }

        System.out.println("Sum of first " + n + " natural numbers = " + sum);

 sc.close();
    }
}