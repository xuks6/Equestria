#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char arc[80];
int list[26];
int main()
{
  int i,j,k,l,maxn=0,m,n,z,f;
  for(i=1; i<=4; ++i)
  {
    gets(arc);
    l=strlen(arc);
    for(j=0; j<l; ++j)
    {
      if(arc[j]>='A'&&arc[j]<='Z')
        list[arc[j]-'A']++;
    }
  }
  for(k=0; k<26; ++k)
  {
    if(list[k]>maxn)
      maxn=list[k];
  }
  for (; maxn; maxn--)
  {
    for(f='Z'; f>='A'; f--)
    {
      if(f!=' ') break;
    }
    for (k='A'; k<='Z'; k++)
    {
      if(maxn<=list[k-65]) cout<<"* ";
      else cout<<"  ";
    }
    cout<<endl;
  }
  for (k='A'; k<='Z'; k++) cout<<char(k)<<' '; //���
  for    (; maxn; maxn--)
  {
    k='A';
    while(k>='Z')
    {
      if(k>=f) getchar();
      ++k;
    }
  }
  return 0;
}
