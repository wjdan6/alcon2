#include <iostream>

using namespace std;

int main()
{
    int n, p, new_n, t = 0;
    cin >> n;
    if (n < 10) n = 10 * n + n;
    new_n = n;
    while (1)
    {
        p = (new_n / 10) + (new_n % 10);
        new_n = (new_n % 10) * 10 + p % 10;
        t++;
        if (new_n == n) break;
    }
    cout << t;

}
