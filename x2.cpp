#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int f[101][10001],w[101],v[101],p[101];
int main()
{
        int n,m,k,i,j,k1,k2;
        while (scanf("%d%d%d",&n,&m,&k)!=EOF)
                {
                for (i=1;i<=n;++i)
                        scanf("%d%d%d",&p[i],&w[i],&v[i]);
                for (i=0;i<=k;++i)
                        for (j=0;j<=m;++j)
                                if (i==0) f[i][j]=0;
                                        else f[i][j]=-1;
                for (i=1;i<=k;++i)
                        for (j=1;j<=n;++j)
                                if (p[j]==i)
                                        {
                                        for (k1=m;k1>=w[j];--k1)
                                                f[j][k1]=max(f[j][k1],max(f[j][k1-w[j]]+v[j],f[j-1][k1-w[j]]+v[j]));
                                        }
                if (f[k][m]<0) printf("Impossible\n");
                        else printf("%d\n",f[k][m]);
                }
        return 0;
}