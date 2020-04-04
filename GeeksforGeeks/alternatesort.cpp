#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    sort(a,a+n);
	    
	    reverse(a+(n/2),a+n);
	    // for(int i = 0;i<n;i++){
	    //     cout<<a[i]<<" ";
	    // }
	    // cout<<endl<<endl;
	    for(int i = 0;i<n/2;i++){
	        cout<<a[i+(n/2)]<<" "<<a[i]<<" ";
	    }
	    if(n%2==1){
	    	cout<<a[n-1]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}