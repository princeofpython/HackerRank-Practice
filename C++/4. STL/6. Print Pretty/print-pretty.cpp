#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		/* Enter your code here */
        cout << nouppercase << setw(0) << hex << showbase << (long long)A  << '\n';   
        cout <<right<< setw(15) << setprecision(2) <<setfill('_')<< showpos   << fixed << B <<endl;
        cout<<scientific<<uppercase<<noshowpos<<setprecision(9)<<C<<endl;
        
	}
	return 0;

}