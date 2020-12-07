int reverse(int x){
    int new_x=0;
    while(x!=0){
        if(new_x>INT_MAX/10||new_x<INT_MIN/10)return 0; //Overflow
        else if(new_x==INT_MAX/10||new_x==INT_MIN/10){ //maybe overflow
            if(x%10>INT_MAX%10||x%10<INT_MIN%10)return 0;
            // INT_MAX=(2^31)−1=2147483647，INT_MIN=(−2)^31=−2147483648
        }
        new_x=new_x*10+x%10;
        x/=10;
    }
    return new_x;
}
