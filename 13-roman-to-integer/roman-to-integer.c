

int romanToInt(char * s){
    int i = 0, c = 0;
    while (s[i])
    {
        if (i && s[i - 1] == 'I' && (s[i] == 'V' || s[i] == 'X'))
            c -= 2;
        else if (i && s[i - 1] == 'X' && (s[i] == 'L' || s[i] == 'C'))
            c -= 20;
        else if (i && s[i - 1] == 'C' && (s[i] == 'D' || s[i] == 'M'))
            c -= 200;
        if (s[i] == 'I')
            c += 1;
        else if (s[i] == 'V')
            c += 5;
        else if (s[i] == 'X')
            c += 10;
        else if (s[i] == 'L')
            c += 50;
        else if (s[i] == 'C')
            c += 100;
        else if (s[i] == 'D')
            c += 500;
        else if (s[i] == 'M')
            c += 1000;
        i++;
    }
    return (c);
}