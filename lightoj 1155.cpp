//Bismillahir Rahmanir Rahim

////////////////////////////
////// Rayhan Rashed ///////
////////////////////////////


#include <bits/stdc++.h>

using namespace std;


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
#define maxs 220

int cf[maxs][maxs];
vector<int> adjlist[220];
int n,m,s,t,ac;
bool visited[220];
int parent[220];
int source_scc[220];
int cost[220];
bool bfs()
{
    for(int i=1; i<220; i++)
    {
        visited[i]=false;
        parent[i]=i;
    }
    queue<int> q;
    visited[s]=true;
    q.push(s);
    while(!q.empty())
    {
        int k=q.front();
        if(k==t) return true;
        q.pop();
        //int lk=adjlist[k].size();
        for(int i=1; i<=n; i++)
        {
            int pq=i;
            if(visited[pq]==false && cf[k][pq]>0)
            {
                cost[pq]=min(cost[k],cf[k][pq]);
                visited[pq]=true;
                parent[pq]=k;
                q.push(pq);
            }
        }
    }
    return false;
}
int maxflow()
{
    int total_flow=0;

    while(bfs())
    {

        total_flow+=cost[t];
        for(int v=t; parent[v]!=v; v=parent[v])
        {
            int u=parent[v];
            cf[u][v]-=cost[t];
            cf[v][u]+=cost[t];
        }

    }
    return total_flow;
}
int main()
{
    int tesla,kaS=0,i,j,k,p,q,r;
    scanf("%d", &tesla);
    while(tesla--)
    {
        scanf("%d", &ac);
        n=2*ac+2;
        s=n-1;
        t=n;
        CLR(cf);
        for(int i=1; i<=ac; i++)
        {
            scanf("%d", &p);
            cf[i][i+ac]=p;

        }
        scanf("%d", &m);
        for(int i=1; i<=m; i++)
        {
            scanf("%d %d %d", &p, &q, &r);
            cf[p+ac][q]+=r;
        }
        int f,g;
        scanf("%d %d", &f, &g);

        for(int i=1; i<=f; i++)
        {
            scanf("%d", &p);
            cf[n-1][p]=inf;
        }
        for(int i=1; i<=g; i++)
        {
            scanf("%d", &p);
            cf[p+ac][t]=inf;
        }
        cost[s]=inf;
        parent[s]=s;
        int result=maxflow();
        printf("Case %d: %d\n", ++kaS, result);
    }
    return 0;
}
