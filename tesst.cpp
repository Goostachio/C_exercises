#include <iostream>
using namespace std;
bool check_prime(int n)
{
    bool is_prime = true;
    if (n == 0 || n == 1)
    is_prime = false;
    for (int i = 2 ; i < n ; i++)
    {
        if (n%i == 0)
        {
            is_prime = false;
            break;
        }
    }
    return is_prime;
}
int main()
{
    int n;
    cin>>n;
    check_prime(n);
    return 0;
}