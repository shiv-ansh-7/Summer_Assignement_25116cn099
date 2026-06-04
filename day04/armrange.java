import java.util.Scanner;

public class armrange {
    public static void main (String[]args){
        Scanner sc =new Scanner(System.in);
        System.out.println("enter the start no" );
        int start =sc.nextInt();
        System.out.println("enter the range");
        int end =sc.nextInt();
        for (int num= start;num<=end;num++){
            int temp =num;
            int digit = String.valueOf(num).length();
            int sum =0;
            while(temp>0){
                int rem= temp%10;
sum+=(int)Math.pow(rem,digit);
temp/=10;


            }if (sum == num){
                System.out.println(num);
            }
        }

        sc.close();

    }
}
