class Solution {
public:
    string reverseWords(string s) {
        int i = 0, j = 0;
        int count = 0;
        int start = 0;
        int end = 0;
        
        while(i < s.length()){
            while(s[i] == ' '){
                i++;
            }
            start = i;
            while(s[start] != ' ' && start < s.length()){
                start++;
            }
            end = start;
            
            for(j = i; j < (i + end)/2; j++){
                int temp = s[j];
                s[j] = s[end -1 - j + i]; 
                s[end -1 -j + i] = temp;
            }
            i = end;
        }
        return s; 
    }
};
