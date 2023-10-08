//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            long N = Long.parseLong(read.readLine());

            Solution ob = new Solution();
            System.out.println(ob.isPerfectNumber(N));
        }
    }
}
// } Driver Code Ends



//User function Template for Java

class Solution {
    static int isPerfectNumber(long N) {
        
        
        // code here
        
         long ans = 0; // Initialize ans as 0
        
        for (int i = 1; i <= Math.sqrt(N); i++) {
            if (N % i == 0) {
                ans += i; // Add the factor
                
                if (i != (N / i)) { // Check whether the factor is not sqrt(N)
                    ans += (N / i); // Add another factor
                }
            }
        }
        
        // Now, ans is the sum of all unique factors of N
        
        // Check whether the given number is not 1 and is perfect
        if ((ans - N) == N && N != 1) {
            return 1;
        } else {
            return 0;
        }
        
        
        
    }
};