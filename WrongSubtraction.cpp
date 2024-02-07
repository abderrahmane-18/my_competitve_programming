#include <iostream>

using namespace std;

int main()
{
int k,n,i;

cin>>n;
cin>>k;


i=1;

while(i<=k){
 if(n%10==0)
 n=n/10;
else
    n=n-1;

i=i+1;

}
cout<<n;
}
