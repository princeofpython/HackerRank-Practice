#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int arr[n];
    for(int j=0; j<n ; j++)
        cin >> arr[j];
    for(int i = n-1; i>=0 ; --i)
    {
        cout << arr[i]<<' ';
    }
    return 0;
}