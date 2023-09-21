#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    double l,v1,v2;
	    
	    cin >> l >> v1 >> v2;
	    
	    double v1ans = (l / v1);
	    double v2ans = (l / v2);
        
        int x = (l / v1);
        int y = (l / v2);
        
        // cout << v2ans <<" ";
        if(v1ans>x){
            v1ans = x + 1;
        }
        if(v2ans>y){
            v2ans = y + 1;
        }
        
        // cout << v2ans <<endl;
	    int ans = (v1ans) - (v2ans);
	    
	    if(ans>1){
	        cout<<ans-1<<endl;
	    }
	    else if(ans == 1){
	        ans = 0;
	        cout << ans <<endl;
	    }else{
	        ans = -1;
	        cout << ans <<endl;
	    }
	    
	    
	}
	return 0;
}
