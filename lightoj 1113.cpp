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
int main()
{
    int t,kaS=0,i,j,k,p,q,r;
    //FI;
    FO;
    cin>>t;
    while(t--)
    {

        stack< string > f;
        stack< string > b;
//        cout<<f.size()<<endl;
//        f.push("ASD");
//        cout<<f.size()<<endl;
//        f.pop();
//        cout<<f.size()<<endl;
        string prev="http://www.lightoj.com/";
        b.push(prev);
        //cout<<prev<<endl;
        string inp[110],khela;
        int test[110];
        int i=0;
        int j=0;

        while(cin>>khela)
        {

            if(khela=="VISIT")
            {
                cin>>inp[i];
                i++;
                test[j++]=1;
            }
            else if(khela=="BACK")
            {
                test[j++]=2;
            }
            else if(khela=="FORWARD")
            {
                test[j++]=3;
            }
            else
            {
                break;
            }

        }
//        for(int k=0;k<j;k++)
//        {
//            cout<<test[k]<<endl;
//        }
//        for(int k=0;k<i;k++)
//        {
//            cout<<inp[k]<<endl;
//        }
        printf("Case %d:\n", ++kaS );
        int p=0;
        for(int k=0; k<j; k++)
        {
            if(test[k]==1)
            {
                cout<<inp[p]<<"\n";
                b.push(inp[p++]);
                f=stack < string >();
                //cout<<inp[p]<<endl;
            }
            else if(test[k]==2)
            {
                //cout<<"Here"<<endl;
                if(b.size()==1)
                {
                    //cout<<"AKDKKDHere"<<endl;
                    cout<<"Ignored"<<"\n";
                }
                else
                {
                    prev=b.top();
                    b.pop();
                    f.push(prev);
                    cout<<b.top()<<"\n";
                    //cout<<b.size()<<endl;
                }
            }
            else
            {
                if(f.size()==0)
                {
                    cout<<"Ignored"<<"\n";
                }
                else
                {
                    cout<<f.top()<<"\n";
                    prev=f.top();
                    f.pop();
                    b.push(prev);
                    //cout<<f.top()<<endl;
                }
            }
        }

    }
    return 0;
}

