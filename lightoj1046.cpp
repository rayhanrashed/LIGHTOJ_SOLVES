////Bismillahir Rahmanir Rahim
//
//////////////////////////////
//////// Rayhan Rashed ///////
//////////////////////////////
//
//
//#include <bits/stdc++.h>
//
//using namespace std;
//
//
//typedef long long LL;
//typedef vector<int> VI;
//typedef vector<int> VLL;
//typedef map<int, int> MAPII;
//typedef map<string,int> MAPSI;
//typedef pair<int, int> PII;
//typedef pair<LL, LL> PLL;
//typedef pair<double, double> PDD;
//typedef vector< PII >VPII;
//typedef vector< PLL >VPLL;
//
//#define SD(a) scanf("%d",&a)
//#define SU(a) scanf("%u",&a)
//#define SHD(a) scanf("%hd",&a)
//#define SHU(a) scanf("%hu",&a)
//#define SLLD(a) scanf("%lld",&a)
//#define SLLU(a) scanf("%llu",&a)
//#define SF(a) scanf("%f",&a)
//#define SLF(a) scanf("%lf",&a)
//#define SC(a) scanf("%c",&a)
//#define SS(a) scanf("%s",a)
//
//
//#define foreach(i, c) for( __typeof( (c).begin() ) i = (c).begin(); i != (c).end(); ++i )
//
//#define inf (1<<29)
//#define sz(a) ((int)a.size())
//#define all(a) a.begin(),a.end()
//#define FOR(i,a,b) for(i=a;i<=b;i++)
//#define ROF(i,a,b) for(i=a;i>=b;i--)
//#define FR(i,n)    for(i=0;i<n;i++)
//#define RF(i,n) for(i=n;i>0;i--)
//#define CLR(a) memset ( a, 0, sizeof ( a ) )
//#define RESET(a) memset ( a, -1, sizeof ( a ) )
//#define PB(a)    push_back ( a )
//#define ff first
//#define ss second
//#define sf scanf
//#define pf printf
//#define pb push_back
//#define mp make_pair
//#define PI acos(-1.0);
//#define maxi 1e9
//#define mini -1*(1e9)
//#define FO freopen("out.txt", "w",stdout)
//#define FI freopen("in.txt", "r",stdin)
////int a[100000];
//struct point
//{
//    int x,y;
//    point(int a,int b)
//    {
//        x=a;
//        y=b;
//    }
//};
//int dx[]={2,2,-2,-2,1,-1,1,-1};
//int dy[]={1,-1,1,-1,2,2,-2,-2};
//int m,n;
//
//int vis[12][12];
//
//int bfs_kngiht(int sx,int sy,int k)
//{
//    int result=-1;
//    int movers=0;
//    for(int i=0;i<m;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            vis[i][j]=0;
//        }
//    }
//    queue < point > myq;
//    myq.push(point(sx,sy));
//    while(!myq.empty())
//    {
//        point test=myq.front();
//        myq.pop();
//        if(test.x==sx && test.y==sy)
//        {
//            result=movers;
//            break;
//        }
//        for(int)
//    }
//}
//int main()
//{
//    int t,kaS=0,i,j,k,p,q,r;
//    //FI;
//    //FO;
//    cin>>t;
//    while(t--)
//    {
//
//
//        printf("Case %d: \n", ++kaS );
//    }
//    return 0;
//}
//
//




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
int m,n;
char arr[11][11];
int dx[]={2,-2,2,-2,1,-1,1,-1};
int dy[]={1,-1,-1,1,2,-2,-2,2};
int vis[11][11];
int sum[11][11];
int real_visit[11][11][11][11];
void bfs(int k,int x,int y)
{

    vis[x][y][x][y]=1;
    queue<pair< int , int > > q;
    q.push(make_pair(x,y));
    while(!q.empty())
    {
        pair <int , int > now;
        q.pop();
        for(int i=0;i<8;i++)
        {
            int nx=now.first+dx[i];
            int ny=now.second+dy[i];
            if(nx>=0 && ny >=0 && nx<n && ny<m)
            {
                if([x][y])
            }
        }

    }
}



int main()
{
    int t,kaS=0,i,j,k,p,q,r;
    //FI;
    //FO;
    cin>>t;
    char temp;
    while(t--)
    {
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arr[i][j]!='.')
                {
                    int src=arr[i][j]-'0';
                    cout<<src<<endl;
                    bfs(src,i,j);
                }
            }
        }
        printf("Case %d: \n", ++kaS );
    }
    return 0;
}


