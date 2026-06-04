import java.util.Scanner;
public class nthfab{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
          System.out.print("Enter the nth no. :");
                            int n = scanner.nextInt();
           int a=0, b=1 ,c=0;
                            if (n==1){
                                      System.out.println("The nth no. is : " + a);
                            }
                                       else if (n==2){
                                                         System.out.println("The nth no. is : " + b);
                            }
                            else{
                                for (int i=3; i<=n; i++){
                                    c=a+b;
                                    a=b;
                                    b=c;
                                }
                                System.out.println("The nth no. is : " + c);
                            }
                        
                    

    }
}                     