class Sol{  
    public static void main(String[] args) 
    { 
        int n;  
        Scanner sc=new Scanner(System.in);  

        //reading the number of elements from the that we want to enter  
          n=sc.nextInt();  
         //creates an array in the memory of length 10  
         int[] array = new int[10];  
      
         for(int i=0; i<n; i++)  
          {  
           //reading array elements from the user   
           array[i]=sc.nextInt();  
          }   
       int ans=0;
    for (int i=1;i<n;i++)
    {
        if (a[i] < a[i-1]) {
        ans += (a[i-1]-a[i]);
        a[i] = a[i-1];
        }
    }
    cout<<ans<<endl;
    } 
} 