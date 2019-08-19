class Solution {
public:
    bool match(string &w, string &pat){
        int i;
        vector<int> arr(26, 0);
        vector<int> arr1(26, 0);
        for(i = 0; i < w.size(); i++){
            
            if((arr[w[i] - 'a'] != 0 && arr[w[i] - 'a'] != pat[i]) || (arr1[pat[i] - 'a'] != 0 && arr1[pat[i] - 'a'] != w[i])){
                return false;
            }
                arr1[pat[i] - 'a'] = w[i];
                arr[w[i] - 'a'] = pat[i];
        }
        return true; 
    }
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        vector<string> ans;
        
        for(auto &w : words){
            if(match(w, pattern))
                ans.push_back(w);
        }
        return ans;
    }
};
