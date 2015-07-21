#include<cstdio>

int main()
{
    int n;
    while (scanf("%d",&n)!=EOF)
    {
        int s=0;
        for (int i=1;i<=n;i++) s+=i;
        printf("%d\n\n",s);
    }
    return 0;
}
