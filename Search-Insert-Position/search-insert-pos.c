

int searchInsert(int* nums, int numsSize, int target){

    int i;
    int j = 0;
    
    for(i = 0; i < numsSize; i++){
        if(nums[i] < target)
            j++;
    }
    return j;
}


