class Solution {
public:
    int smallestCommonElement(vector<vector<int>>& mat) {
        map<int, int> m;
        
        for(auto i : mat){
            for(int j : i){
                m[j]++;
                if(m[j] == mat.size())
                    return j;
            }
        }
        return -1;
    }
};
