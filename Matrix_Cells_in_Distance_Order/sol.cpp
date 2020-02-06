class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        
        auto comp = [r0, c0](vector<int> &A, vector<int> &B){
            return abs(A[0]-r0) + abs(A[1]-c0) < abs(B[0]-r0) + abs(B[1]-c0);
        };
        
        vector<vector<int>> arr;
        int i, j;
        for(i = 0; i < R; i++){
            for(j = 0; j < C; j++){
                arr.push_back({i, j});
            }
        }
        sort(arr.begin(), arr.end(), comp);
        
        return arr;
    }
};
