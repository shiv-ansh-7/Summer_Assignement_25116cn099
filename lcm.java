import java.util.Scanner;
public class lcm {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
              System.out.print("Enter the first digit: ");
            int a = sc.nextInt( );
       
       
  System.out.print("Enter the second second ");
       
        int b = sc.nextInt( );
       
       
       
               int lcm = findLCM(a, b);
              System.out.println("   The LCM of " + a + " and " + b + " is: " + lcm);
    }

          public static int findLCM(int a, int b) {
                    return (a * b) / findGCD(a, b);
    }

       public static int findGCD(int a, int b) {
        if (b == 0) {
            return a;
        }
                return findGCD(b, a % b);
    }
}
