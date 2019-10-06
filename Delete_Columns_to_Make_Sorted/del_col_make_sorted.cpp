class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        vector <int> D;
        int i;
        int j;
        int temp;

        
        for(j = 0; j < A[0].length(); j++){
            temp = 0;
            for(i = 0; i < A.size(); i++){
                if(temp > A[i][j] - 'a'){
                    D.push_back(j);
                    break;
                }
                temp = A[i][j] - 'a';
            }
        }
        return D.size();
    }
};
