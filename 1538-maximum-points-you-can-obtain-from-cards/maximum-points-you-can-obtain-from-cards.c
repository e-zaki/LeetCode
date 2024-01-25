int maxScore(int* cardPoints, int Size, int k){
    int s = 0;
    for (int i = 0; i < k; i++)
        s += cardPoints[i];
    int sum = s;
    for (int j = k - 1; j >= 0; j--)
    {
        sum -= cardPoints[j];
        sum += cardPoints[Size - k + j];
        if (sum > s)
            s = sum;
    }
    return s;
}