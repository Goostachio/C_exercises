#include <iostream>
using namespace std;
int main(){
    int a, b, c, max, min;
    cout<<"enter 3 numbers: "<<endl;
    cin>>a>>b>>c;
    max=a;
    min=b;
    if (max<b){
        max=b;
    }
    if(max<c){
        max=c;
    }
    if(min>a){
        min=a;
    }
    if(min>c){
        min=c;
    }
    cout<<"hello world"<<" "<<a<<b<<c<<endl;
    cout<<"max is "<<max<<endl;
    cout<<"min is "<<min<<endl;
    return 0;
}
/*
#include <stdio.h>
int main(){
	int a = 10;
	int b = 5;
	int c = a * b;
	if (a > 5){
		if(b < 3){
			a = a + 2;
			b = b + 2;
		}
	}else{
		a = a + 1;
		b = b + 1;
	}
	printf("%d\n",a);
	printf("%d\n",b);
	return 1;
}
*/