#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int x,y;
	    cin>> x >> y;
	    if(x >= y){
	        cout << y <<endl;
	    }
	    else{
	        int ans = y - x;
	        ans = (2*ans) + x;
	        cout << ans << endl;
	    }
	}
	return 0;
}
