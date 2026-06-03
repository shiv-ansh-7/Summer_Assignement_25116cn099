import java.util.Scanner;

public class CountDigits {
    public static void main(String[] args) {
         int num, count = 0;
          Scanner sc = new Scanner(System.in);
           System.out.print("Enter a number: ");
           num = sc.nextInt();
            while (num != 0) {
            num = num / 10;
        count++;
        }
        System.out.println(" The Number of digits = " + count);
           sc.close();
    }
}
