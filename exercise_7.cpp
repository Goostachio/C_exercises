#include <iostream>
using namespace std;
int power(int base, int exponent)
{
    int result;
    if (exponent == 0)
    result = 1;
    else
    result = (base*power(base,exponent - 1));
    return result;
}
int main()
{
    int base, exponent;
    cout<<"enter your base number: ";
    cin>>base;
    cout<<"enter your exponent: ";
    cin>>exponent;
    if (exponent == 0 & base == 0)
    cout<<"undefined";
    else
    cout<<base<<"^"<<exponent<<"="<<power(base,exponent);
    return 0;
}

