class Solution {
public:
    string removeDuplicates(string S) {
        int i, j = 0;
        for(i = 0; i < S.length(); i++, j++){
            S[j] = S[i];
            if(j > 0 && S[j - 1] == S[j])
                j -= 2;
        }
        return S.substr(0, j);
    }
};
