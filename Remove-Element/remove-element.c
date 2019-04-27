
int removeElement(int* nums, int numsSize, int val){
    int length = 1;
    int i;
    int j = 0;
    
    if(numsSize == 0)
        return 0;
    
    if(numsSize == 1){
        if(val == nums[0])
            return 0;
        else
            return length;
    }
    
    length = 0;
    
    for(i = 0; i < numsSize; i++){
        if(val == nums[i]){
            j++;
        }
        else{
            nums[i-j] = nums[i];
            length++;
        }
    }
    return length;
}


