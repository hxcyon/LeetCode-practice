class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> m;
        for(int i : arr)
            m[i]++;
        
        set<int> s;
        for(auto i: m){
            if(s.find(i.second) != s.end())
                return false;
            else
                s.insert(i.second); 
            //s[elem] = m.second;
        }
        return true; 
    }
};
