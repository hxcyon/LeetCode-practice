class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int i, j;
        int sum = 0;
        vector<pair<int, int>> m;
        
        for(i = 0; i < mat.size(); i++){
            for(j = 0; j < mat[0].size(); j++){
                sum += mat[i][j];
            }
            m.emplace_back(sum, i);
            sum = 0;
        }
        sort(m.begin(), m.end());
        
        vector<int> res;
        for(i = 0; i < k; i++){
            res.push_back(m[i].second);
        }
        return res;
    }
};
