#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,b;
	    cin>>n>>b;
	    int area=0;
	    for(int i=0;i<n;i++){
	       int w,h,p;
	       cin>>w>>h>>p;
	       if(p<=b){
	           if(area<w*h){
	               area=w*h;
	           }
	       }
	   }
	   if(area!=0)
	   cout<<area<<endl;
	   else{
	       cout<<"no tablet"<<endl;
	   }
	   
	}
	return 0;
}
