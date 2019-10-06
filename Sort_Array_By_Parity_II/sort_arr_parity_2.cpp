class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int i;
        vector<int> even;
        vector<int> odd;
        vector<int> arr;
        
        for(i = 0; i < A.size(); i++){
            if(A[i] % 2 == 0)
                even.push_back(A[i]);
            else
                odd.push_back(A[i]);
        }
        for(i = 0; i < A.size(); i++){
            arr.push_back(even.back());
            even.pop_back();
            i++;
            arr.push_back(odd.back());
            odd.pop_back();
        }
        return arr;
    }
};
