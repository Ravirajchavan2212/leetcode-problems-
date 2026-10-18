int missingNumber(int* nums, int numsSize) {
    int exp;
    int act=0;
    exp=(numsSize*(numsSize+1))/2;
    for(int i=0;i<numsSize;i++){
        act=act+ nums[i];
    }
    return exp-act;
}
