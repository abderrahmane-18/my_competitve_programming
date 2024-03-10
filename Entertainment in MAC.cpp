#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;
bool isPalindrome(string S)
{
    // Stores the reverse of the
    // string S
    string P = S;

    // Reverse the string P
    reverse(P.begin(), P.end());

    // If S is equal to P
    if (S == P) {
        // Return "Yes"
        return true;
    }
    // Otherwise
    else {
        // return "No"
        return false;
    }
}


int main()
{
    int test_case;
    cin>>test_case;
     string s1="";
    while(test_case--)
    {
        s1="";
      int n;
    cin>>n;
    string s;
    cin>>s;
    if(isPalindrome(s)) {

     cout<<s<<endl;
    // cout<<"pa" <<endl;
    }
     else
     {
         int j=s.length()-1;
      //   cout<<"s[0] " <<s[0]<<endl;
                //  cout<<"s[j] " <<s[j]<<endl;

         if(s[0]<s[j]){
            cout<<s<<endl;
         ////   cout<<"fa"<<endl;
         }
         else if(s[0]>s[j])
         {
           //  cout<<"esle "<<endl;
               s1=s;
    reverse(s.begin(), s.end());
     s=s+s1;
     cout<<s<<endl;
         }
         else {
                j--;
            for(int i=1;i<s.length();i++)
            {
                //cout<<"s[i]  "<<s[i]<<endl;
                                   //     cout<<"s[j]  "<<s[j]<<endl;

                        if(s[i]<s[j]){

                          cout<<s<<endl;
                           break;
                        }
                        else if (s[i]>s[j]) {
                                    s1=s;
    reverse(s.begin(), s.end());
     s=s+s1;
     cout<<s<<endl;
     break;

                        }
                        j--;

            }
         }

     }
    }
    return 0;
}
