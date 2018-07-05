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
int dx[4]= {1,-1,0,0};
int dy[4]= {0,0,1,-1};
int m,n,counta;
char c;
int sx,sy,ty,tx;
char a[500][500];
char visited[500][500];
struct point
{
    int x,y;
    point(int a,int b)
    {
        x=a;
        y=b;
    }
};
void bfs(int sx,int sy)
{
    counta=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            visited[i][j]=0;
        }
    }
    visited[sx][sy]=1;
    counta++;

    queue <point> q;

    q.push(point(sx,sy));

    while(!q.empty())
    {
        point test=q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            tx=test.x+dx[i];
            ty=test.y+dy[i];
            if(tx>=m || tx<0 || ty<0 || ty>=n)continue;
            if(visited[tx][ty])continue;
            if(a[tx][ty]=='.')
            {
                counta++;
                visited[tx][ty]=1;
                q.push(point(tx,ty));
            }

        }
    }
}
int main()
{
    int t,kaS=0,i,j,k,p,q,r;
    //FI;
    FO;
    cin>>t;
    while(t--)
    {

        scanf("%d %d\n", &n, &m);

        for(int i=0;i<m;i++)
        {
            scanf("%s", a[i]);
        }

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j]=='@')
                {
                    sx=i;
                    sy=j;
                    break;
                }
            }
        }

        bfs(sx,sy);
        printf("Case %d: %d\n", ++kaS,counta);
    }
    return 0;
}
