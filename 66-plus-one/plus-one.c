int* plusOne(int* digits, int digitsSize, int* returnSize){
    *returnSize = digitsSize;
    int *arr = malloc(sizeof(int) * (*returnSize));
    int s = 1;
    for (int i = digitsSize - 1; i >= 0; i--)
    {
        if (digits[i] != 9 && s)
        {
            (digits[i])++;
            s=0;
        }
        else if (s)
            digits[i] = 0;
    }
    if (!s)
        return digits;
    (*returnSize)++;
    int *narr = malloc(sizeof(int) * (*returnSize));
    narr[0] = 1;
    for (int i = 0; i < digitsSize; i++)
        narr[i+1] = digits[i];
    return narr;
}