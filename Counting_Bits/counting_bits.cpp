class Solution {
public:
    vector<int> countBits(int num) {
        int i;
        vector<int> arr(num+1, 0);
        
        for(i = 1; i <= num; i++){
            if(i%2 == 0)
                arr[i] = arr[i/2];
            else
                arr[i] = arr[int(i/2)] + 1;
        }
        return arr;
    }
};
