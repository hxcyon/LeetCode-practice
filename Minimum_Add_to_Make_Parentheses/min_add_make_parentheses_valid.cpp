class Solution {
public:
    int minAddToMakeValid(string S) {
        int i;
        int count = 0, res = 0;
        
        for(i = 0; i < S.length(); i++){
            if(S[i] == '(')
                count++;
            if(S[i] == ')')
                if(count > 0)
                    count--;
                else 
                    res++;
            
        }
        res = res + count;
        return res; 
        
    }
};
