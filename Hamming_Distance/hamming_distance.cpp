class Solution {
public:
    int hammingDistance(int x, int y) {
        // X XOR Y 
        int z = x ^ y;
        int temp = 0;
        
        while(z > 0){
            temp += z & 1;
            z >>= 1;
        }
        return temp;
    }
};
