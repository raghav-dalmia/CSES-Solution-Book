import java.util.Scanner;

public class sol
{
    public static void main(String []args) 
    {
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        int ans = 1, curr = 1;
        for(int i = 1; i<s.length();i++)
        {
            if(s.charAt(i)!=s.charAt(i-1))
            {
                curr = 0;
            }
            curr++;
            ans = Math.max(ans, curr);
        }
        System.out.println(ans);
    }
}