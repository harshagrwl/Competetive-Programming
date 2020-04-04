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
   		ll n, p;
   		int flg = 0,f = 0;
   		cin>>n>>p;
   		ll d[n];
   		lp(i,n){cin>>d[i];}\
   		lp(i,n){
   			if(p%d[i]==0){
   				flg += 1;
   			}
   		}
   		vi v;
   		lp(i,n){
   			v.pb(d[i]);
   		}
   		sort(v.begin(),v.end());
   		lp(i,n-1){
   			for(int j = i +1;j<n-1;j++){
   				if(j%i==0){
   					f = 1;
   				}
   			}
   		}
   		if (flg == n && f == 1){
   			cout<<"NO"<<endl;
   		}
   		else{
   			ll r[n], sum = 0;
   			for(ll i = 0;i<n;i++){
   				if(p%d[i]!=0 && sum < p){
   				r[i] = p/d[i] + 1;
   				p = p - d[i]*r[i];
   				sum += d[i]*r[i];
   			}
   			else{
   				r[i] = 0;
   			}
   			}
   			cout<<"YES"<<" ";
   			lp(i,n) cout<<r[i]<<" ";
   			cout<<endl;
   		}
   }
   return 0;
}
