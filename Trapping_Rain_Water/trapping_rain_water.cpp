class Solution {
public:
    int trap(vector<int>& height) {
        
        if(height.size() <= 1) return 0;
        int i;
        int size = height.size();
        vector<int> max_left(size);
        max_left[0] = height[0];
        
        vector<int> max_right(size);
        max_right[size-1] = height[size-1];
        
        int count = 0;
    
        for(i = 1; i < size; i++){
            max_left[i] = max(height[i], max_left[i-1]); 
        }
        
        for(i = size-2; i > 0; i--){
            max_right[i] = max(height[i], max_right[i+1]);
        }
        
        for(i = 1 ; i < size - 1; i++){
            count += min(max_left[i], max_right[i]) - height[i]; 
        }
        
        return count;
    }
};
