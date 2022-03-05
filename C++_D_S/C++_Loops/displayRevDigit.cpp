void digits(int number){
    int r = 0;
    while(number > 0){
        r = number % 10;
        number = number / 10;
        cout<<r;
    }
}