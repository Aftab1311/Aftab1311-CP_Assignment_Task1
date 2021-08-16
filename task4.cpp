#include <iostream>
using namespace std;

int Square(int x)
{
    return x * x;
}
bool isPrime(int n)
{

    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    int n, i, a, b, count = 0;
    cout << "Enter Number : ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        a = 2 * (Square(i));
        b = n - a;
        if (isPrime(b))
        {
            count++;
        }
    }
    cout << "No. of ways to represent " << n << " as (N=2*A^2 + P) : " << count;
    return 0;
}