class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        int i, j;
        int count = 1;
        string arr[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        if(words.size() == 0)
            return 0;
        
        string morse[words.size()];
        
        for(i = 0; i < words.size(); i++){
            for(j = 0; j < words[i].length(); j++){
                //translate 
                morse[i] += arr[(int(words[i][j]) - 'a')];
            }
        }
        
        for(i = 1; i < (sizeof(morse)/sizeof(*morse)); i++){
            j = 0;
            for(j = 0; j < i; j++)
            {
                if(morse[i] == morse[j])
                    break;
            }
            if(i == j)
                count++;
        }
        return count;
    }
    
};
