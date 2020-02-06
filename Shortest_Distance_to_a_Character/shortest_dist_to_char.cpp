class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        int n = S.length();
        vector<int> res(n, n);
        int i;
        int pos = -n;
        for(i = 0; i < n; i++){
            if(S[i] == C)
                pos = i;
            res[i] = min(res[i], abs(i - pos));
        }
        for(i = n-1; i >= 0; i--){
            if(S[i] == C)
                pos = i;
            res[i] = min(res[i], abs(i - pos));
        }
        return res;
    }
};
