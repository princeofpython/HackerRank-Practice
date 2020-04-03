#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    map<string, int> m;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        if(temp==1)
        {
            string a;
            int b;
            cin >> a >> b;
            m[a] += b;
        }
        else if(temp==2)
        {
            string a;
            cin >> a;
            m.erase(a);
        }
        else if(temp==3)
        {
            string a;
            cin>>a;
            map<string, int>::iterator itr=m.find(a);
            if (itr==m.end())
                cout<<0<<endl;
            else
                cout << itr->second << endl;
        }
    }
    return 0;
}

