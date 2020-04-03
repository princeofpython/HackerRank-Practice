#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    set<int> s;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        if(temp==1)
        {
            int a;
            cin >> a;
            s.insert(a);
        }
        else if(temp==2)
        {
            int a;
            cin >> a;
            s.erase(a);
        }
        else if(temp==3)
        {
            int a;
            cin>>a;
            set<int>::iterator itr=s.find(a);
            if (itr==s.end())
                printf("No\n");
            else
                printf("Yes\n");
        }
    }
    return 0;
}



