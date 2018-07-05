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



int main()
{
    queue< int > myq;
    int t,kaS=0,m,n,i,j,k,p,q,r;
    //FI;
    //FO;
    cin>>t;
    int real=0;
    while(t--)
    {
        vector< vector<int> > myvector(21000);
        vector< int > color(21000);
        set <int> myset;
        scanf("%d", &n);
        for(int i=0; i<n; i++)
        {
            scanf("%d %d", &p, &q);
            myvector[p].push_back(q);
            myvector[q].push_back(p);
            myset.insert(p);
            myset.insert(q);

        }
        while(!myset.empty())
        {
            vector< int > a;
            vector< int > b;
            int k=*(myset.begin());


            myq.push(k);
            color[k]=1;
            int col;
            a.push_back(k);
            while(!myq.empty())
            {
                int p=myq.front();
                myq.pop();
                myset.erase(p);
                if(color[p]==1)
                {
                    col=2;
                }
                else
                {
                    col=1;
                }
                for(int i=0; i<myvector[p].size(); i++)
                {
                    q=myvector[p][i];
                    if(color[q]==0)
                    {
                        myq.push(q);
                        color[q]=col;
                        if(col==1)
                        {
                            a.push_back(q);
                        }
                        else
                        {
                            b.push_back(q);
                        }

                    }
                }
            }
            //cout<<a.size()<<"  "<<b.size()<<endl;
            int ans=max(a.size(),b.size());
            real+=ans;

        }

        printf("Case %d: %d\n", ++kaS,real );
        real=0;
    }
    return 0;
}
