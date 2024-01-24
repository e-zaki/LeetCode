
bool isPalindrome(int x){
    if (x >= 0){
        if (x < 10)
            return (true);
        long int n1 = x, n2 = 0;
        while (n1)
        {
            n2 *= 10;
            n2 += n1 % 10;
            n1 /= 10;
        }
        return (n2 == x);
    }
    return (false);
}