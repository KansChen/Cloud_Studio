#include<cstdio>
#include<cstring>
#include<queue>
using namespace std;
struct node
{
  int father,v,id;
  const bool operator < (const node &a) const
  {
    return v<a.v;
  }
};
node a[100001],tmp;
int son[100001];
int main()
{
  int n,i,j;
  priority_queue<node> st;
  scanf("%d",&n);
  memset(son,0,sizeof(son));
  for (i=2;i<=n;++i)
    {
    scanf("%d",&a[i].father);
    ++son[a[i].father];
    }
  for (i=1;i<=n;++i)
    {
    scanf("%d",&a[i].v);
    a[i].id=i;
    }
  for (i=1;i<=n;++i)
    if (son[i]==0) st.push(a[i]);
  son[0]=233333;
  for (i=1;i<=n;++i)
    {
    tmp=st.top();
    st.pop();
    j=tmp.id;
    printf("%d ",j);
    j=tmp.father;
    --son[j];
    if (son[j]==0) st.push(a[j]);
    }
  return 0;
}