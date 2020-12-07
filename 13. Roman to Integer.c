int romanToInt(char * s){
    int len = strlen(s);
    int sum = 0;
    
    char *roman= "IVXLCDM";
    int value[] = {1,5,10,50,100,500,1000};
    int largest = 1001;

    for(int i = 0;i<len;++i){
        int x = 0;
        while(s[i] != roman[x])    
            x++;
        if(value[x]>largest){ //前面減掉
            sum -=largest*2;
        }
        largest = value[x];
        sum += value[x];
    }
    return sum;
}
