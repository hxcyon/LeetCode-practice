class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int i,j;
        int count = 0;
        for(i = 0; i < S.length(); i++){
            for(j = 0; j < J.length(); j++){
                if(J[j] == S[i])
                    count++;
            }
        }
        return count;
    }
};
