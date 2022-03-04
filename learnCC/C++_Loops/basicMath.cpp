void digits(int number){
    int r = 0;
    while(number > 0){
        r = number % 10;
        number = number / 10;
        cout<<r;
    }
}

void armStrong(int n){
    int sum = 0, r;
    int m =n;
    while(n > 0){
        r = n % 10;
        n = n / 10;
        sum = sum + (r * r * r);
        cout<<sum<<endl;
    }
    if(sum == m){
        cout<<sum<<" armstrong";
    }else{
        cout<<"not armstrong";
    }
}

void reverse(int number){
    int rev = 0;
    int m = number;
    int r;
    while( number > 0){
        r = number % 10;
        number = number / 10;
        rev = rev * 10 + r;
    }
    if( m  == rev){
        cout<<rev<<" is a palindrome"<<endl;
    }else{
        cout<<rev<<" is not a palindrome"<<endl;
    }
}

void getGCD(int number_1, int number_2){
    int gcd = 0;
    while( number_1 != number_2) {
        if (number_1 > number_2) {
            number_1 = number_1 - number_2;
        } else if (number_2 > number_1) {
            number_2 = number_2 - number_1;
        }
    }
    cout<<number_1<<endl;
}

