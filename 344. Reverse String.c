void swap(char *q,char *p){
    char temp = *q;
    *q = *p;
    *p = temp;
}

void reverseString(char* s, int sSize){
    int i=0, j=sSize-1;
    
    while(i<j){
        swap(s+i,s+j);
        i++;j--;      
    }
    
}
