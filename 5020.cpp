#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int a[101];
inline bool _comp(const int a,const int b)
{
  return a<b;
}
int main()
{
  int t,ti,n,i,j;
  scanf("%d",&t);
  for (ti=1;ti<=t;++ti)
    {
    memset(a,0,sizeof(a));
    scanf("%d",&n);
    for (i=1;i<=n;++i)
      scanf("%d",&a[i]);
    sort(a+1,a+n+1,_comp);
    
    }
  return 0;
}