#include<cstdio>
#include<algorithm>
using namespace std;
int a[100001];
int main()
{
    int n,sum=0,i,j,minn,k,step=0;
    scanf("%d",&n);
    a[0]=0;
    for (i=1;i<=n;++i)
        {
        scanf("%d",&a[i]);
        if (a[i]>a[i-1]) sum+=a[i]-a[i-1];
        }
    printf("%d\n",sum);
    return 0;
}