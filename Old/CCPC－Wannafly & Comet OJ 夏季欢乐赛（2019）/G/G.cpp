#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int top[100001],jungle[100001],mid[100001],adc[100001],sup[100001],top5[6],jungle5[6],mid5[6],adc5[6],sup5[6];
bool usep[100001];
int main()
{
  int n,i;
  memset(top5,0,sizeof(top5));
  memset(jungle5,0,sizeof(jungle5));
  memset(mid5,0,sizeof(mid5));
  memset(adc5,0,sizeof(adc5));
  memset(sup5,0,sizeof(sup5));
  top[0]=jungle[0]=mid[0]=adc[0]=sup[0]=0;
  scanf("%d",&n);
  for (i=1;i<=n;++i)
    {
    scanf("%d%d%d%d%d",&top[i],&jungle[i],&mid[i],&adc[i],&sup[i]);
    if (top[i]>top[top5[1]]) top5[1]=i;
      else if (top[i]>top[top5[2]]) top5[2]=i;
        else if (top[i]>top[top5[3]]) top5[3]=i;
          else if (top[i]>top[top5[4]]) top5[4]=i;
            else if (top[i]>top[top5[5]]) top5[5]=i;
    if (jungle[i]>jungle[jungle5[1]]) jungle5[1]=i;
      else if (jungle[i]>jungle[jungle5[2]]) jungle5[2]=i;
        else if (jungle[i]>jungle[jungle5[3]]) jungle5[3]=i;
          else if (jungle[i]>jungle[jungle5[4]]) jungle5[4]=i;
            else if (jungle[i]>jungle[jungle5[5]]) jungle5[5]=i;
    if (mid[i]>mid[mid5[1]]) mid5[1]=i;
      else if (mid[i]>mid[mid5[2]]) mid5[2]=i;
        else if (mid[i]>mid[mid5[3]]) mid5[3]=i;
          else if (mid[i]>mid[mid5[4]]) mid5[4]=i;
            else if (mid[i]>mid[mid5[5]]) mid5[5]=i;
    if (adc[i]>adc[adc5[1]]) adc5[1]=i;
      else if (adc[i]>adc[adc5[2]]) adc5[2]=i;
        else if (adc[i]>adc[adc5[3]]) adc5[3]=i;
          else if (adc[i]>adc[adc5[4]]) adc5[4]=i;
            else if (adc[i]>adc[adc5[5]]) adc5[5]=i;
    if (sup[i]>sup[sup5[1]]) sup5[1]=i;
      else if (sup[i]>sup[sup5[2]]) sup5[2]=i;
        else if (sup[i]>sup[sup5[3]]) sup5[3]=i;
          else if (sup[i]>sup[sup5[4]]) sup5[4]=i;
            else if (sup[i]>sup[sup5[5]]) sup5[5]=i;
    }
  int i1,i2,i3,i4,i5;
  long long ans=0;
  memset(usep,false,sizeof(usep));
  for (i1=1;i1<=5;++i1)
    {
    usep[top5[i1]]=true;
    for (i2=1;i2<=5;++i2)
      if (usep[jungle5[i2]]==false)
        {
        usep[jungle5[i2]]=true;
        for (i3=1;i3<=5;++i3)
          if (usep[mid5[i3]]==false)
            {
            usep[mid5[i3]]=true;
            for (i4=1;i4<=5;++i4)
              if (usep[adc5[i4]]==false)
                {
                usep[adc5[i4]]=true;
                for (i5=1;i5<=5;++i5)
                  if (usep[sup5[i5]]==false)
                    {
                    ans=max(ans,(static_cast<long long>(top[top5[i1]]))+jungle[jungle5[i2]]+mid[mid5[i3]]+adc[adc5[i4]]+sup[sup5[i5]]);
                    printf("%d %d %d %d %d\n",top5[i1],jungle5[i2],mid5[i3],adc5[i4],sup5[i5]);
                    }
                usep[adc5[i4]]=false;
                }
            usep[mid5[i3]]=false;
            }
        usep[jungle5[i2]]=false;
        }
    usep[top5[i1]]=false;
    }
  printf("%lld\n",ans);
  return 0;
}