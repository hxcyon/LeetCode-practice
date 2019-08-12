class Solution {
public:
    string removeOuterParentheses(string S) {
        int i;
        int index;
        string temp;
        int count = 0;
        for(i = 0; i < S.size(); i++){
            if(S[i] == '('){
                count++;
                if(count != 1){
                    temp += S[i];
                }
            }
            else
            {
                count --;
                if(count != 0){
                    temp += S[i];
                }
            }
        }
        return temp;
    }
};
