#include <iostream>

using namespace std;

int main()
{

int n,a,b,s=0,i,j,cpt=0;

int m[5][5];

for(size_t i=0;i<5;i++){
        for(size_t j=0;j<5;j++){
          
                cin>>m[i][j];
        }
}
            
    for(size_t i=0;i<5;i++){
        for(size_t j=0;j<5;j++){
               if(m[i][j]==1){
                    a=i;
                    b=j;
                    while(j!=2){
                       if(j>2)
                  j=j-1;
               else   
                j=j+1;
                cpt++;
                    }
                    while(i!=2){
                       if(i>2)
                            i--;
                       else
                        i++;
                       cpt=cpt+1;

                    }
                    s=m[a][b];
                    m[a][b]=m[i][j];
                    m[i][j]=s;


               }


        }
    }

cout<<"\n";
  cout<<cpt;
}
