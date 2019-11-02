#include<cstdio>
#include<cstring>
using namespace std;
long long f[10010],p[10010];
struct gaojingdu
{
  int a[101],l;

};
int main()
{
  int n;
  register int i,j;
  //freopen("input.in","r",stdin);
  scanf("%d",&n);
  memset(p,0,sizeof(p));
  f[0]=p[0]=1;
  for (j=2;j<=6;++j)
    p[j]=2;
  for (i=1;i<=n-1;++i)
    {
    for (j=i+2;j<=i+6;++j)
      p[j]+=(p[i]<<1);
    f[i]=f[i-1]+p[i];
    }

  printf("%lld\n",f[n-1]+p[n]);
  for (i=1;i<=n;++i)
    printf("%lld ",p[i]);
  return 0;
}