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
#define lp(i,n)   for(int i=0;i<n;i++)
#define lpd(i,n)     for(int i=n;i>=0;i--)
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

int search(ll b[],ll e,ll f){
   for(int p = f; p>=0 && b[p]>=e ;p--){
      if(b[p]==e){
         return 1;
      }
      
   }
   return 0;
}

int main(){ 
   ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
   int TESTS,S=1;
   cin>>TESTS>>S;
   while(TESTS--){
         int n;
         cin>>n;
         ll a[n+2],b[n+2];
         lp(i,n){
            cin>>a[i];
         }
         lp(i,n){
            cin>>b[i];
         }   
         sort(a,a+n);
         sort(b,b+n);
         int k;
         for(k=0;k<n;k++){
            if (a[k]>=b[k])
            {
               break;
            }

         }
         if(k!=n){
            cout<<"NO"<<endl;
            continue;
         }
         int j;
         for(j=1;j<n;){
            if(a[j]==a[j-1]){
               j++;
            }
            else{
               if(search(b,a[j],j-1) == 0){
                  break;
               }
               else
                   j++;
            }
         }
      //    cout<<j<<endl;
         if(j==n){
            cout<<"YES"<<endl;
            
         }
         else{
            cout<<"NO"<<endl;
            
         }
   }
   return 0;
}
 