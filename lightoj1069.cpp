//Bismillahir Rahmanir Rahim

////////////////////////////
////// Rayhan Rashed ///////
////////////////////////////


#include <cstdio>

int m,n;
int main()
{
    int t,kaS=0;
    scanf("%d", &t);
    for(int i=1;i<=t;i++)
    {
        int ans;
        scanf("%d %d", &m, &n);
        if(m>n)
        {
            ans=(2*m-n)*4;
        }
        else
        {
            ans=n*4;
        }
        ans+=19;
        printf("Case %d: %d\n", ++kaS,ans );
    }
    return 0;
}
