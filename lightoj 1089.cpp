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

struct point
{
    int r_no;
    int mark;
    int val;
    point ()
    {

    }
    point(int r,int m,int v)
    {
        r_no=r;
        mark=m;
        val=v;
    }
    bool operator<(const point& a) const
    {
        return val<a.val;
    }
};
point pt[100100];
point modif[100100];
int in[50100][2];
int lastin[50100][2];
//int modif[50100][2];
int qp[50100];
int mapping[100010];
int m,n;
int tempo;
vector <int >khela;

///TAKEN FROM 1082 SUBMISSION






struct info
{
    int prop, sum;
} tree[100100 * 3];

void init()
{
    for(int i=1; i<=300300; i++)
    {
        tree[i].prop=0;
        tree[i].sum=0;
    }
}
void update(int node, int b, int e, int i, int j, int x)
{
    if (i > e || j < b)
        return;
    if (b >= i && e <= j)
    {
        tree[node].sum += ((e - b + 1) * x);
        tree[node].prop += x;
        return;
    }
    int Left = node * 2;
    int Right = (node * 2) + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, j, x);
    update(Right, mid + 1, e, i, j, x);
    tree[node].sum = tree[Left].sum + tree[Right].sum + (e - b + 1) * tree[node].prop;

}

int query(int node, int b, int e, int i, int j, int carry = 0)
{
    if (i > e || j < b)
        return 0;

    if (b >= i and e <= j)
        return tree[node].sum + carry * (e - b + 1);

    int Left = node << 1;
    int Right = (node << 1) + 1;
    int mid = (b + e) >> 1;

    int p1 = query(Left, b, mid, i, j, carry + tree[node].prop);
    int p2 = query(Right, mid + 1, e, i, j, carry + tree[node].prop);

    return p1 + p2;
}



int main()
{
    int t,kaS=0,i,j,k,p,q,r;
    //FI;
    FO;
    cin>>t;
    while(t--)
    {
        khela.clear();
        scanf("%d %d", &n, &m);
        for(int i=1; i<=n; i++)
        {
            scanf("%d %d", &in[i][0], &in[i][1]);
        }
        for(int i=1; i<=m; i++)
        {
            scanf("%d", &qp[i]);
        }
        int j=1;
        for(int i=1; i<=n; i++)
        {
            pt[j++]=point(i,0,in[i][0]);
            pt[j++]=point(i,1,in[i][1]);
        }
        sort(pt, pt+j);
//        for(int k=1; k<j; k++)
//        {
//            cout<<pt[k].r_no<<" "<<pt[k].mark<<" "<<pt[k].val<<endl;
//        }
        tempo=1;
        int prevv;
        prevv=-10;
        modif[1]=pt[1];
        modif[1].val=1;
        mapping[1]=pt[1].val;
        for(int k=2; k<j; k++)
        {
            if(pt[k].val==pt[k-1].val)
            {
                modif[k]=pt[k];
                modif[k].val=tempo;
            }
            else
            {
                modif[k]=pt[k];
                modif[k].val=++tempo;
                mapping[tempo]=pt[k].val;
                khela.push_back(pt[k].val);
            }
        }
//        for(int k=1; k<=tempo; k++)
//        {
//            cout<<mapping[k]<<endl;
//        }
        for(int k=1; k<j; k++)
        {
            if(modif[k].mark==0)
            {
                lastin[modif[k].r_no][0]=modif[k].val;
            }
            else
            {
                lastin[modif[k].r_no][1]=modif[k].val;
            }

        }
//        for(int k=1; k<=n; k++)
//        {
//            cout<<lastin[k][0]<<" -> "<<lastin[k][1]<<endl;
//        }
//        for(int k=1; k<j; k++)
//        {
//            modif[k]=pt[k];
//            if(modif[k].val==prevv)
//            {
//                modif[k].val=tempo;
//            }
//            else
//            {
//                prevv=pt[k].val;
//                cout<<modif[k].mark<<"     "<<tempo<<endl;
//                modif[k].val=tempo++;
//
//
//            }
//        }

//        for(int k=1; k<j; k++)
//        {
//            cout<<modif[k].r_no<<" "<<modif[k].mark<<" "<<modif[k].val<<endl;
//        }
        printf("Case %d:\n", ++kaS );

        init();
        for(int k=1; k<=n; k++)
        {
            update(1,1,tempo,lastin[k][0],lastin[k][1],1);
        }
        int minia=mapping[1];
        int maxia=mapping[tempo];
        //cout<<"map "<<maxia<<endl;
        vector<int >::iterator low;
        for(int k=1; k<=m; k++)
        {
            if(qp[k]<minia || qp[k]>maxia)
            {
                printf("0\n");
            }
            else
            {


                low=lower_bound(khela.begin(),khela.end(),qp[k]);
                int valar=low-khela.begin()+1;
                //cout<<"alal "<<valar<<endl;
                //cout<<mapping[valar+1]<<"     "<<mapping[valar]<<endl;
                if(mapping[valar+1]==qp[k])
                {
                    int res=query(1,1,tempo,valar+1,valar+1);
                    printf("%d\n",res);
                }
                else
                {
                    int res=query(1,1,tempo,valar,valar);
                    printf("%d\n",res);

                }
            }

        }

    }
    return 0;
}
