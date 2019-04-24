int romanToInt(char* s) {
    int i;
    char a;
    char next;
    int b = 0;
    int counter = 0;
    size_t len = strlen(s);
    for(i = 0; i < (int)len; i++){
        a = s[i];
        next = s[i+1];
        switch(a){
            case 'I': if(next == 'V' || next == 'X') b = -1; else b = 1;
                break;
            case 'V': if(next == 'X' || next == 'L') b = -5; else b = 5;
                break;
            case 'X': if(next == 'L' || next == 'C') b = -10; else b = 10;
                break;
            case 'L': if(next == 'C' || next == 'D') b = -50;else b = 50;
                break;
            case 'C': if(next == 'D' || next == 'M') b = -100;else b = 100;
                break;
            case 'D': if(next == 'M') b = -500;else b = 500;
                break;
            case 'M': if(next == 'M') b = 1000;else b = 1000;
                break;
            default: b = 0;
                break;
        }
        counter += b;
    }
    return counter;
}
