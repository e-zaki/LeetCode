int lengthOfLastWord(char * s){
    int l = strlen(s)-1, c = 0;
    while(l >= 0 && s[l] == ' ')
        l--;
    while(l >= 0 && s[l] != ' ')
    {
        c++;l--;
    }
    return c;
}