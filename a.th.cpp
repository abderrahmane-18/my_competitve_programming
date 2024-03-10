#include <iostream>
#include<stdbool.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
            int counter=0;

        int n;
        cin>>n;
        char arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
          for(int i=0;i<n;i++)
        {
if(arr[i]=='@' || arr[i]=='.' ) {

               // cout<<"yes"<<endl;

if(arr[i]=='@')
            {



                counter++;
//cout<<" i = "<<i << " and  counter  =  "<<counter<<endl;
                                }

               if((arr[i+1]=='*' && arr[i+2]=='*' )  )
            {
                   // cout<<"no"<<endl;
                    break;
                }

                }

        }
       //   cout<<"co "<<counter<<endl;
       cout<<counter<<endl;

    }


    return 0;

}
