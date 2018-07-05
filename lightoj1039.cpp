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
#define FO freopen("out.txt", "w",stdout)
#define FI freopen("in.txt", "r",stdin)


int dx[]={1,-1,0,0,0,0};
int dy[]={0,0,1,-1,0,0};
int dz[]={0,0,0,0,1,-1};
struct triplate
{
    int a,b,c,distance;
    triplate(int x,int y,int z,int dis)
    {
        a=x;
        b=y;
        c=z;
        distance=dis;
    }

};

int m,n;
int sx,sy,sz,tx,ty,tz;
int vis[28][28][28];
char st[5];
char fi[5];
char inp[60][5][30];
int bfs()
{
    int movers=-1;
    if(vis[sx][sy][sz]==1 || vis[tx][ty][tz]==1)return movers;
    queue < triplate > myq;
    myq.push(triplate(sx,sy,sz,0));
    while(!myq.empty())
    {
        triplate x=myq.front();
        myq.pop();
        if(x.a==tx && x.b==ty && x.c==tz)
        {
            movers= x.distance;
            break;
        }
        int nx,ny,nz;
        for(int i=0;i<6;i++)
        {
            nx=(x.a+dx[i]+26)%26;
            ny=(x.b+dy[i]+26)%26;
            nz=(x.c+dz[i]+26)%26;
            if(vis[nx][ny][nz])continue;
            vis[nx][ny][nz]=1;
            myq.push(triplate(nx,ny,nz,x.distance+1));
        }
    }
    return movers;
}
int main()
{
    int t,kaS=0,i,j,k,p,q,r;
    //FI;
    FO;
    cin>>t;
    while(t--)
    {
        scanf("\n");
        for(int i=0; i<26; i++)
        {
            for(int j=0; j<26; j++)
            {
                for(int k=0; k<26; k++)
                {
                    vis[i][j][k]=0;
                }
            }
        }

        scanf("\n%s", st);
//        printf("%s\n", st);
        scanf("%s", fi);
//        printf("%s\n", fi);
        scanf("%d", &n);

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<3; j++)
            {
                scanf("%s",inp[i][j]);
            }
        }

        sx=st[0]-97;
        sy=st[1]-97;
        sz=st[2]-97;
        tx=fi[0]-97;
        ty=fi[1]-97;
        tz=fi[2]-97;
        int id=0;
        for(int i=0; i<n; i++)
        {
            int xa=strlen(inp[i][0]);
            for(int j=0; j<xa; j++)
            {
                int xb=strlen(inp[i][1]);
                for(int k=0; k<xb; k++)
                {
                    int xc=strlen(inp[i][2]);
                    for(int l=0; l<xc; l++)
                    {
                        //cout<<"---- "<<inp[i][0][j]<<inp[i][1][k]<<inp[i][2][l]<<endl;
                        vis[inp[i][0][j]-97][inp[i][1][k]-97][inp[i][2][l]-97]=1;
                    }
                }
            }
        }
        int our_ans=bfs();
        printf("Case %d: %d\n", ++kaS,our_ans);
    }
    return 0;
}
