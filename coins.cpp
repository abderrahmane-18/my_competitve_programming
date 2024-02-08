#include <iostream>
#include <map>  
#include <utility> 
using namespace std;
 
int main() {
  string weightResults[3];
  map<string , int> coinOrder;
  for(int i=0;i<3;i++)
  {
      cin >> weightResults[i];
  }
  int j=0;
  string weightedCoins[5];
  int k=0;
  for(int i=0;i<3;i++)
  {
    if(weightResults[i][1] == '>') {
      weightedCoins[k] = weightResults[i][0];
      k++;
    }
    else if(weightResults[i][1] == '<') {
      weightedCoins[k] = weightResults[i][2];
      k++;
    }
  }
  
  int countA=0, countB=0, countC=0;
  
  for(int i=0;i<k;i++) {
    if(weightedCoins[i] == "A") {
      countA++;
    }
    else if(weightedCoins[i] == "B") {
      countB++;
    }
    else {
      countC++;
    }
  }
   
  coinOrder.insert(pair<string,int>("A", countA));
  coinOrder.insert(pair<string,int>("B", countB));
  coinOrder.insert(pair<string,int>("C", countC));
  
  if(countA > countB && countA > countC && countB > countC) {
    cout << "CBA";
  }
  if(countA > countB && countA > countC && countB < countC) {
    cout << "BCA";
  }
  else if (countB > countA && countB > countC && countA > countC) {
    cout << "CAB";
  }
  else if (countC > countA && countC > countB && countA > countB) {
    cout << "BAC";
  }
  else if (countC > countA && countC > countB && countB > countA) {
    cout << "ABC";
  }
  else if (countB > countA && countB > countC && countA < countC) {
    cout << "ACB";
  }
  else if(countA == countB && countB == countC) {
    cout << "Impossible";
  }
  
  return 0;
}
