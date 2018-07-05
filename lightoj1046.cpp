///Bismillahir Rahmanir Rahim

////////////////////////////
/// /// Rayhan Rashed //////
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
int dx[]= {2,-2,2,-2,1,-1,1,-1};
int dy[]= {1,-1,-1,1,2,-2,-2,2};
int vis[11][11][11][11];
struct val
{
    int no;
    int tot;

};
struct temp
{
    int dist;
    int x;
    int y;
    temp(int a,int b,int c)
    {
        x=a;
        y=b;
        dist=c;
    }
};
val values[11][11];
void bfs(int k,int x,int y)
{

    vis[x][y][x][y]=1;
    values[x][y].no++;
    queue<temp > q;
    q.push(temp(x,y,k));
    while(!q.empty())
    {
        temp now=q.front();
        q.pop();
        for(int i=0; i<8; i++)
        {
            int nx=now.x+dx[i];
            int ny=now.y+dy[i];
            if(nx>=0 && ny >=0 && nx<n && ny<m)
            {
                if(vis[x][y][nx][ny]==0)
                {
                    vis[x][y][nx][ny]=1;
                    q.push(temp(nx,ny,(now.dist+1)));
                    values[nx][ny].no++;
                    values[nx][ny].tot+=(now.dist)/k ;
                }
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
        CLR(vis);
        CLR(values);
        cin>>n>>m;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        int number_of_things=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(arr[i][j]!='.')
                {
                    number_of_things++;
                    int src=arr[i][j]-'0';
                    bfs(src,i,j);
                }
            }
        }
        int minval=maxi;
        for(int w=0; w<n; w++)
        {
            for(int q=0; q<m; q++)
            {
                if(number_of_things==values[w][q].no)
                {
                    minval=min(minval,values[w][q].tot);
                }
            }
        }
        printf("Case %d: ", ++kaS );
        if(minval==maxi)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n", minval);
        }
    }
    return 0;
}


