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



int arr[105];
int main()
{
    int t,kaS=0,i,j,k,p,q,r;
    int m,n;
    //FI;
    //FO;
    cin>>t;
    //cout<<t<<endl;
    while(t--)
    {
        int sum=0;
        m=0;
        scanf("%d", &n);
        //cout<<n<<endl;
        for(int i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for(int i=0; i<n; i++)
        {
            if(arr[i]<0)
            {
                m++;
            }
            sum+=abs(arr[i]);
        }
        if(n==m)
        {
            printf("Case %d: inf\n", ++kaS);

        }
        else
        {
            int ans=__gcd(n-m,sum);
            int up=sum/ans;
            int down=(n-m)/ans;
            printf("Case %d: %d/%d\n", ++kaS,up,down);
        }


    }
    return 0;
}
