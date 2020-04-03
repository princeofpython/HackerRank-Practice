#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define ii int 
#define in(X) scanf("%d",&X)
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ii n,i;
    in(n);
    vector<ii> v(n);
    for(i=0; i<n; i++){
        in(v[i]);
    }
    int q;
    in(q);
    for(i=0; i<q; i++){
        ii temp;in(temp);
        vector<int>::iterator low; 
        low=lower_bound (v.begin(), v.end(), temp);
        string flag;
        if(*(low) == temp)
            flag="Yes ";
        else
            flag = "No ";
        cout<< flag << (low+1)-v.begin()<<endl;
    }
    return 0;
}
