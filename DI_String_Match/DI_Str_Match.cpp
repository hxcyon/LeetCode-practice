class Solution {
public:
    vector<int> diStringMatch(string S) {
        int i;
        vector<int> ans(S.length()+1, 0);
        int left = 0;
        int right = S.length();
        
        for(i = 0; i < S.length(); i++){
            if(S[i] == 'I')
                ans[i] = left++;
            else 
                ans[i] = right--;
        }
        ans[S.length()] = left;
        
        return ans;
    }
};
