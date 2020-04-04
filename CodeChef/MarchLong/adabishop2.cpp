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
   cin>>TESTS;
   while(TESTS--){
   		int r0,c0;
   		cin>>r0>>c0;
   		vi r, c;
   		int p = (r0+c0)/2;
   		if(r0>c0){
   			for(int i = r0-1;i>=p;i--){
   				r.pb(i);

   			}
   			for(int i = c0+1;i<=p;i++){
   				c.pb(i);
   				
   			}
   		}
   		if(c0>r0){
   			for(int i = c0-1;i>=p;i--){
   				c.pb(i);

   			}
   			for(int i = r0+1;i<=p;i++){
   				r.pb(i);
   				
   			}
   		}

   		if(p > 1){
   			for(int i = p-1;i>=1;i--){
   				r.pb(i);
   				c.pb(i);
   			}
   		}
   		// else{
   		// 	r.pb(1);
   		// 	c.pb(1);
   		// }   

   		int row[35] = {2,3,4,3,4,5,6,5,4,5,6,7,8,7,8,7,8,7,8,7,6,5,4,3,2,1,2,1,2,1,2,3,4,5,6};
   		int col[35] = {2,3,4,5,6,5,4,3,4,5,6,7,8,7,6,5,4,3,2,1,2,1,2,1,2,3,4,5,6,7,8,7,8,7,8};

   		lp(i,35){
   			r.pb(row[i]);
   			c.pb(col[i]);
   		}


   		cout<<r.size()<<endl;
   		lp(i,r.size()){
   			cout<<r[i]<<" "<<c[i]<<endl;
   		}
   }
   return 0;
}
 