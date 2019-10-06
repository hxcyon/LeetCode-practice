class Solution {
public:
    int matrixScore(vector<vector<int>>& A) {
        int i,j;
        int count = 0;
        int total = 0;
        bitset<31> bit;
        int col, row; 
        
        for(i = 0; i < A.size(); i++){
            if(A[i][0] == 0){
                for(j = 0; j < A[i].size(); j++){
                    A[i][j] ^= 1;
                }
            }
        }
        for(i = 0; i < A[0].size(); i++){
            for(j = 0; j < A.size(); j++){
                if(A[j][i] == 0){
                    count--;
                }
                else 
                    count++;
            }
            if(count < 0){
                for(col = i; col < i+1; col++){
                    for(row = 0; row < A.size(); row++){
                        A[row][col] ^= 1;   
                    }
                }
            }
            count = 0;
        }
        for(i = 0; i < A.size(); i++){
            for(j = 0; j < A[i].size(); j++){
                bit[A[0].size()-1-j] = A[i][j];
            }
            total += bit.to_ulong();
            bit.reset();
        }
        return total;
    }
};
