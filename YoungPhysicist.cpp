#include <iostream>

using namespace std;

int main()
{
int sum,sum1=0,sum2=0,n;


  
    cin>> n;
    int a[100][100];
for(size_t i=0;i<n;i++){
    for(size_t j=0;j<3;j++){
       
        cin >> a[i][j];


    }
  sum=sum+a[i][0];
  sum1=sum1+a[i][1];
  sum2=sum2+a[i][2];

    }
    if((sum==0&&sum1==0)&&sum2==0)
        cout<<"YES";
   else
        cout<<"NO";


}
