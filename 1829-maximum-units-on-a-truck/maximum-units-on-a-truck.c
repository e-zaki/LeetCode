void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int maximumUnits(int** boxTypes, int boxTypesSize, int* boxTypesColSize, int truckSize){
    int n = boxTypesSize;
    *boxTypesColSize = 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (boxTypes[j][1] < boxTypes[j+1][1])
            {
                swap((boxTypes[j] + 1),(boxTypes[j+1]) + 1);
                swap(boxTypes[j], boxTypes[j+1]);
            }
        }
    }
    int i = 0, s = 0;
    while (i < boxTypesSize && truckSize)
    {
        if(boxTypes[i][0] > truckSize)
        {
            s += (truckSize * boxTypes[i][1]);
            truckSize = 0;
        }
        else
        {
            s += (boxTypes[i][0] * boxTypes[i][1]);
            truckSize -= boxTypes[i][0];
        }
        i++;
    }
    return s;
}