/*
    PROBLEM:hdu1005
    AUTHER:NicoleLam
    MEMO:’“πÊ¬…
*/

#include<cstdio>
using namespace std;
const int N=100;
int f[N];

int main()
{
    int a,b,n;
    scanf("%d%d%d",&a,&b,&n);

    while ((a!=0) && (b!=0) && (n!=0))
    {
        f[1]=1,f[2]=1;
        int i;
        for (i=3;i<100;i++)
        {
            f[i] = (a*f[i-1] + b*f[i-2])  %  7;

            if ( f[i-1]==1 && f[i]==1) break;
        }
        n=n%(i-2);
        f[0]=f[i-2];
        printf("%d\n",f[n]);
        scanf("%d%d%d",&a,&b,&n);
    }
    return 0;
}
