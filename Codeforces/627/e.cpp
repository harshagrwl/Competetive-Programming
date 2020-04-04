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
int a[2001];
int dp[2001][2001];
int main(){ 
   ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
   ll TESTS = 1;
   //cin>>TESTS;
   while(TESTS--){
   		int n,h,l,r;
   		cin>>n>>h>>l>>r;
   		
   		
   		dp[0][0] = 0;
   		lp1(i,1,h){
   			dp[0][i] = -1;
   		}
   		lp1(i,1,n+1){
   			cin>>a[i];
   		}
   		
   		lp(i,n){
   			lp(hr,h){
   				dp[i+1][hr] = -1;
   			}

   			lp(hr,h){
   				if(dp[i][hr] == -1)
   					continue;
   				
   				int h1 = (hr+a[i+1]-1 + h)%h;
   				int h2 = (hr + a[i+1])%h;

   				dp[i+1][h1] = max(dp[i+1][h1],dp[i][hr]+(l<=h1 && h1<=r));
   				dp[i+1][h2] = max(dp[i+1][h2],dp[i][hr]+(l<=h2 && h2<=r));
   				
   			}

   		}
   		int ans = 0;
   		lp(i,h){
   			if(dp[n][i]!=-1)
   				ans = max(ans,dp[n][i]);
   		}

   		// lp(i,n+1){
   		// 	lp(j,h+1){
   		// 		cout<<dp[i][j]<<" ";
   		// 	}
   		// 	cout<<endl;
   		// }
   		cout<<ans<<endl;
   }
   return 0;
}
 