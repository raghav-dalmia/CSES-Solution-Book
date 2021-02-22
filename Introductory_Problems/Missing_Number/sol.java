import java.util.Scanner;

public class sol
{
    public static void main(String []args) {
        Scanner in = new Scanner(System.in);
        long n = Integer.parseInt(in.nextLine());
        long sum = 0;
        long actualSum = (n*(n+1))/2;
        for(long i = 1;i<n;i++){
            long num = Integer.parseInt(in.next());
            sum+=num;
        }
        System.out.println(actualSum - sum);
    }
} 