class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        int arr[A.size()][26] = {0};
        vector<string> ans;
        int i, j;
        char temp;
        
        for(i = 0; i < A.size(); i++){
            for(j = 0; j < A[i].size(); j++){
                arr[i][A[i][j] - 'a']++;
            }
        }
        for(j = 0; j < 26; j++){
            int mini = INT_MAX;
            for(i = 0; i < A.size(); i++){
                mini = min(mini, arr[i][j]);
            }
            char c = (char)('a' + j);
            string str(1, c);
            
            while(mini--){
                ans.push_back(str);
            }
        }
        return ans;
    }
};
