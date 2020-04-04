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

bool isPalindrome(string r) 
{ 
    string p = r; 
  
    // reverse the string to 
    // compare with the  
    // original string 
    reverse(p.begin(), p.end()); 
  
    // check if both are same 
    return (r == p); 
}

int main(){ 
   ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
   ll TESTS = 1;
   cin>>TESTS;
   while(TESTS--){
   		string s;
   		cin>>s;
   		int count = 0,ans = 0,ansr = 0;int k,k2;
   		string s1 = s;
   		reverse(s1.begin(),s1.end());
   		//cout<<s1<<endl;
   		lp(i,s.length()){
   			if(s[i] == s1[i]){
   				count++;
   			}
   			else{
   				break;
   			}
   		}
   		int i; 
    	for (i = 2; i <= s.length() - count; i++) { 
        // check if the prefix substring 
        // is a palindrome 
        	if (isPalindrome(s.substr(count, i))){
        		ans = 1;
        		k = i;
          		break; 
       		}
    	}

    	i = 2;
    	for (i = 2; i <= s1.length() - count; i++) { 
        // check if the prefix substring 
        // is a palindrome 
        	if (isPalindrome(s1.substr(count, i))){
        		ansr = 1;
        		k2 = i;
          		break; 
       		}
    	}

    	if(ans == 1 || ansr == 1){
    	for(int j = count;j<count+k;j++){
    		cout<<s[j];
    	}
    	cout<<endl;
    	for(int j = count;j<count+k;j++){
    		cout<<s1[j];
    	}
    }
    	cout<<endl;
   		cout<<count<<" "<<ans<<" "<<ansr<<endl;	   
   }
   return 0;
}
 