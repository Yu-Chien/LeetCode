int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int* ans = (int*)malloc(sizeof(int)*2);
    for(int i = 0; i < numsSize; ++i){
        for(int j = i + 1; j < numsSize; ++j){
            if(nums[i] + nums[j] == target){
                ans[0] = i;
                ans[1] = j;
                *returnSize = 2;
                return ans;
            }
        }
    }
    *returnSize = 0;
    return ans;
}

/*
Success  Details 
Runtime: 8 ms, faster than 73.60% of C online submissions for Two Sum.
Memory Usage: 5.9 MB, less than 89.26% of C online submissions for Two Sum.
*/
