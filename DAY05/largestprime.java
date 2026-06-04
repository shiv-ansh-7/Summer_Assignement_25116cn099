import java.util.Scanner;
public class largestprime {
    public static void main(String[] args) {
               Scanner sc = new Scanner(System.in);
              System.out.print("Enter a number: ");
         int num = sc.nextInt();
            int largestPrime = 0;
        for (int i = 2; i <= num; i++) {
              if (isPrime(i) && i > largestPrime) {
                   largestPrime = i;
              }
        }
        System.out.println("The largest prime factor  " + num + " is: " + largestPrime);
        sc.close();
    }

                 public static boolean isPrime(int n) {
        if (n <= 1) {
                   return false;
        }
              for (int i = 2; i <= Math.sqrt(n); i++) {
                             if (n % i == 0) {
                     return false;
            }
        }
        return true;
    }
}
