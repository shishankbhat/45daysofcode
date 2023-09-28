#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0; i< n; i++){
            cin >> arr[i];
        }
        
        sort(arr,arr+n);
        
        // for(int i = 0; i< n; i++){
        //     cout <<  arr[i] << " ";
        // }
        int ans = 1;
        
        int count = 1;
        
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(arr[i] == arr[j]){
                    count++;
                }
                else{
                    break;
                }
            }
            ans = max(ans,count);
            count = 1;
        }
        // cout << ans << endl;
        cout << n - ans <<endl;
        
    }
	return 0;
}
