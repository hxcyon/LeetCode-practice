class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int i = 0, j;
        int end = A.size()-1;
        int temp = 0;
        
        while(i < end){
            while(A[i] % 2 == 0 && i < end){
                i++;
            }
            while(A[end] % 2 == 1 && i < end){
                end--;
            }
            temp = A[i];
            A[i] = A[end];
            A[end] = temp;
        }
        
        return A;
    }
};
