#include<iostream>
#include <string>
using namespace std;
void permute(char a[], int low, int high)
{
    // Base case
    if (low == high)
        cout<<a<<endl;
    else
    {
        // Permutations made
        for (int i = low; i <= high; i++)
        {

            // Swapping done
            swap(a[low], a[i]);

            // Recursion called
            permute(a, low + 1, high);

            //backtrack
            swap(a[low], a[i]);
        }
    }
}

// Driver Code
int main()
{
    char str[] = "ABC";
    int n = 3;
    permute(str, 0, n-1);
    return 0;
}
 