class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int i;
        sort(nums.begin(), nums.end());
        int sum = 0;
        for(i = 0; i < nums.size(); i += 2){
            sum += min(nums[i], nums[i+1]);
        }
        return sum;
    }
};
