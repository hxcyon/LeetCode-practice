class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        vector<int> arr(1001, 0);
        int i, j;
        // find frequency 
        for(i = 0; i < arr1.size(); i++){
            arr[arr1[i]]++;
        }
        for(i = 0; i < arr2.size(); i++){
            for(j = 0; j < arr[arr2[i]]; j++){
                ans.push_back(arr2[i]);
            }
            arr[arr2[i]] = 0;
        }
        int k = 0;
        while(k < arr.size()){
            for(j = 0; j < arr[k]; j++)
                ans.push_back(k);
            k++;
        }
        
        return ans;
    }
};
