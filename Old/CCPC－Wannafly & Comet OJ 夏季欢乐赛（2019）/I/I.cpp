#include<cstdio>
using namespace std;
int main()
{
  int n,m,k;
  scanf("%d%d%d",&n,&m,&k);
  long long p;
  p=(static_cast<long long>(n-1))*(m-1);
  if ((static_cast<long long>(k))>p) printf("-1\n");
    else printf("%d\n",(n-1)+(m-1));
  return 0;
}