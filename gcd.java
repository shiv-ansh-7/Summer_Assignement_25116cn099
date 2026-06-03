 import java.util.Scanner;
 public class gcd {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the first digit: ");
        int a = sc.nextInt( );
       
       
       
        System.out.print("Enter the second second ");
       
       
        int b = sc.nextInt( );
       
       
       
        int gcd = findGCD(a, b);
        System.out.println("   The GCD of " + a + " and " + b + " is: " + gcd);
    }

    public static int findGCD(int a, int b) {
        if (b == 0) {
            return a;
        }
        return findGCD(b, a % b);
    }
}
