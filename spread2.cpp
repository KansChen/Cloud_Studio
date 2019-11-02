#include<cstdio>
#include<cstring>
using namespace std;
struct gaojingdu
{
  int a[101],l;
  gaojingdu operator + (const gaojingdu &b) const {
    gaojingdu c;
    int len=(l>b.l?l:b.l),i;
    for (i=1;i<=len;++i)
      {
      c.a[i+1]=(c.a[i]+a[i]+b.a[i])/10;
      c.a[i]+=(c.a[i]+a[i]+b.a[i])%10;
      }
    if (c.a[len+1]!=0) ++len;
    c.l=len;
    return c;
  }
  gaojingdu()
    {
    memset(a,0,sizeof(a));
    l=0;
    }
};
gaojingdu f[10010],p[10010];
int main()
{
  int n;
  register int i,j;
  //freopen("input.in","r",stdin);
  scanf("%d",&n);
  f[0].a[1]=f[0].l=p[0].a[1]=p[0].l=1;
  for (j=2;j<=6;++j)
    {
    p[j].a[1]=2;
    p[j].l=1;
    }
  for (i=1;i<=n-1;++i)
    {
    for (j=i+2;j<=i+6;++j)
      p[j]=p[j]+p[i]+p[i];
    f[i]=f[i-1]+p[i];
    }
  for (j=1;j<=n;++j)
  {
  gaojingdu ans=p[j];
  for (i=ans.l;i>=1;--i)
    printf("%d",ans.a[i]);
  printf("\n");
  }
  return 0;
}