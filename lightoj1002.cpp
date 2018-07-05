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
//vector  < vector< pair<int,int > > > myvct(600);

vector < vector < PII > > V(600);
int m,n;
struct nodea
{
    int u,cost;
    nodea(int a,int b)
    {
        u=a;
        cost=b;
    }
    nodea()
    {

    }
    bool operator<(const nodea &o) const
    {
        return cost>o.cost;
    }
} ;


int cost[600],taken[600];
int min_prim(int s)
{

priority_queue<nodea> PQ;
    for(int i=0;i<n;i++)
    {
        cost[i]=maxi;
        taken[i]=0;

    }
    cost[s]=0;
    PQ.push(nodea(s,0));
    int ans=0;
    while(!PQ.empty())
    {
        nodea x=PQ.top();
        PQ.pop();
        if(taken[x.u])
        {
            continue;
        }
        taken[x.u]=1;
        ans+=x.cost;
        for(int k=0;k<V[x.u].size();k++)
        {
            PII v=V[x.u][k];
            if(taken[v.first])continue;
            if(v.second<cost[v.first])
            {
                PQ.push(nodea(v.first,v.second));
                cost[v.first]=max(v.second,cost[x.u]);
            }
        }
    }
    //cout<<ans<<endl;
    return ans;
}

int main()
{
    int t,kaS=0,i,j,k,p,q,r;
    //FI;
    FO;
    cin>>t;
    while(t--)
    {

        scanf("%d %d", &n, &m);
        //V.clear();
        for(int i=0;i<n;i++)
        {
            V[i].clear();
        }
        for(int i=0;i<m;i++)
        {
            scanf("%d %d %d", &p, &q, &r);
            V[p].push_back(make_pair(q,r));
            V[q].push_back(make_pair(p,r));
        }
       scanf("%d", &k);
       min_prim(k);
       printf("Case %d:\n", ++kaS);
       for(int i=0;i<n;i++)
       {
           if(cost[i]!=maxi)
           {
               printf("%d\n", cost[i]);
           }
           else
           {
               printf("Impossible\n");
           }
       }

    }
    return 0;
}
