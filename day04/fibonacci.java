import java.util.Scanner;
public class fibonacci {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
               System.out.print("Enter the number       ");
                           int n = scanner.nextInt();
        scanner.close( ) ;

        System.out.println("Fibonacci sequence up to " + n + " terms:");
                for (int i = 0; i < n; i++) {
                     System.out. print(fibonacci(i) + " ");
         }
    }

               public static int fibonacci(int n) {
        if (n <= 1) {
            return n;
        }
              return fibonacci(n - 1) + fibonacci(n - 2);
    }
}