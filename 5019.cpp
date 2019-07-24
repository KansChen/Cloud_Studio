#include<cstdio>
#include<algorithm>
using namespace std;
int a[100001];
int main()
{
    int n,sum=0,i,j,minn,k,step=0;
    scanf("%d",&n);
    for (i=1;i<=n;++i)
        {
        scanf("%d",&a[i]);
        sum+=a[i];
        }
    while (sum>0)
        {
        i=1;
        while (a[i]==0 && i<n)
            ++i;
        minn=a[i];
        j=i;
        while (a[j]!=0 && j<=n)
            {
		minn = min(minn, a[j]);
            ++j;
            }
        --j;
        for (k=i;k<=j;++k)
            a[k]-=minn;
        sum-=(j-i+1)*minn;
        step+=minn;
        //printf("%d\n",sum);
        }
    printf("%d\n",step);
    return 0;
}