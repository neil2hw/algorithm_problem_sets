#include <iostream>

using namespace std;

int nchoosek(int n, int k) {
    int *dp = new int[k];
    int left_top, top;
    for (int i = 0; i < n; ++i) {
        left_top = 1;
        for (int j = 0; j < k; ++j) {
            if (j == i) {
                dp[j] = 1;
                break;
            } else {
                top = dp[j];
                dp[j] = top + left_top;
                left_top = top;
            }
        }
    }
    top = dp[k - 1];
    delete [] dp;
    return top;
}


int main(int argc, char const *argv[]) {
    cout << nchoosek(10, 5) << endl;
    return 0;
}
