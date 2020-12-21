int search(int* nums, int numsSize, int target){
    int l=0,r=numsSize;
    int m;
    while(l<r){
        m = l + (r-l) / 2;
        
        if(nums[m] == target){
            return m;
        }else if(nums[m]>target){
            r = m;
        }else{
            l = m+1;
        }
        
    }
    return -1;
}
