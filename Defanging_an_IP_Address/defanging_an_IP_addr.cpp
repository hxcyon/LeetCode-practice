class Solution {
public:
    string defangIPaddr(string address) {
        int i;
        string all = "";
        for(i = 0; i < address.length(); i++){
            if(address[i] == '.'){
                all += "[.]";
            }
            else all += address[i];
        }
        return all;
    }
};
