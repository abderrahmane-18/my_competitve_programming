#include <iostream>
#include <vector>
#include <climits> // for LLONG_MIN
#include <numeric>
using namespace std;

const long long MOD = 1000000007;

class SubarrayInfo {
public:
    long long maxSum;
    int startIdx;
    int endIdx;

    SubarrayInfo() {
        maxSum = LLONG_MIN;
        startIdx = 0;
        endIdx = 0;
    }
};

SubarrayInfo maxSubArraySum1(vector<int>& a, int size) {
    SubarrayInfo result;
    result.maxSum = LLONG_MIN;
    result.startIdx = 0;
    result.endIdx = 0;

    long long max_so_far = LLONG_MIN;
    long long max_ending_here = 0;
    int start = 0;
    int end = 0;
    int s = 0;

    for (int i = 0; i < size; ++i) {
        max_ending_here += a[i];

        if (max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
            start = s;
            end = i;
        }

        if (max_ending_here < 0) {
            max_ending_here = 0;
            s = i + 1;
        }
    }

    result.maxSum = max_so_far;
    result.startIdx = start;
    result.endIdx = end;

    return result;
}

long long return_mod(long long n) {
    while (n < 0) {
        n += MOD;
    }

    long long result = n % MOD;
    return result;
}

int main() {
    int test_case;
    cin >> test_case;

    for (int t = 0; t < test_case; ++t) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        SubarrayInfo result;
        int flag = 1;

        for (int i = 0; i < n; ++i) {
            if (arr[i] >= 0) {
                flag = 0;
                break;
            }
        }

        if (flag == 1) {
            long long s = 0;
            for (int i = 0; i < n; ++i) {
                s += arr[i];
            }
            cout << return_mod(s) << endl;
        } else {
            long long sum1 = 0;
            result = maxSubArraySum1(arr, n);
            long long rs = result.maxSum;
            int j = 1;

            while (j <= k) {
                result.maxSum *= 2;
               // cout<<"result.maxSum = "<<result.maxSum<<endl;
                result.maxSum=return_mod(result.maxSum);
                ++j;
            }

            for (int i = 0; i < n; ++i) {
                sum1 += arr[i];
            }

            cout << return_mod(sum1 - rs + result.maxSum) << endl;
        }
    }

    return 0;
}
