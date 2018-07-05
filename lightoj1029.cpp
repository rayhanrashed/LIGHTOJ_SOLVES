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
//vector  < vector< pair<int,int > > > myvct(112);

vector < vector < PII > > V(112);
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
struct nodeb
{
    int u,cost;
    nodeb(int a,int b)
    {
        u=a;
        cost=b;
    }
    nodeb()
    {

    }
    bool operator<(const nodeb &o) const
    {
        return cost<o.cost;
    }
} ;
int min_cost[112];
int max_cost[112];
int cost[112],taken[122];
int min_prim()
{

priority_queue<nodea> PQ;
    for(int i=0;i<112;i++)
    {
        cost[i]=maxi;
        taken[i]=0;

    }
    cost[0]=0;
    PQ.push(nodea(0,0));
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
                cost[v.first]=v.second;
            }
        }
    }
    //cout<<ans<<endl;
    return ans;
}


int max_prim()
{

priority_queue<nodeb> PQ;
    for(int i=0;i<112;i++)
    {
        cost[i]=-maxi;
        taken[i]=0;

    }
    cost[0]=0;
    PQ.push(nodeb(0,0));
    int ans=0;
    while(!PQ.empty())
    {
        nodeb x=PQ.top();
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
            if(v.second>cost[v.first])
            {
                PQ.push(nodeb(v.first,v.second));
                cost[v.first]=v.second;
            }
        }
    }
    //cout<<ans<<endl;
    return ans;
}

int main()
{
    int t,kaS=0,m,n,i,j,k,p,q,r;
    //FI;
    FO;
    cin>>t;
    while(t--)
    {

        scanf("%d", &n);
        //V.clear();
        for(int i=0;i<112;i++)
        {
            V[i].clear();
        }
        while(1)
        {
            scanf("%d %d %d", &p, &q, &r);
            if(p==0 && q==0 && r==0)
            {
                break;
            }
            V[p].push_back(make_pair(q,r));
            V[q].push_back(make_pair(p,r));
        }
       int a= min_prim();
       int b=max_prim();
       if((a+b)%2==0)
       {int real=(a+b)/2;
        printf("Case %d: %d\n", ++kaS, real );
       }
       else
       {
           printf("Case %d: %d/2\n", ++kaS, a+b );
       }
    }
    return 0;
}
