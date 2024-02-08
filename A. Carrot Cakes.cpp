
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
	int number_of_cakes_needed,ovenTime,cakesPerBatch,buildTime;
	cin >> number_of_cakes_needed >> ovenTime >> cakesPerBatch  >> buildTime;
 	int  batchesNeeded = (buildTime+ovenTime)/ovenTime;
  	if ( batchesNeeded*cakesPerBatch < number_of_cakes_needed) 
	  	cout << "YES" << endl;
  	else 
	  	cout << "NO" << endl;

  	return 0;

}