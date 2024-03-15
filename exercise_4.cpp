#include <iostream>
using namespace std;
int fibo(int);
int main ()
{
    int n, result;
    cout<<"enter a number : ";
    cin>>n;
    result = fibo(n);
    if (result == -1)
    cout<<"no fibonacci value";
    else
    cout<<"fibonacci value of "<<n<<" is "<<result;
    return 0;
}

int fibo(int n) 
{
    int t1 = 0, t2 = 1, temp;
    if (n < 0)
    return -1;
    else if (n == 0)
    return 0;
    else if (n == 1)
    return 1;
    else 
    {
        for (int i = 1; i<n; i++)
        {
            temp = t1 + t2;
            t1 = t2;
            t2 = temp;
        }
        return temp;
    }

}


