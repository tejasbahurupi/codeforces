#include <iostream>
using namespace std;
int main()
{
    int x, a[101], b[101], k = 0, i, j;
    cin >> x;
    for (i = 0; i < x; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < x; j++)
        {
            if ((a[i] == b[j]) && i != j)
            {
                k = k + 1;
                break;
            }
        }
    }
    cout << x - k;
}
