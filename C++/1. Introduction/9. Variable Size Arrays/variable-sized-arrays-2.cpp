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
    vector < vector <int> > vsa(n);
    for(int i = 0; i< n; i++)
    {
        int k;
        cin >> k;
        for(int j=0; j<k; j++)
        {
            int var;
            cin>>var;
            vsa[i].push_back(var);
        }
    }
    for(int i=0; i<q; i++)
    {
        int a,b;
        cin>> a >>b;
        cout << vsa[a][b]<<endl;
    }
    return 0;
}

