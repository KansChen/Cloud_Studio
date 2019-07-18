#include<iostream>
#include<string>
#include<cstring>
using namespace std; 
int main()
{
  int n,step=0,len,i;
  string m;
  int a[36],b[36],c[36];
  cin>>n>>m;
  for (string::size_type j=0;j<m.length();++j)
    if (m[j]>='A' && m[j]<='F') a[j+1]=m[j]-55;
      else a[j+1]=m[j]-48;
  len=m.length();
  bool huiwen=true;
  for (i=1;i<=len/2;++i)
    if (a[i]!=a[len-i+1])
      {
      huiwen=false;
      break;
      }
  while (huiwen==false && step<=30)
    {
    for (i=1;i<=len;++i)
      b[len-i+1]=a[i];
    memset(c,0,sizeof(c));
    for (i=1;i<=len;++i)
      {
      c[i+1]=(a[i]+b[i]+c[i])/n;
      c[i]=(a[i]+b[i]+c[i])%n;
      }
    if (c[len+1]!=0) ++len;
    memcpy(&a,&c,sizeof(c));
    ++step;
    huiwen=true;
    for (i=1;i<=len/2;++i)
      if (a[i]!=a[len-i+1])
        {
        huiwen=false;
        break;
        }
    }
  if (step>30) cout<<"Impossible!"<<endl;
    else cout<<"STEP="<<step<<endl;
  return 0;
}