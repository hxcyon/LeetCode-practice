class Solution {
public:
    bool check(int i){
        int current;
        int temp;
        current = i;
        while(i > 0){
            temp = i % 10;
            i /= 10;
            if(temp == 0 || current % temp != 0){
                return false;
            }
        }
        return true;
    }
    
    vector<int> selfDividingNumbers(int left, int right) {
        int i = 0;
        vector<int> res;
        
        for(i = left; i <= right; i++){
            if(check(i))
                res.push_back(i);
        }
        return res;
    }
};
