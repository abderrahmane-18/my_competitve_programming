// https://codeforces.com/contest/158/problem/A
#include <iostream>

using namespace std;

int main()
{ 
    int n;
   int k,cpt=0;
  
    cin>> n;
   
    cin>> k;

    int arr[n];
    for(size_t i=0;i<n;i++){
      
       cin >> arr[i];
    }



    for(size_t i=0;i<n;i++){

             
                 if((arr[i]>=arr[k-1])&&(arr[i]>0))
                 cpt=cpt+1;
                   






    }
    cout<<cpt;


    return 0;
}
