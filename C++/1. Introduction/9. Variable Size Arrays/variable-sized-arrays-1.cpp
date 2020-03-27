#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, q;
    cin >> n >> q;
    
    int** dp;
    dp = new int*[n];
    for(int i =0; i<n; i++)
    {
        int k;
        cin >> k;
        dp[i] = new int [k];
        for (int j=0; j<k; j++)
        {
            int x;
            cin >> x;
            dp[i][j]= x;
        }
    }
    for(int i = 0; i < q; ++i) {
        int a, b;
        cin >> a >> b;
        cout << dp[a][b] << endl;
    }
}


