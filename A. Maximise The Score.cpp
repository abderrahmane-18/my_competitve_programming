#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {

long long  n;
cin>>n;

long long arr[n*2];
long long k=1;
vector<int>v;
long long sum=0;
for (int i = 0; i < n*2; i++)

{
cin>>arr[i];

}
int l=n*2;
sort(arr,arr+l, greater<int>());
for (int i = 0; i < n*2; i++)
{
if(k!=0 && k%2==0)
{
if(arr[i]<=arr[i-1]){
 //   v.push_back(arr[i]);
    sum+=arr[i];
}
else 
{
      // v.push_back(arr[i-1]);
           sum+=arr[i-1];

 

}


}
k++;

    }
    //cout<<" sum = "<<sum<<endl;
    cout<<sum<<endl;

    }  
    
    return 0;
}