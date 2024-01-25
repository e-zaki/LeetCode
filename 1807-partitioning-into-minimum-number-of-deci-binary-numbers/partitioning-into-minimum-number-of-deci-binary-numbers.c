int minPartitions(char * n){
    int i = 0, m = n[0];
    while (n[++i])
    {
        if (n[i] > m)
            m = n[i];
    }
    return (m - '0');
}