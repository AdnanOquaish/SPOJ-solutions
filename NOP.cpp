#include<bits/stdc++.h>
int main()
{
char c[1000005];
int n,i=0,lc=3,fc=0;scanf("%s",c);n=strlen(c);
while(i<n)
{
if(islower(c[i]))
{lc=((lc+1)%4);}
else
{fc+=(3-lc);lc=0;}
i++;
}
printf("%d\n",fc);
return 0;
}
