#include <iostream>
 
using namespace std;
 
int main()
{
 
 int row_index, col_index, swap_count = 0,minimum_number_of_moves=0;
 
int array2d[5][5];
 
for(size_t i=0;i<5;i++){
        for(size_t j=0;j<5;j++){
          
                cin>>array2d[i][j];
        }
}
            
    for(size_t i=0;i<5;i++){
        for(size_t j=0;j<5;j++){
               if(array2d[i][j]==1){
                    row_index=i;
                    col_index=j;
                    while(j!=2){
                       if(j>2)
                  j=j-1;
               else   
                j=j+1;
                minimum_number_of_moves++;
                    }
                    while(i!=2){
                       if(i>2)
                            i--;
                       else
                        i++;
                       minimum_number_of_moves=minimum_number_of_moves+1;
 
                    }
                    swap_count=array2d[row_index][col_index];
                    array2d[row_index][col_index]=array2d[i][j];
                    array2d[i][j]=swap_count;
 
 
               }
 
 
        }
    }
 
cout<<"\n";
  cout<<minimum_number_of_moves;
}