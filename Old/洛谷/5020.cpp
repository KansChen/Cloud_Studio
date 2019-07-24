#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int a[101],b[101],bl,miao;
bool f[25001];
inline bool _comp(const int a,const int b)
{
  return a<b;
}
int main()
{
  int t,ti,n,i,j,ans;
  scanf("%d",&t);
  for (ti=1;ti<=t;++ti)
    {
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    scanf("%d",&n);
    ans=n;
    for (i=1;i<=n;++i)
      scanf("%d",&a[i]);
    sort(a+1,a+n+1,_comp);
    memset(f,false,sizeof(f));
    f[0]=true;
    for (i=1;i<=n;++i)
        if (f[a[i]]) --ans;
            else    {
                    for (j=a[i];j<=a[n];++j)
                        f[j]|=f[j-a[i]];
                    }
    printf("%d\n",ans);
    }
  return 0;
}