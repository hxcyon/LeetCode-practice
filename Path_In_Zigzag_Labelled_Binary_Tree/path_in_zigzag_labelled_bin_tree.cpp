class Solution {
public:
    vector<int> pathInZigZagTree(int label) {
        vector<int> ans;
        int i;
        int count = 2;
        
        while(label){
            ans.push_back(label);
            label /= 2;
        }
        reverse(ans.begin(), ans.end());
        
        bool flag = false;
        if(ans.size()%2 == 0)
            flag = true;
        
        for(i = 0; i < ans.size(); i++){
            if(flag){
                ans[i] = count - 1 - (ans[i] - count/2);
            }
            count *= 2;
            // set flag to false if true vice versa
            flag = !flag;
        }
        return ans;
    }
};
