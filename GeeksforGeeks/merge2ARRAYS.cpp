#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[],int n,int i){
    int l = 2*i+1;
    int r = 2*i+2;
    int smallest = i;
    
    if(l < n && arr[l] < arr[i]){
        smallest = l;
    }
    
    if(r < n && arr[r] < arr[smallest]){
        smallest = r;
    }
    
    if(smallest!=i){
        swap(arr[i],arr[smallest]);
        heapify(arr,n,smallest);
    }
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int a[x],b[y];
	    for(int i = 0;i<x;i++){
	        cin>>a[i];
	    }
	    for(int i = 0;i<y;i++){
	        cin>>b[i];
	    }
	    for(int i = 0;i<x;i++){
	        if(a[i] > b[0]){
	            swap(a[i],b[0]);
	            heapify(b,y,0);
	        }
	    }
	    sort(b,b+y);
	    for(int i = 0;i<x;i++){
	        cout<<a[i]<<" ";
	    }
	    for(int i = 0;i<y;i++){
	        cout<<b[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}