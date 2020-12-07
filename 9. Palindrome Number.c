bool isPalindrome(int x){
    if(x<0)return false;
    if(x==0)return true;
    int new_x = 0;
    int temp = x;
    while(temp != 0){
        if(new_x>INT_MAX/10||new_x<INT_MIN/10)return 0; //Overflow
        else if(new_x==INT_MAX/10||new_x==INT_MIN/10){ //maybe overflow
            if(x%10>INT_MAX%10||x%10<INT_MIN%10)return 0;
            // INT_MAX=(2^31)−1=2147483647，INT_MIN=(−2)^31=−2147483648
        }
        new_x = 10*new_x+temp%10;
        temp /=10;
    }
    if(new_x == x)return true;
    else return false;
}
