#include <iostream>
#include<stdbool.h>

using namespace std;

int main()
{
    int v=0;
    bool dist=true;
    int n1,n2,nc,r,s;

    cin >>n1;
    n1=n1+1;
    nc=n1;
    while(v==0){
            dist=true;
        n1=nc;
    while(n1!=0){
      r=n1%10;
      n1=n1/10;
      n2=n1;
      s=0;
      while((n2!=0)&&(dist==true)){
        s=n2%10;
        if(s==r)
         dist=false;

          n2=n2/10;
      }
    }


    if(dist==true){
         cout<<nc<<endl;
          v=1;
         break;
        

    }
    else

        nc=nc+1;






    }




return 0;
}
