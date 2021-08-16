// TASK 4
// Name: Aftab Ahmed
/* AIM: Given an integer N, the task is to count the number of ways so that N can be written as the sum of a prime number and twice of a square, 
        i.e. N = 2*A2 + P, where P can be any prime number and A is any positive integer.
    Input: N = 9
    Output: 1
    Explanation:
        9 can be represented as sum of prime number and twice a square in only one way –
        N = 9 = 7 + 2*(1^2)
    Input: N = 15
    Output: 2
    Explanation:
        15 can be represented as sum of prime number and twice a square in two ways –
        N = 15 = 7 + 2 * (2^2)
        N = 15 = 13 + 2 * (1^2)
*/

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
