import java.io.*;
import java.util.*;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
 

public class B_Odd_Subarrays 
{   
    static class FastReader
    {
        BufferedReader br;
        StringTokenizer st;
 
        public FastReader()
        {
            br = new BufferedReader(
                new InputStreamReader(System.in));
        }
 
        String next()
        {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                }
                catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }
 
        int nextInt() { return Integer.parseInt(next()); }
 
        long nextLong() { return Long.parseLong(next()); }
 
        double nextDouble()
        {
            return Double.parseDouble(next());
        }
 
        String nextLine()
        {
            String str = "";
            try {
                str = br.readLine();
            }
            catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }

public static void main(String[] args) {
        FastReader s = new FastReader();
        int tst = s.nextInt();
        while(tst-- >0)
        {
            int n= s.nextInt();
            int[] v = new int[n];
            for(int i=0;i<n;i++)
            {
                v[i]=s.nextInt();
            }
            int ans=0,temp=1000000;
            for(int i=n-1;i>-1;i--)
            {
                if(v[i]>temp)
                {
                    ans++;
                    temp=1000000;
                }
                else temp=v[i];
            }
            System.out.println(ans);
        }
    }
}
