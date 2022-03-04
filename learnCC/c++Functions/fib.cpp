// Fibonacci Series using Space Optimized Method
#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    int a = 0, b = 1, c, i;
    if( n == 0)
        return a;
    for(i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

// Driver code
int main()
{
    int n = 9;

    cout << fib(n);
    return 0;
}

// This code is contributed by Code_Mech

// C++ program for Fibonacci Series
// using Dynamic Programming
#include<bits/stdc++.h>
using namespace std;

class GFG{

public:
    int fib(int n)
    {

        // Declare an array to store
        // Fibonacci numbers.
        // 1 extra to handle
        // case, n = 0
        int f[n + 2];
        int i;

        // 0th and 1st number of the
        // series are 0 and 1
        f[0] = 0;
        f[1] = 1;

        for(i = 2; i <= n; i++)
        {

            //Add the previous 2 numbers
            // in the series and store it
            f[i] = f[i - 1] + f[i - 2];
        }
        return f[n];
    }
};

// Driver code
int main ()
{
    GFG g;
    int n = 9;

    cout << g.fib(n);
    return 0;
}

// This code is contributed by SoumikMondal


//Fibonacci Series using Recursion
#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

int main ()
{
    int n = 9;
    cout << fib(n);
    getchar();
    return 0;
}

// This code is contributed
// by Akanksha Rai