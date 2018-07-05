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
int arr[102][102];

int main()
{
    int t,kaS=0,i,j,k,p,q,r;
    //FI;
    //FO;
    cin>>t;
    while(t--)
    {
        vector < VI > myv(101);
        cin>>n;
        int total=0;
        set<int>here;
        for(int i=0;i<n;i++)
        {
            scanf("%d %d %d", &p, &q, &r);
            total+=r;
            arr[p][q]=r;
            myv[p].push_back(q);
            here.insert(i+1);
        }

        set<int>taken;
        int now;
        for(int i=1;i<=n;i++)
        {
            if(myv[i].size()==1)
            {
                taken.insert(i);
                now=i;
                here.erase(i);
                break;
            }
        }
        cout<<"Now"<<now<<endl;

        for(int i=1;i<=n;i++)
        {
            cout<<i<<"-> ";
            for(int j=0;j<myv[i].size();j++)
            {
                cout<<myv[i][j]<<" ";
            }
            cout<<endl;
        }

        int sum=0;
        while(1)
        {
            //cout<<taken.size();
            if(taken.size()==n)break;
            if(myv[now].size()==0)
            {
                cout<<*(here.begin())<<"j"<<endl;
                now=*(here.begin());
                here.erase(now);
                taken.insert(now);
            }
            else if(myv[now].size()==2)
            {
                if(taken.find(myv[now][0])==taken.end())
                {
                    sum+=arr[now][myv[now][0]];
                    taken.insert(myv[now][0]);
                    here.erase(myv[now][0]);

                    now=myv[now][0];
                }
                else if(taken.find(myv[now][1])==taken.end())
                {
                    sum+=arr[now][myv[now][1]];
                    taken.insert(myv[now][1]);
                     here.erase(myv[now][1]);
                     now=myv[now][1];
                }
            }
            else
            {
                taken.insert(myv[now][0]);
                 here.erase(myv[now][0]);
                 now=myv[now][0];
            }
        }

        //taken.insert(1);
        sum=min(sum,total-sum);
        printf("Case %d: %d\n", ++kaS,sum );
    }
    return 0;
}
