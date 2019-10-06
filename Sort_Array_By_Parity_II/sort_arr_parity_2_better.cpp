class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int i;
        vector<int> even, odd;
        
        for(i = 0; i < A.size(); i++){
            if(A[i] % 2 == 0)
                even.push_back(A[i]);
            else
                odd.push_back(A[i]);
        }
        for(i = 0; i < A.size(); i+=2){
            A[i] = even.back();
            even.pop_back();
        }
        for(i = 1; i < A.size(); i+=2){
            A[i] = odd.back();
            odd.pop_back();
        }
        return A;
    }
};
