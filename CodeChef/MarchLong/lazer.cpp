 /* **********@harsh_agr********** */

#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
typedef long l;
 
#define pii pair<int,int>
#define pli pair<long,int>
#define pil pair<int,long>
#define pll pair<long long,long long>
 
#define vi vector<int>
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
#define lp(i,n)     for(int i=0;i<n;i++)
#define lpd(i,n)        for(int i=n;i>=0;i--)
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
        int n,q;
        cin>>n>>q;
        ll a[n];
        vll v;
        lp(i,n){
            cin>>a[i];
            v.pb(make_pair(i+1,a[i]));
        }   
        
        while(q--){
            ll x1,x2,y,count = 0;
            cin>>x1>>x2>>y;
            lp(i,n-1){
                ll xa = v[i].first;
                ll ya = v[i].second;
                ll xb = v[i+1].first;
                ll yb = v[i+1].second;

                if(ya == yb){
                    if((y == ya) && !((max(x1,x2)<min(xa,xb)) || min(x1,x2)>max(xa,xb)) && max(xa,xb)!=x1 && min(xa,xb)!=x2){
                        count++;
                    }
                }
                else{
                float ans = float((xb-xa)*y + xa*yb - xb*ya)/float(yb-ya);
                // cout<<ans<<" ";
                if(ans>=min(x1,x2) && ans<=max(x1,x2) && ans>=min(xa,xb) && ans<=max(xa,xb) && y>=min(ya,yb) && y<=max(ya,yb) && max(xa,xb)!=x1 && min(xa,xb)!=x2){
                    count++;
                }
            }
            }
            cout<<count<<"\n";

        }
   }
   return 0;
}
 