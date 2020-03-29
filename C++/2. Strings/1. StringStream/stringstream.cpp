#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector <int> integers;
    stringstream ss(str);
    char ch;
    int integer;
    while(ss >> integer)
    {
        integers.push_back(integer);
        if (not(ss >> ch))
            break;
    }
    return integers;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}