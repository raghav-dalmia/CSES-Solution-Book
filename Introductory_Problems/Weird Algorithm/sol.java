import java.util.Scanner;

public class sol
{
    public static void main(String []args) {
        Scanner in = new Scanner(System.in);
        long n = Integer.parseInt(in.nextLine());
        while (n!=1){
            System.out.print(n + " ");
            if(n%2==1)
                n = (n*3) + 1;
            else
                n = n/2;
        }
        System.out.println(1);
    }
} 