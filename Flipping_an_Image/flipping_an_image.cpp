class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int i, j;
        int temp;
        
        //vector<vector<int>> temp = A;
        
        for(i = 0; i < A.size(); i++){
            for(j = 0; j < A[i].size()/2; j++){
                // swap
                temp = A[i][j];
                A[i][j] = A[i][A[i].size() - j-1];
                A[i][A[i].size() - j-1] = temp;
                
            }
        } 
        
        for(i = 0; i < A.size(); i++){
            for(j = 0; j < A[i].size(); j++){
                // invert the image
                if(A[i][j] == 0)
                    A[i][j] = 1;
                
                else if(A[i][j] == 1)
                    A[i][j] = 0;
            }
        } 
        return A;
    }
};
