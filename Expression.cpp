#include <iostream>

using namespace std;

int main()
{int positive_number1,positive_number2,positive_number3,max1,max2,max3,max4,max,max5;
int arr[5];
    cin >> positive_number1;
    cin >> positive_number2;
    cin >> positive_number3;
    
 max1=positive_number1+positive_number2*positive_number3;
max2=positive_number1*(positive_number2+positive_number3);
max3=positive_number1*positive_number2*positive_number3;
max4=(positive_number1+positive_number2)*positive_number3;
max5=positive_number1+positive_number2+positive_number3;
for(size_t i=0;i<5;i++){
    arr[0]=max1;
    arr[1]=max2;
    arr[2]=max3;
    arr[3]=max4;
    arr[4]=max5;
}
max=max1;
for(size_t i=1;i<5;i++){
    if(arr[i]>=max)
    max=arr[i];
}


          cout<<max;

    return 0;
}
