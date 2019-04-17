/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int i;
    int *arr = (int*)malloc(sizeof(int)*2);
    int a, b;
    for(i = 0; i < numsSize; i++)
    {
        a = nums[i];
        for(int j = i + 1; j < numsSize; j++){
            b = nums[j];
            if ((a+b) == target){
                arr[0] = i;
                arr[1] = j;
                return arr;
                break;
            }
        }
    }
    return; 
}
