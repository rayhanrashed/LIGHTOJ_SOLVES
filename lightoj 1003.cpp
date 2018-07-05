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

struct node
{
    string name;
    int start;
    int finish;
};
int t=1;
int test;
map <string, pair<int,int> > detail;
map <string, int> vis;
        set< string > s;
map < string , vector<string> > mymap;



void dfsvis(string s)
{
    detail[s].first=t;
    t++;
    foreach(i,mymap[s])
    {
        //cout<<*(i)<<endl;
        if(vis[*(i)]==0)
        {
            vis[*(i)]=1;
            dfsvis(*(i));
        }
        else
        {
            if(detail[*(i)].second==0)
            {
                test=1;
                return;
            }
        }
    }
    detail[s].second=t;
    t++;
}
void dfs()
{
    foreach(i,s)
    {

        if(vis[*(i)]==0)
        {
            dfsvis(*(i));
            if(test==1)return;
        }
        //cout<<*(i)<<" -> "<<detail[*(i)].first<<" /" <<detail[*(i)].second<<"\n";
    }
}

int main()
{
    int t,kaS=0,i,j,k,p,q,r,taa;
    //FI;
    //FO;
    scanf("%d",&taa);
    while(taa--)
    {
        //cout<<taa<<endl;
        test=0;

        //string a,b;
        char aa[12],bb[12];
        mymap.clear();
        s.clear();
        scanf("%d", &n);

        for(int i=1;i<=n;i++)
        {
            scanf("%s %s", aa,bb);
            string a(aa);
            string b(bb);
            mymap[a].push_back(b);
            s.insert(a);
            s.insert(b);
        }
        t=0;
        foreach(i,s)
        {
            vis[*(i)]=0;
            detail[*(i)].first=0;
            detail[*(i)].second=0;
        }
        dfs();

        printf("Case %d: ", ++kaS );
        if(test==0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
