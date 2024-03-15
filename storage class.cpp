#include <iostream>
using namespace std;
void testauto();
int main()
{
    int count; //local auto variable
    for (count = 1 ; count<=3 ; count++)
        testauto();
    return 0;
}

void testauto()
{
    int num = 0; //local auto variable
    cout<<"the value of the automatic variable num is "<<num<<endl;
    num++;
    return;
}