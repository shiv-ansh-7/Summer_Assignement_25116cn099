 import java.util.Scanner;
public class primerange {
    public static void main (String[] args){
        Scanner sc =new 
        Scanner(System.in);
        System.out.println("Enter the range:");
   
   
   
        int start= sc.nextInt();
   
        int end  = sc.nextInt();  
   
        System.out.println("Prime numbers between "+start+" and "+end+" are:");
        for(int i=start; i<=end; i++){
   
   
            if(i<2){
   
   
   
                continue;}

                boolean  isPrime = true;
                for(int j=2; j<=Math.sqrt(i); j++){     
   
   
      
                    if(i%j==0){
                        isPrime=false;
      
      
      
         
         
          
           
                         break;
                    }
             
             
             
                 }                if(isPrime){
                     System.out.print(i+" ");
               
               
               
               
               
                        }
                }
           }
    }

