#include<iostream>
using namespace std;

template <class T>
T max_numb(T x, T y){
    if (x > y){
        return x;
    }else{
        return y;
    }
}

template <class F>
F Max( F x, F y){
    if( x > y){
        return x;
    }else{
        return y;
    }
}

//write a Max() function template for 2 numbers

int main()
{
    cout<<max_numb(10,5)<<endl;
    cout<<Max(12.5f,17.3f);
}

/*

 #include<iostream>
using namespace std;

template <class F>
F Max( F x, F y){
    if( x > y){
        return x;
    }else{
        return y;
    }
}

//write a Max() function template for 2 numbers

int main()
{
    cout<<Max(10,5)<<endl;
    cout<<Max(12.5f,17.3f);
}

 */
