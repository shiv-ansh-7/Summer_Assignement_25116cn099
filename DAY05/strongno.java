import java.util.Scanner;
public class strongno {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
      
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
      
        int originalNum = num;
      
        int sum = 0;
        while(num > 0) {
            int digit = num % 10;
            int factorial = 1;
            for (int i = 1; i <= digit; i++) {
                factorial *= i;
            }
               sum += factorial;
                  num /= 10;
        }
        if    (sum == originalNum) {
                      System.out.println(originalNum + "this is a strong Number.");
        } else  {
              System.out.println(originalNum + "this is not a strong Number.");
        }
               sc.close();
    }
}
