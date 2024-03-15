#include <iostream>
using namespace std;
 void swap(int &m, int &n){
    int a;
    m=n;
    n=m;
 }
int main(){
    int i,j,c;
    c=0;
    for(i=0;i<5;i++);
    {
        for(j = 0;j<5;j++);{
            c++;
        }
    }
    cout<<c;
}

