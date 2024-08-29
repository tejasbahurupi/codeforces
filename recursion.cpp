#include <iostream>
#include <string>
using namespace std;

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // string s = "madam";
    //  cout << true << endl;
    cout << fib(9) << endl;

    return 0;
}
