//Bismillahir Rahmanir Rahim

////////////////////////////
////// Rayhan Rashed ///////
////////////////////////////


#include <bits/stdc++.h>

using namespace std;


typedef long long LL;
typedef vector<int> VI;
typedef vector<int> VLL;
typedef map<int, int> MAPII;
typedef map<string,int> MAPSI;
typedef pair<int, int> PII;
typedef pair<LL, LL> PLL;
typedef pair<double, double> PDD;
typedef vector< PII >VPII;
typedef vector< PLL >VPLL;

#define SD(a) scanf("%d",&a)
#define SU(a) scanf("%u",&a)
#define SHD(a) scanf("%hd",&a)
#define SHU(a) scanf("%hu",&a)
#define SLLD(a) scanf("%lld",&a)
#define SLLU(a) scanf("%llu",&a)
#define SF(a) scanf("%f",&a)
#define SLF(a) scanf("%lf",&a)
#define SC(a) scanf("%c",&a)
#define SS(a) scanf("%s",a)


#define foreach(i, c) for( __typeof( (c).begin() ) i = (c).begin(); i != (c).end(); ++i )

#define inf (1<<29)
#define sz(a) ((int)a.size())
#define all(a) a.begin(),a.end()
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define ROF(i,a,b) for(i=a;i>=b;i--)
#define FR(i,n)    for(i=0;i<n;i++)
#define RF(i,n) for(i=n;i>0;i--)
#define CLR(a) memset ( a, 0, sizeof ( a ) )
#define RESET(a) memset ( a, -1, sizeof ( a ) )
#define PB(a)    push_back ( a )
#define ff first
#define ss second
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define PI acos(-1.0);
#define maxi 1e9
#define mini -1*(1e9)
#define FO freopen("out.txt", "w",stdout)
#define FI freopen("in.txt", "r",stdin)
int a[1000];
int main()
{
    int t,kaS=0,m,n,i,j,k,p,q,r;
    FI;
    FO;
    cin>>t;
    int temp;
    while(t--)
    {
        r=0;
        scanf("%d %d", &n, &m);

        for(int i=0;i<n;i++)
        {
            scanf("%d", &a[i]);
        }
//        for(int i=0;i<n;i++)
//        {
//            printf("%d", a[i]);
//        }
//        cout<<endl;
        char c,d;
        for(int j=1; j<=m; j++)
        {
            scanf("\n%c", &c);
//            cout<<c<<endl;
            if(c!='R')
            {
                if(c=='P')
                {
                    scanf("%d %d", &p, &q);
                    if(r==1)
                    {
                        p=n-1-p;
                        q=n-1-q;
                    }
                    temp=a[p];
                    a[p]=a[q];
                    a[q]=temp;

                }
                else
                {
                    scanf("%d", &p);
//                    cout<<p<<endl;
                    if(c=='M')
                    {
                        for(int k=0; k<n; k++)
                        {
                            a[k]*=p;
                        }
                    }
                    if(c=='S')
                    {
                        for(int k=0; k<n; k++)
                        {
                            a[k]+=p;
                        }
                    }
                    if(c=='D')
                    {
                        for(int k=0; k<n; k++)
                        {
                            a[k]/=p;
                        }
                    }
                }
            }
            else
            {
                if(r==0)
                {
                    r=1;
                }
                else
                {
                    r=0;
                }
            }
        }
        printf("Case %d:\n", ++kaS );
        if(r==0)
        {
            for(int j=0; j<n-1; j++)
            {
                printf("%d ", a[j]);

            }
            printf("%d\n", a[n-1]);
        }
        else
        {
            for(int j=n-1; j>0; j--)
            {
                printf("%d ", a[j]);

            }
            printf("%d\n", a[0]);
        }

    }
    return 0;
}
