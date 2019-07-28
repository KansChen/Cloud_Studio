#include<cstdio>
using namespace std;
int main()
{
  int j=0;
  freopen("B.in","w",stdout);
  printf("100000 5\n");
  for (int i=1;i<=100000;++i)
    {
    ++j;
    printf("%d ",j);
    if (j>15) j=0;
    }
  fclose(stdout);
  return 0;
}