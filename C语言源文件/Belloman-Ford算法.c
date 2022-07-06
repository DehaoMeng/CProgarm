/*相比狄克斯特拉算法(Dijkstra algorithm),其最大优点便是Bellman–Ford支持存在负权重的情况，并且代码实现相对简单。
缺点便是时间复杂度较高，达到O(V*E)，V代表顶点数，E代表边数。
   Bellman - Ford   */
#include<stdio.h>
#define namespace std
#define maxnum 100
#define maxint 99999

// 边，
typedef struct Edge{
    int u, v;    // 起点，重点
    int weight;  // 边的权值
}Edge;

Edge edge[maxnum];     // 保存边的值
int  dist[maxnum];     // 结点到源点最小距离

int nodenum, edgenum, source;    // 结点数，边数，源点

// 初始化图
void init()
{
    // 输入结点数，边数，源点
    cin >> nodenum >> edgenum >> source;
    for(int i=1; i<=nodenum; ++i)
        dist[i] = maxint;
    dist[source] = 0;
    for(int i=1; i<=edgenum; ++i)
    {
        cin >> edge[i].u >> edge[i].v >> edge[i].weight;
        if(edge[i].u == source)          //注意这里设置初始情况
            dist[edge[i].v] = edge[i].weight;
    }
}

// 松弛计算
void relax(int u, int v, int weight)
{
    if(dist[v] > dist[u] + weight)
        dist[v] = dist[u] + weight;
}

bool Bellman_Ford()
{
    for(int i=1; i<=nodenum-1; ++i)
        for(int j=1; j<=edgenum; ++j)
            relax(edge[j].u, edge[j].v, edge[j].weight);
    bool flag = 1;
    // 判断是否有负环路
    for(int i=1; i<=edgenum; ++i)
        if(dist[edge[i].v] > dist[edge[i].u] + edge[i].weight)
        {
            flag = 0;
            break;
        }
    return flag;
}
int main()
{
    //freopen("input3.txt", "r", stdin);
    init();
    if(Bellman_Ford())
        for(int i = 1 ;i <= nodenum; i++)
            cout << dist[i] << endl;
    return 0;
}
