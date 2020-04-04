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
#define vvi vector<vector<int>>
#define vvii vector<vector<pii>>
#define vvl vector<vector<l>>
#define vs vector<string>
#define mii map<int,int>
#define msi map<string,int>

#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define lp(i,n)   for(int i=0;i<n;i++)
#define lpd(i,n)      for(int i=n;i>=0;i--)
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

vector<int>v;
int sum = 0;
bool leap(int n){
    if(n%400==0)return true;
    else if(n%4==0 and n%100!=0)return true;
    else return false;
}

void find(){
    ll start,end,temp,ans=0;
    cin>>temp>>start;
    if(temp>2)start++;
        cin>>temp>>end;
        if(temp<2)end--;
        if(end<start){cout<<0<<endl;return;}
        while(start%400!=0 and start<=end){
            ans+=v[start%400];
            start++;
        }
        while(end%400!=0 and start<=end){
            ans+=v[end%400];
            end--;
        }
        ans+=(sum*(end-start)/400);
        cout<<ans<<endl;
}

int main(){ 
   ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    int T=1,i,j,temp;
    int start = 4;
    v.push_back(0);
    lp(i,400){
        temp = leap(i+1);
        if(start==6)
        {
            v.push_back(1);
        }
        else if(start == 0)
        {
            v.push_back(1-temp);
        }
        else
        {
            v.push_back(0);
        }
        start+=(1+temp);
        start%=7;
    }
    lp(i,400){
        sum += v[i];
    }
   ll TESTS = 1;
   cin>>TESTS;
   while(TESTS--){
        find();
   }
   return 0;
}
 