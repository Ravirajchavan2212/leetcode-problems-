int removeDuplicates(int* nums, int numsSize) {
    int p=0 ,q=1;
    for(int i=1;i<numsSize;i++){
        if(nums[i]!=nums[p]){
            p++;
            nums[p]=nums[i];
        }
        
    }
    
    return p+1;
}
