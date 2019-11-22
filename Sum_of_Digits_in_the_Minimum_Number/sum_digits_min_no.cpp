class Solution {
public:
    int sumOfDigits(vector<int>& A) {
        int i;
        int mini = INT_MAX;
        
        for(i = 0; i < A.size(); i++){
            mini = min(mini, A[i]);
        }
        
        int temp = mini;
        int count = 0;
        while(temp){
            count += temp % 10;
            temp /= 10;
        }
        
        if(count % 2 == 0)
            return 1;

        return 0;
    }
};
