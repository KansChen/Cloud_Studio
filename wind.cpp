#include<cstdio>
#include<string>
#include<iostream>
#include<cstring>
using namespace std;
struct node
{
    int x,y,power;
    bool st;
};
node q[100001];
int f[201][201],w[201][201];
const int way[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
int main()
{
    int n,m,sx,sy,ex,ey,l=1,r=1;
    bool lst;
    register int i,j;
    string s;
    freopen("input.in","r",stdin);
    cin>>m>>n;
    getline(cin,s);
    memset(f,0,sizeof(f));
    for (i=1;i<=m;++i)
        {
        getline(cin,s);
        for (string::size_type k=0;k<s.length();++k)
            if (s[k]=='E')
                {
                ex=i;
                ey=k+1;
                f[i][k+1]=2;
                }
            else if (s[k]=='S')
                {
                sx=i;
                sy=k+1;
                f[i][k+1]=2;
                }
            else if (s[k]=='#')
                {
                f[i][k+1]=0;
                }
            else if (s[k]=='.')
                {
                f[i][k+1]=2;
                }
            else f[i][k+1]=1;
        }
    cin>>j;
    if (j) q[1].st=true;
        else q[1].st=false;
    memset(w,0,sizeof(w));
    w[sx][sy]=16384*2;
    q[1].x=sx;
    q[1].y=sy;
    q[1].power=16384*2;
    l=r=1;
    while (l<=r)
        {
        for (i=0;i<4;++i)
            {
            const int nx=q[l].x+way[i][0],ny=q[l].y+way[i][1];
            if (nx>=1 && nx<=m && ny>=1 && ny<=n)
                {
                if (q[l].power/2*f[nx][ny]>w[nx][ny])
                    {
                    ++r;
                    q[r].x=nx;
                    q[r].y=ny;
                    q[r].power=q[l].power/2*f[nx][ny];
                    w[nx][ny]=q[l].power/2*f[nx][ny];
                    q[r].st=~q[l].st;
                    if (nx==ex && ny==ey) lst=q[r].st;
                    }
                }
            }
        ++l;
        }
    if (w[ex][ey]==0) cout<<"There’s no wind!"<<endl;
        else 
            {
            cout<<w[ex][ey]/2<<endl;
            if (lst) cout<<1<<endl;
                else cout<<0<<endl;
            }
    return 0;
}