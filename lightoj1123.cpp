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

int m,n,fin;
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

vector< edge > E;
int tes[6200][3];

int parent[1000];
void make_set()
{
    for(int i=0; i<=n; i++)
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
    int temp=-1;
    for(int i=0; i<E.size(); i++)
    {
        if(find(E[i].u)!=find(E[i].v))
        {
            fin--;
            parent[parent[E[i].u]]=parent[E[i].v];
            ans+=E[i].w;
            //cout<<"("<<ans<<endl;
        }
        else
        {
            temp=i;
        }

    }
    if(temp!=-1)
    {
        E.erase(E.begin()+temp);
    }
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
        int k=0;
        E.clear();
        for(int i=1; i<=m; i++)
        {
            scanf("%d %d %d", &p, &q, &r);
            tes[i][0]=p;
            tes[i][1]=q;
            tes[i][2]=r;
        }
        printf("Case %d:\n", ++kaS);

        for(int i=1;i<=m;i++)
        {
          fin=n;
          E.push_back(edge(tes[i][0],tes[i][1],tes[i][2]));
          sort(E.begin(),E.end());
          make_set();
          int kela=kruskal();
          //cout<<kela<<endl;
          if(fin==1)
          {
              printf("%d\n",kela);
          }
          else
          {
              printf("-1\n");
          }

        }


    }

//        for(int i=0; i<k; i++)
//        {
//            cout<<E[i].u<<" "<<E[i].v<<" "<<E[i].w<<endl;
//        }



return 0;
}
