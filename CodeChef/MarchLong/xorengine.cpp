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
 

#define P2(n) n, n ^ 1, n ^ 1, n 
#define P4(n) P2(n), P2(n ^ 1), P2(n ^ 1), P2(n) 
#define P6(n) P4(n), P4(n ^ 1), P4(n ^ 1), P4(n) 
#define LOOK_UP P6(0), P6(1), P6(1), P6(0) 
  
using namespace std;
// LOOK_UP is the macro expansion to generate the table 
unsigned int table[256] = { LOOK_UP }; 
  
// Function to find the parity 
int Parity(int num) 
{ 
    // Number is considered to be of 32 bits 
    int max = 16; 
  
    // Dividing the number into 8-bit 
    // chunks while performing X-OR 
    while (max >= 8) { 
        num = num ^ (num >> max); 
        max = max / 2; 
    } 
  
    // Masking the number with 0xff (11111111) 
    // to produce valid 8-bit result 
    return table[num & 0xff]; 
} 

int main(){ 
   ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
   ll TESTS = 1;
   cin>>TESTS;
   while(TESTS--){
   		int n,q;
   		cin>>n>>q;
      int e = 0, o = 0;
      while(n--){
        ll a;
        cin>>a;
        if(Parity(a) == 0)
          e++;
        else
          o++;
      }
   		while(q--){
   			int p;
   			cin>>p;
   			//int eve = 0,odd = 0;
   			int t = Parity(p);
   			if(t == 0){
          cout<<e<<" "<<o<<"\n";
        }
        else if(t == 1){
          cout<<o<<" "<<e<<"\n";
        }
   			
   		}
   }
   return 0;
}
 