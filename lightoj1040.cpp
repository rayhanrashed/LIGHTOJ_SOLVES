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
struct edge
{
    int u,v,w;
    edge(int p,int q,int e)
    {
        u=p;
        v=q;
        w=e;
    }
    bool operator<(const edge& a) const
    {
        return w<a.w;
    }
};
int m,n,sum,fin_par;
vector< edge > E;

int parent[1000];
void make_set()
{
    for(int i=0; i<122; i++)
    {
        parent[i]=i;
    }
}
int find(int x)
{
    if(parent[x]==x)
    {
        return x;
    }
    parent[x]=find(parent[x]);

    return parent[x];
}
int kruskal()
{
    int ans=0;
    for(int i=0; i<E.size(); i++)
    {
        if(find(E[i].u)!=find(E[i].v))
        {
            parent[parent[E[i].u]]=parent[E[i].v];
            ans+=E[i].w;
            fin_par--;
            //cout<<"("<<ans<<endl;
        }

    }
    return ans;
}

int main()
{
    int t,kaS=0,i,j,k,p,q,r;
    //FI;
    //FO;
    cin>>t;
    while(t--)
    {
        sum=0;
        scanf("%d", &n);
        int k=0;
        E.clear();
        fin_par=n;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                scanf("%d", &r);
                sum+=r;
                if(r!=0)
                    E.push_back(edge(i,j,r));
            }
        }



        k=E.size();
        sort(E.begin(),E.end());
//        for(int i=0; i<k; i++)
//        {
//            cout<<E[i].u<<" "<<E[i].v<<" "<<E[i].w<<endl;
//        }
        make_set();
        int result=kruskal();
        result=sum-result;
        if(fin_par==1)
        {
            printf("Case %d: %d\n", ++kaS, result);
        }
        else
        {
            printf("Case %d: -1\n", ++kaS);
        }

    }
    return 0;
}
