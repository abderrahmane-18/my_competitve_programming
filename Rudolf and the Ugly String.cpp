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
bool checkPegs(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if(array[i] != 0) {
            return false;
        }
    }

    return true;
}
int findPosMax(int arr[],int n)
{
          int max = INT_MIN;
    int index = -1;
  for(int i=0;i<n;i++)
    {
        if(arr[i]>=max)
        {
            // If current value is greater than max
            // value then replace it with max value
            max = arr[i];
            index = i;
        }
    }
    return index;
    }
void printArray(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" " ;
    }
    cout<<endl;
}
bool reverse_order(int a, int b){
  return a > b;
}
int xorOfArray(int arr[], int n)
{
    // Resultant variable
    int xor_arr = 0;

    // Iterating through every element in
    // the array
    for (int i = 0; i < n; i++) {

        // Find XOR with the result
        xor_arr = xor_arr ^ arr[i];
    }

    // Return the XOR
    return xor_arr;
}
void computeLPSArray(string pat, long long  M, long long  lps[])
{

    // Length of the previous longest
    // prefix suffix
    int len = 0;
    int i = 1;
    lps[0] = 0; // lps[0] is always 0

    // The loop calculates lps[i] for
    // i = 1 to M-1
    while (i < M) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else // (pat[i] != pat[len])
        {

            // This is tricky. Consider the example.
            // AAACAAAA and i = 7. The idea is similar
            // to search step.
            if (len != 0) {
                len = lps[len - 1];

                // Also, note that we do not
                // increment i here
            }
            else // if (len == 0)
            {
                lps[i] = len;
                i++;
            }
        }
    }
}

int KMPSearch(string pat, string txt)
{
   long long  M = pat.length();
    long long N = txt.length();

    // Create lps[] that will hold the longest
    // prefix suffix values for pattern
    long long lps[M];
    long long j = 0; // index for pat[]

    // Preprocess the pattern (calculate lps[]
    // array)
    computeLPSArray(pat, M, lps);

    long long i = 0; // index for txt[]
    long long res = 0;
    long long next_i = 0;

    while (i < N) {
        if (pat[j] == txt[i]) {
            j++;
            i++;
        }
        if (j == M) {

            // When we find pattern first time,
            // we iterate again to check if there
            // exists more pattern
            j = lps[j - 1];
            res++;
        }

        // Mismatch after j matches
        else if (i < N && pat[j] != txt[i]) {

            // Do not match lps[0..lps[j-1]]
            // characters, they will match anyway
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
    return res;
}
int main()
{
    int test_case;
    cin>>test_case;
     while(test_case--){
long long n;
  cin>>n;
  string s;
  cin>>s;
  string s1="pie";
  string s2="map";
  string s3="mapie";
     long long ans = KMPSearch(s1, s);
     long long ans1= KMPSearch(s2, s);
       long long ans2= KMPSearch(s3, s);
     cout<<ans+ans1-ans2<<endl;


     }
    return 0;
}
