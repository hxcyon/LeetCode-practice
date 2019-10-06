class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count = 0;
        int i;        
        vector<int>arr = heights;
        sort(heights.begin(), heights.end());     

        for(i = 0; i < heights.size(); i++){
            if(heights[i] != arr[i])
                count++;
        }
        return count;
    }
};
