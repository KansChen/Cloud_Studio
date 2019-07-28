#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
int a[100005],book[100005],q[100005];
int main()
{
  int n,k,i,l,j,ans=0;
  scanf("%d%d",&n,&k);
  for (i=1;i<=n;++i)
    scanf("%d",&a[i]);
  memset(book,0,sizeof(book));
  for (i=1;i<=n;++i)
    {
    if (i+1<=n && abs(a[i]-a[i+1])<k)
      {
      ++book[i];
      ++book[i+1];
      }
    if (i-1>=1 && abs(a[i]-a[i-1])<k)
      {
      ++book[i];
      ++book[i-1];
      }
    }
  q[0]=0;
  l=0;
  for (i=1;i<=n;++i)
    {
    if (book[i]!=0)
      {
      q[++l]=book[i];
      if (q[l-1]==1 && q[l]==1)
        {
        ++ans;
        q[l--]=0;
        q[l--]=0;
        }
      }
    else
      if (l>0) 
      {
      ans+=(l-2)/2+1;
      for (j=1;j<=l;++j)
        q[j]=0;
      l=0;
      }
    }
  if (l>0) 
      {
      ans+=(l-2)/2+1;
      for (j=1;j<=l;++j)
        q[j]=0;
      l=0;
      }
  printf("%d\n",ans);
  return 0;
}