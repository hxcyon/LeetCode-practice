class Solution {
public:
    vector<int> partitionLabels(string S) {
        int i;
        int j = 0; 
        int count = 0;
        vector<int> last(26, 0);
        vector<int> ans;
        
        for(i = 0; i < S.length(); i++){
            last[S[i] - 'a'] = i;
        }
        
        for(i = 0; i < S.length(); i++){
            j = max(j, last[S[i] - 'a']);
            if(i == j){
                ans.push_back(i-count+1);
                count = i + 1;
            }
        }
        
        return ans;
    }
};
