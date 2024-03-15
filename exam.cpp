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
int main ()
{
    int n, counte=0, a;
    cout<<"enter your number: ";
    cin>>n;
    int count=0;
    for (int i=0; i<n; i++)
        {if (check_prime(i))
        {
            count++;
        }}
    int B[count], result=0;
    int j=0;

    for (int i=0; i<n; i++)
    {
        if (check_prime(i))
        {
            B[j]=i;
            j++;
        }
    }
 
    for(int i=0; i<count; i++)
        for (int j=0; j<count; j++)
         
            if (B[i] + B[j] == n)
            {
                result = 1;
                break;
            }
    if (result == 1)
    cout<<"yes";
    else 
    cout<<"no";
    return 0;
}
