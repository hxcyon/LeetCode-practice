class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int i, j, k; 
        bool flag = true;
        vector<int> freq(26, 0);
        vector<int> ans(26, 0);
        int count = 0;
        if(chars.length() == 0)
            return 0;
        
        for(i = 0; i < chars.length(); i++){
            freq[chars[i] - 'a']++;
        }
        for(i = 0; i < words.size(); i++){
            ans = freq;
            flag = true;
            for(j = 0; j < words[i].size(); j++){
                ans[words[i][j] -'a']--;
                if(ans[words[i][j] - 'a'] < 0){
                    flag = false;
                }
            }
            if(flag)
                count += words[i].size();
        }
        return count;
    }
};
