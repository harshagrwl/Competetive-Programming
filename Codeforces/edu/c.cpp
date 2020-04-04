 /* **********@harsh_agr********** */

#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
typedef long l;
 
#define pii pair<int,int>
#define pli pair<long,int>
#define pil pair<int,long>
#define pll pair<long,long>
 
#define vi vector<int>
#define vll vector<ll>
#define vul vector<ull>
#define vii vector<pii>
#define vll vector<pll>
#define vvi vector<vector<int>>
#define vvii vector<vector<pii>>
#define vvl vector<vector<l>>
#define vs vector<string>
#define mii map<int,int>
#define msi map<string,int>

#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define lp(i,n) 	for(int i=0;i<n;i++)
#define lpd(i,n)    	for(int i=n;i>=0;i--)
#define lp1(itr,start,stop)     for(int itr=start;itr<stop;itr++)
#define lpd1(itr,start,stop)     for(int itr=start;itr>stop;itr--)
#define W(itr) while(itr--)
#define mp(a,b) make_pair(a,b) 
#define last(a) (a)[((a).size())-1]
#define pb(b) push_back(b)
#define f first
#define s second
#define M 1000000007  
 
using namespace std;

int main(){ 
   ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
   ll TESTS = 1;
   //cin>>TESTS;
   while(TESTS--){
    	int n, m,k,l = 0,r = 0,d = 0,u = 0;
    	cin>>n>>m>>k;
    	int a[k],b[k],x[k],y[k];

    	lp(i,k){
    		cin>>a[i]>>b[i];
    		cin>>x[i]>>y[i];
    	}  
    	int ansx[k],ansy[k];
    	lp(i,k){
    	ansx[i] = x[i] - a[i];
    	ansy[i] = y[i] - x[i];
    	}
    	lp(i,k){
    		if(ansx[i] < 0){
    			l = max(l,abs(ansx[i]));
    		}
    		if(ansx[i] > 0){
    			r = max(r,abs(ansx[i]));
    		}
    		if(ansy[i] < 0){
    			d = max(d,abs(ansy[i]));
    		}
    		if(ansy[i] > 0){
    			u = max(u,abs(ansy[i]));
    		}
    	}
    	int ans = 2*(l+r+u+d);
    	cout<<ans<<endl;
    	lp(i,d){
    		cout<<"D";
    	}
    	
    	lp(i,l){
    		cout<<"L";
    	}
    	
    	lp(i,u){
    		cout<<"U";
    	}
    	
    	lp(i,r){
    		cout<<"R";
    	}
    	

    	lp(i,d){
    		cout<<"U";
    	}
lp(i,l){
    		cout<<"R";
    	}
lp(i,u){
    		cout<<"D";
    	}
lp(i,r){
    		cout<<"L";
    	}
    	cout<<endl;

   }
   return 0;
}
 