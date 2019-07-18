#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    bool n[10];
    int a[4],i,j;
    for (i=100;i<=999;++i)
        {
        memset(n,false,sizeof(n));
        j=i;
        a[1]=j%10;
        a[2]=j/10%10;
        a[3]=j/100;
        if (a[1]==a[2] || a[1]==a[3] || a[2]==a[3] || a[1]*a[2]*a[3]==0 || n[a[1]] || n[a[2]] || n[a[3]]) continue;
        n[a[1]]=n[a[2]]=n[a[3]]=true;
        j=i*2;
        a[1]=j%10;
        a[2]=j/10%10;
        a[3]=j/100;
        if (a[1]==a[2] || a[1]==a[3] || a[2]==a[3] || a[1]*a[2]*a[3]==0 || n[a[1]] || n[a[2]] || n[a[3]]) continue;
        n[a[1]]=n[a[2]]=n[a[3]]=true;
        j=i*3;
        a[1]=j%10;
        a[2]=j/10%10;
        a[3]=j/100;
        if (a[1]==a[2] || a[1]==a[3] || a[2]==a[3] || a[1]*a[2]*a[3]==0 || n[a[1]] || n[a[2]] || n[a[3]]) continue;
        n[a[1]]=n[a[2]]=n[a[3]]=true;
        printf("%d %d %d\n",i,i*2,i*3);
        }
    return 0;
}