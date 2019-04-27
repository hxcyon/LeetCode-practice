

int strStr(char * haystack, char * needle){
    int lenh = strlen(haystack);
    int lenn = strlen(needle);
    int i;
    int j;
    int pos = 0;
    int temp;
    int flag = 0;
    
    if (needle[0] == NULL) 
        return 0;
    
    for(i = 0; i <= (lenh - lenn); i++){
        if(needle[0] == haystack[i]){
            flag = 0;
            for(j = 1; j < lenn; j++){
                if(haystack[i+j] == needle[j]){
                    flag = 0;
                }
                else{
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
                return i;
        }
    }
     return -1;
}


