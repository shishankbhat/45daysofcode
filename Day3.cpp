#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int ans = x - y;
	    if(ans < 0){
	        ans = 0;
	        cout<<ans<<endl;
	    }
	    else{
	        cout << ans <<endl;
	    }
	    
	}
	return 0;
}
