class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int i, j;
        int temp = 0;
        for(i = 0; i < A.size(); i++){
            temp = A[i];
            for(j = i+1; j < A.size() - i; j++){
                if(A[j] == temp){
                    return temp;
                    break;
                }
            }
        }
        return temp;
    }
};
