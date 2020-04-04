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
   ll sumf = 0;
   cin>>TESTS;
   while(TESTS--){
   				ll n;
                cin>>n;
                ll brr[4][4]={0};
                for(ll j=0;j<n;j++)
                {
                        char var;
                        ll no;
                        cin>>var>>no;
                        int x=(int)var-65;
                        brr[no/3-1][x]++;
                }
                ll minus=0;
                for(ll j=0;j<4;j++)
                {
                        int flag=0;
                        for(ll k=0;k<4;k++)
                        {
                                if(brr[j][k]!=0)
                                        flag=1;
                        }
                        if(flag==0)
                                minus=minus+100;
                }
                ll sum=0;
                ll max=0,por1=10,poc1=10,por2=10,poc2=10,por3=10,poc3=10;
                for(ll j=0;j<4;j++)
                {
                        for(ll k=0;k<4;k++)
                        {
                                for(ll l=0;l<4;l++)
                                {
                                        if(brr[k][l]>max && j==0)
                                        {
                                                max=brr[k][l];
                                                por1=k;
                                                poc1=l;
                                        }
                                        if(brr[k][l]>max && j==1 && k!=por1 && l!=poc1)
                                        {
                                                max=brr[k][l];
                                                por2=k;
                                                poc2=l;
                                        }
                                        if(brr[k][l]>max && j==2 && k!=por1 && l!=poc1 && k!=por2 && l!=poc2)
                                        {
                                                max=brr[k][l];
                                                por3=k;
                                                poc3=l;
                                        }
                                        if(brr[k][l]>max && j==3 && k!=por1 && l!=poc1 && k!=por2 && l!=poc2 && k!=por3 && l!=poc3)
                                        {
                                                max=brr[k][l];
                                        }
                                }
                        }
                        if(max!=0)
                                sum=sum+(4-j)*25*max;
                        max=0;
                }
                sum=sum-minus;
                cout<<sum<<"\n";
                sumf=sumf+sum;
        }
        cout<<sumf<<"\n";
      
   return 0;
}2