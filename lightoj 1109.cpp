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
//int a[100000];
int a[]= {2,3,5,7,11,13,17,19,23,29,31};
int d[1100];
bool cmp(int const &a, int const &b)
{
    if(d[a]==d[b])
    {
        return a<b;
    }
    return d[a]<d[b];
}
int m,n;
int main()
{
    for(int i=0; i<11; i++)
    {
        cout<<a[i]<<endl;
    }
    memset(d,2,sizeof(d));
    int t,kaS=0,i,j,k,p,q,r;
    //FI;
    //FO;
    d[1]=1;
    for(int i=2; i<1000; i++)
    {
        int con=i;
        int cm=1;
        int cnt=1;
        for(int j=0; j<11; j++)
        {
            int pk=0;
            while(1)
            {

                cout<<i<<" "<<a[j]<<endl;
                cm=0;
                i=i/a[j];
                cout<<i<<" ->"<<a[j]<<endl;
                int mn=i%a[j];
                cout<<i%a[j]<<" <-"<<mn<<endl;

                if(mn != 0 || i==1)
                {
                    break;
                }

            }

            pk++;
            cnt*=pk;

            if(i==1)
            {
                break;
            }
        }
        d[con]=cnt;
    }

    for(int i=1; i<1001; i++)
    {
        cout<<d[i]<<endl;
    }

    cin>>t;
    while(t--)
    {


        printf("Case %d: \n", ++kaS );
    }
    return 0;
}
