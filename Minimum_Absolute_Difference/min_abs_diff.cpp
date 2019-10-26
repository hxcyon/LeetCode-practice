class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int i, j;
        vector<vector<int>> arr1;
        
        sort(arr.begin(), arr.end());
        int diff = arr.back();
        
        for(i = 0; i < arr.size()-1; i++){
            if((arr[i+1] - arr[i]) < diff)
                diff = arr[i+1] - arr[i];
        }
        
        for(i = 0; i < arr.size()-1; i++){
            if((arr[i+1] - arr[i]) == diff){
                vector<int> temp(2);
                temp[0] = arr[i];
                temp[1] = arr[i+1];
                arr1.push_back(temp);  
            }
        }
        return arr1;
    }
};
