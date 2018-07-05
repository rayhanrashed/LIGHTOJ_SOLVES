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

set <int > myset;
vector < vector <PII > > V(10000);
int fly,air_cost,m,n;

int cost[10000],taken[10000];
struct node
{
    int u,cost;
    node(int a,int b)
    {
        u=a;
        cost=b;
    }
    bool operator <(const node& a) const
    {
        return cost>a.cost;
    }
};
int prim()
{
    int result=0;
    fly=0;

    for(int i=0;i<=n;i++)
    {
        cost[i]=maxi;
        taken[i]=0;
    }
    while(!myset.empty())
    {
        int k=*(myset.begin());
        myset.erase(k);
        fly++;

        priority_queue< node > PQ;
        PQ.push(node(k,0));

        while(!PQ.empty())
        {
            node x=PQ.top();
            PQ.pop();
            if(taken[x.u])
            {
                continue;
            }
            taken[x.u]=1;
            result+=x.cost;
            int sz=V[x.u].size();
            for(int i=0;i<sz;i++)
            {
                PII v=V[x.u][i];
                if(taken[v.first])continue;
                if(v.second<min(cost[v.first],air_cost))
                {
                    cost[v.first]=min(air_cost,v.second);
                    myset.erase(v.first);
                    if(cost[v.first]==air_cost)
                    {
                        fly++;
                        PQ.push(node(v.first,0));

                    }
                    else
                    {
                        PQ.push(node(v.first,v.second));
                    }
                }
            }

        }


    }
    return result;
}
int main()
{
    int t,kaS=0,i,j,k,p,q,r;
    //FI;
    FO;
    cin>>t;
    while(t--)
    {
        fly=0;
        scanf("%d %d %d", &n, &m, &air_cost);
        for(int i=0;i<=n;i++)
        {
            V[i].clear();
        }
        for(int i=0;i<m;i++)
        {
            scanf("%d %d %d", &p, &q, &r);
            V[p].push_back(make_pair(q,r));
            V[q].push_back(make_pair(p,r));
        }
        for(int i=1;i<=n;i++)
        {
            myset.insert(i);
        }
        int res=prim();
        res+=(fly*air_cost);
        printf("Case %d: %d %d\n", ++kaS, res, fly);
    }
    return 0;
}
