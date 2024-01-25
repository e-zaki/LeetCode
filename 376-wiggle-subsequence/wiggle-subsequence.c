

int wiggleMaxLength(int* nums, int numsSize){
    if (numsSize == 1)
        return 1;
    int i = 1, s = 1, j = 0;
    while (i < numsSize && nums[i] == nums[i-1])
        i++;
    while (i < numsSize)
    {
        int d = nums[i] - nums[i - 1];
        if (!j)
            s = d;
        if (d > 0 && s > 0){
            s *= -1;
            j++;
        }
        else if (d < 0 && s < 0)
        {
            s *= -1;
            j++;
        }
        i++;
    }
    return j + 1;
}