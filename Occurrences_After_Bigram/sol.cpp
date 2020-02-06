class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        stringstream s(text);
        string word;
        vector<string> temp;
        vector<string> res;
        
        while(s >> word){
            temp.push_back(word);
        }
        int i;
        for(i = 0; i < temp.size()-2; i++){
            if(temp[i] == first && temp[i+1] == second)
                res.push_back(temp[i+2]);
        }
        return res;
    }
};
