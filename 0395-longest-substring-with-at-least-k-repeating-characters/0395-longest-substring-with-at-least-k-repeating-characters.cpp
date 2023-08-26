class Solution {
public:
    int longestSubstring(string s, int k) {
        int ans = 0;
        int n = s.length();
        for(int ch=1;ch<=26;ch++){
            vector<int> count(26, 0);
            int i = 0, j = 0, uniqChars = 0, noOfKMatched = 0;
            while(j < n){
                if(uniqChars <= ch){
                    int c = s[j] - 'a';
                    if(count[c] == 0) uniqChars++;
                    count[c]++;
                    if(count[c] == k) noOfKMatched++;
                    j++;
                }else{
                    int c = s[i] - 'a';
                    if(count[c] == k) noOfKMatched--;
                    count[c]--;
                    if(count[c] == 0) uniqChars--;
                    i++;
                }
                if(uniqChars == noOfKMatched && uniqChars == ch){
                    ans = max(ans, j - i);
                }
            }
        }
        return ans;
    }
};