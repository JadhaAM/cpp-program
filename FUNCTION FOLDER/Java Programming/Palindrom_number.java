import java.util.Scanner;

public class Palindrom_number{
    public static void main(String args[]){
        int  sum =0, r;
        
        Scanner sc =new Scanner(System.in);
        System.out.println("enter the number for cheking the ...\n");
        int n = sc.nextInt();
        int a= n;

        while(n != 0)
        {
            r = n%10;
            sum = (sum*10)+r; 
            n= n/10;
        }
        if(a==sum)
        {
            System.out.print( a+ " is Palindrom");
        }
        else
            System.out.print(a+" is not palindrom");
    }
}