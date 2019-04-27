int removeDuplicates(int* nums, int numsSize) {
    int length = 1;
    int i;
    int j = 0;
    
    if (numsSize == 0)
        return 0;
    if (numsSize == 1)
        return 1;
    
    for (i = 0; i < numsSize-1; i++) {
        if (nums[i] != nums[i+1]) {
            nums[i+1-j] = nums[i+1];
            length++;
        } 
        else 
            j++;         
    }
    return length;
}
