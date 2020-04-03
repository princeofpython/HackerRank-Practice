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
    ii a,b,c;
    in(a);in(b);in(c);
    v.erase(v.begin()+a-1);
    v.erase(v.begin() + b-1, v.begin()+ c-1);
    cout<<v.size()<<endl;
    for(i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
