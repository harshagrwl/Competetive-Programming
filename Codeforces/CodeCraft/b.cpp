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

// bool Greater(string a, string b){
//     if (a > b)
//         return true;
//     else
//         return false;
// }

int main(){ 
   ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
   ll TESTS = 1;
   cin>>TESTS;
   while(TESTS--){
   		ll n;
        string s;
        cin >> n >> s;
        string str1 = s;
        ll m = 1;
        for (ll i = 2; i <= n; i++){
            string k1 = s.substr(i - 1, n - i + 1);
            string k2 = s.substr(0, i - 1);
 
            if(i == n){ 
                k1 = s; 
                reverse(k1.begin(),k1.end()); 
            }
            else if ((n-i+1) % 2 == 1){
                reverse(k2.begin(),k2.end()); 
                k1 = k1 + k2;
            }
            else
            {
                k1 = k1 + k2;
            }
 
            if (k1 < str1)
            {
                str1 = k1;
                m = i;
            }
        } 
        cout<<str1<<"\n"<<m<<"\n";   
   }
   return 0;
}
 