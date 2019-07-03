#include<cstdio>
#include<algorithm>
using namespace std;
const int mn=4*(5000-0+1);
struct tree
{
        int dat,l,r,lazy;
};
struct data
{
        int l,r,x,v;
};
tree b[mn];
data a[20001];
inline bool _comp(const data a,const data b)
{
        return a.x<b.x;
}
void build(int x,int l,int r)
{
        b[x].l=l,b[x].r=r,b[x].dat=0;
        int mid=(l+r)>>1;
        build(x<<1,l,mid);
        build((x<<1)+1,mid+1,r);
        return;
}
void change(int l,int r,int k)
{

}
int main()
{
        int n,R,i,x,y,val,al=0,mx,nx;
        scanf("%d%d",&n,&R);
        mx=0;
        nx=5000;
        for (i=1;i<=n;++i)
                {
                scanf("%d%d%d",&x,&y,&val);
                ++al;
                a[al].l=max((x-R)*2+1,1);
                a[al].r=x*2-1;
                a[al].x=y*2+1;
                a[al].v=val;
                ++al;
                a[al].l=a[al-1].l;
                a[al].r=a[al-1].r;
                mx=max(a[al].r,mx);
                nx=min(a[al].l,nx);
                a[al].x=max((y-R)*2-1,1);
                a[al].v=-val;
                }
        sort(a+1,a+al+1,_comp);
        build(1,nx,mx);
        for (i=1;i<=al;++i)
                {
                change(a[i].l,a[i].r,a[i].v);
                
                }
        return 0;
}