#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
struct node
{
    int st;
    int ed;
};
node a[110];
int n,ans;
bool cmp(node x,node y)
{
    if (x.ed==y.ed) return x.st<y.st;
    return x.ed<y.ed;
}
int main()
{
    scanf("%d",&n);
    while (n!=0)
    {
        memset(a,0,sizeof(a));
        for (int i=1;i<=n;i++) scanf("%d%d",&a[i].st,&a[i].ed);
        sort(a+1,a+n+1,cmp);
        //for (int i=1;i<=n;i++) printf("%d %d\n",i,a[i].ed);
        ans=0;
        int last=0;
        for (int i=1;i<=n;i++)
            if (a[i].st>=last)
            {
                ans++;
                last=a[i].ed;
            }
        printf("%d\n",ans);
        scanf("%d",&n);
    }
    return 0;
}



