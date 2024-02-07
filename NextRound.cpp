// https://codeforces.com/contest/158/problem/A
#include <iostream>

using namespace std;

int main()
{ 
    int number_paricipants;
   int k,cpt=0;
  
    cin>> number_paricipants;
   
    cin>> k;

    int arr[number_paricipants];
    for(size_t i=0;i<number_paricipants;i++){
      
       cin >> arr[i];
    }



    for(size_t i=0;i<n;i++){

             
                 if((arr[i]>=arr[k-1])&&(arr[i]>0))
                 cpt=cpt+1;
                   






    }
    cout<<cpt;


    return 0;
}
