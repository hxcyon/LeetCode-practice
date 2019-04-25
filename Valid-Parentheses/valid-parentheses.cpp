class Solution {
public:
    bool isValid(string s) {
        int i;
        stack <char> p;
        for(i = 0; i < s.size(); i++){
            if(s[i] == '('|| s[i] == '{' || s[i] == '[')
                p.push(s[i]);
            else {
                if(p.empty()) return false;
                switch(s[i])
                {
                    case ')': if(p.top() != '(') return false;
                        break;
                    case '}': if(p.top() != '{') return false; 
                        break;
                    case ']': if(p.top() != '[') return false;
                        break;
                }
                p.pop();
            }
        }
        return p.empty();
    }
};
