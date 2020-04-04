/*
Author:wuhuajun
*/
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cstdlib>
#include <vector>
using namespace std;

typedef long long ll;
typedef double dd;

const int MAXN = 200010;

//#include<bits/stdc++.h>
using namespace std;

const int N=MAXN, mod = 1e9 + 7;
int n,m,T;
int a[N],b[15][15];

namespace IO
{
  int read()
  {
    int ret=0;char c=getchar();
    while(!isdigit(c)) c=getchar();
    while(isdigit(c)) ret=ret*10+(c^48),c=getchar();
    return ret;
  }
  void write(int x){if(x>9)write(x/10);putchar(x%10^48);}
  void writeln(int x){write(x);putchar('\n');}
}
using namespace IO;

int upm(int x){return x>=mod?x-mod:x<0?x+mod:x;}
int mul(int x,int y){return 1ll*x*y-1ll*x*y/mod*mod;}
void exgcd(int &x,int &y,int a,int b){if(!b)return (void)(x=1,y=0);exgcd(y,x,b,a%b),y-=a/b*x;}
int inv(int a){int x,y;exgcd(x,y,a,mod);return (x%mod+mod)%mod;}

struct cd
{
  int x,y;
  cd(int _x=0,int _y=0):x(_x),y(_y){}
  cd operator + (const cd&a){return cd(upm(x+a.x),upm(y+a.y));}
  cd operator - (const cd&a){return cd(upm(x-a.x),upm(y-a.y));}
  cd operator * (const cd&a){return cd(upm(mul(x,a.x)-mul(y,a.y)),upm(upm(mul(x,a.y)+mul(y,a.x))-mul(y,a.y)));}
};
cd f[N],g[N];

cd w1(const cd&a){return cd(upm(-a.y),upm(a.x-a.y));}//w1=cd(0,1)
cd w2(const cd&a){return cd(upm(a.y-a.x),upm(-a.x));}//w2=cd(mod-1,mod-1)=w1*w1
void fwt(cd *a,int n)
{
  for(int i=1;i<n;i*=3)
    for(int j=0;j<n;j+=i*3)
      for(int k=0;k<i;++k)
      {
        cd x=a[j+k],y=a[j+k+i],z=a[j+k+(i<<1)];
        a[j+k]=x+y+z;a[j+k+i]=x+w1(y)+w2(z);a[j+k+(i<<1)]=x+w2(y)+w1(z);
      }
}
void ifwt(cd *a,int n)
{
  for(int i=1;i<n;i*=3)
    for(int j=0;j<n;j+=i*3)
      for(int k=0;k<i;++k)
      {
        cd x=a[j+k],y=a[j+k+i],z=a[j+k+(i<<1)];
        a[j+k]=x+y+z;a[j+k+i]=x+w2(y)+w1(z);a[j+k+(i<<1)]=x+w1(y)+w2(z);
      } 
}

cd qpow(cd x,int y)
{
  cd res=cd(1,0);
  for(;y;y>>=1,x=x*x) if(y&1) res=res*x;
  return res;
}

void close()
{
    exit(0);
}

vector<int> prime;
bool visit[MAXN];
int x[MAXN], base3[22];

void init()
{


    memset(visit, false, sizeof(visit));
    for (int i = 2; i <= 100000; i++)
    {
        if (visit[i] == false)
            prime.push_back(i);
        if (i * i > 1e9)
            break;
        for (int j = 0; j < prime.size(); j++)
        {
            if (prime[j] * i > 1e5)
                continue;
            visit[prime[j] * i] = true;
            if (i % prime[j] == 0)
                break;
        }
    }

    //printf("prime_sz:%d\n", prime.size());

    base3[0] = 1;
    for (int i = 1; i <= 15; i++)
        base3[i] = base3[i - 1] * 3;

    scanf("%d",&T);
    for (int cas = 1; cas <= T; cas++)
    {
        int K;
        scanf("%d %d", &n, &K);
        for (int i = 1; i <= n; i++)
            scanf("%d", &a[i]);
        
        for (int i = 1; i <= n; i++)
        {
            x[i] = 1;
            for (auto p : prime)
            {
                //printf("p:%d\n", p);
                int cnt = 0;
                while (a[i] % p == 0)
                {
                    a[i] /= p;
                    cnt += 1;
                }
                //printf("cnt:%d\n", cnt);
                x[i] *= (cnt + 1);

                if (p * p > a[i])
                    break;
            }
            if (a[i] > 1)
                x[i] *= 2;
            x[i] -= 1;
            //printf("i:%d x_i:%d\n", i, x[i]);
        }

        int len = 59049 * 3; //3^10
        for (int i = 0; i <= len; i++)
            f[i].x = 0;

        for (int i = 1; i <= n; i++)
        {
            int conv = 0;
            for (int j = 0; j < 15; j++)
                if (x[i] & (1 << j))
                    conv += base3[j];
            f[conv].x += 1;
            //printf("x[i]:%d conv:%d\n", x[i], conv);
        }


        /*
        for (int i = 1; i <= n; i++)
            f[]
            */
        /*
        f[2].x = 1;
        f[4].x = 1;
        */
        /*
        m=read();T=read();mod=read();n=1;
        for(int i=1;i<=m;++i) n*=3;
        //if(mod==1){for(int i=0;i<n;++i)puts("0");return 0;}
        for(int i=0;i<n;++i) a[i]=read();
        for(int i=0;i<=m;++i) for(int j=0;j<=m-i;++j) b[i][j]=read();
        for(int i=0;i<n;++i)
        {
            int tmp=i,cntw=0,cntl=0;
            for(;tmp;tmp/=3)
            {
                int j=tmp%3;
                j==1?++cntw:j==2?++cntl:0;
            }
            g[i].x=b[cntw][cntl];f[i].x=a[i];
        } 
        */

        //int len = 81;

        fwt(f,len);
        //fwt(g,n);
        //for(int i=0;i<n;++i) f[i]=f[i]*qpow(g[i],T);
        for(int i=0;i<len;++i) f[i]=qpow(f[i],K);
        ifwt(f,len);
        //for(int i=0,iv=inv(n);i<n;++i) writeln(mul(f[i].x,iv)); 
        int iv = inv(len);

        int ans = 0;
        for (int i = 1; i < len; i++)
        {
            ans = ans + mul(f[i].x, iv);
            if (ans > mod)
                ans -= mod;
        }
        //writeln(mul(f[0].x, iv));
        //printf("ans:%d\n", ans);
        printf("%d\n", ans);
    }
}

int main ()
{
    init();
    close();
    return 0;
}

