import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class A_Dreamoon_and_Stairs {
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }

        double nextDouble() {
            return Double.parseDouble(next());
        }

        String nextLine() {
            String str = "";
            try {
                str = br.readLine();
            } catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }

    static boolean check(int m, int N) {
        int a = N - m;
        int b = 2 * m - N;
        if (a >= 0 && b >= 0)
            return true;
        else
            return false;
    }

    public static void main(String[] args) {
        FastReader s = new FastReader();
        int n = s.nextInt();
        int m = s.nextInt();
        int t = m;
        while (true) {
            if (check(t, n)) {
                System.out.print(t);
                break;
            }
            if (t > n) {
                System.out.print(-1);
                break;
            }
            t += m;
        }
    }
}
