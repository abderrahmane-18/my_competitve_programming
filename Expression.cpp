#include <iostream>

using namespace std;

int main()
{int a,b,c,m1,m2,m3,m4,max,m5;
int arr[5];
    cin >> a;
    cin >> b;
    cin >> c;
    
 m1=a+b*c;
m2=a*(b+c);
m3=a*b*c;
m4=(a+b)*c;
m5=a+b+c;
for(size_t i=0;i<5;i++){
    arr[0]=m1;
    arr[1]=m2;
    arr[2]=m3;
    arr[3]=m4;
    arr[4]=m5;
}
max=m1;
for(size_t i=1;i<5;i++){
    if(arr[i]>=max)
    max=arr[i];
}


          cout<<max;

    return 0;
}
