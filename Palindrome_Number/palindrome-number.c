int reverse(int num){
    int remainder = 0;
    long long int rev = 0;
    while(num)
    {
        remainder = num % 10;
        rev = rev * 10 + remainder; 
        if (rev > INT32_MAX || rev < INT32_MIN) return 0;
        num /= 10;
    }
    return rev;
}

bool isPalindrome(int x) {
    long long int res;
    if(x < 0) return false;
    res = reverse(x);
    
    if (res > INT32_MAX || res < INT32_MIN) return 0;
    if(res == x) return true;
    else return false;
}
