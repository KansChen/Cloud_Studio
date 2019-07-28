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
  for (i=1;i<n;++i)
    {
    if (abs(a[i]-a[i+1])<k)
      {
      ++ans;
      ++i;
      continue;
      }
    }
  printf("%d\n",ans);
  return 0;
}
