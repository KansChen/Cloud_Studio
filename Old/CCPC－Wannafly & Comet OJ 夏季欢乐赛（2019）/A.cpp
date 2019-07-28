#include<cstdio>
using namespace std;
int main()
{
  int t,ti,n,i,j,deep;
  long long p,all
  scanf("%d",&t);
  for (ti=1;ti<=t;++ti)
    {
    scanf("%d%d",&k,&n);
    if (k==1)
      {
      printf("%d\n",n-1);
      continue;
      }
    p=1;
    deep=1;
    all=1;
    while (all<n)
      {
      p*=k;
      all+=p;
      ++deep;
      }
    if ((static_cast<long long>(n))-(p-all)<=p/k) printf("%d\n",deep*2-1);
      else printf("%d\n",deep*2);
    }
  return 0;
}