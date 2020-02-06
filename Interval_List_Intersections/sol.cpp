class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>> arr;
        int i;
        int j = 0;
        for(i = 0; i < B.size() && j < A.size();){
            if(A[j][0] > B[i][1])
                i++;
            else if(A[j][1] < B[i][0])
                j++;
            else{
                int start = max(A[j][0], B[i][0]);
                int end = min(A[j][1], B[i][1]);
                arr.push_back({start, end});
                if(A[j][1] < B[i][1])
                    j++;
                else
                    i++;
            }
        }
        return arr;
    }
};
