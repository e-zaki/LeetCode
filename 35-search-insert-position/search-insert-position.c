int searchInsert(int* nums, int numsSize, int target){
    int s = 0, e = numsSize - 1, m;
    if (target <= nums[0])
        return 0;
    else if (target > nums[e])
        return numsSize;
    while (s <= e)
    {
        m = s + (e - s + 1)/2;
        if (target == nums[m])
            return m;
        else if (target > nums[m])
            s = m + 1;
        else
            e = m - 1;
    }
    return s;
}