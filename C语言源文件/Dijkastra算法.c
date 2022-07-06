//author:ÃÏµÂê»
//Ê±¼ä£º
#include<stdio.h>
#define SIZE 110  
#define INF 1000000;  
int map[SIZE][SIZE];
int len[SIZE];
int visit[SIZE]; 
int n,m;  
 
int dijkstra(int from, int to){
    int i;  
    for(i = 1 ; i <= n ; i ++){
        visit[i] = 0;
        len[i] = map[from][i];
    }  
  
    int j;  
    for(i = 1 ; i < n ; ++i){ 
        int min = INF;  
        int pos;  
        for(j = 1 ; j <= n ; ++j){	
            if(!visit[j] && min > len[j]){  
                pos = j;  
                min = len[j];  
            }  
        }  
        visit[pos] = 1;  
  
        for(j = 1 ; j <= n ; ++j){
            if(!visit[j] && (len[j] > (len[pos] +map[pos][j]))){
                len[j] = len[pos] + map[pos][j];
            }  
        }  
    }  
  
    return len[to];
}
  
int main () {  
    int i,j;    
	n = 6;
	m = 9;
 
    for(i = 1 ; i <= n ; ++i){
        for(j = 1 ; j <= n ; ++j){  
            map[i][j] = INF;  
        }  
    }  
    map[1][2] = 7;
	map[1][3] = 9;
	map[1][6] = 14;
	map[2][3] = 10;
	map[2][4] = 15;
	map[3][6] = 2;
	map[5][6] = 9;
	map[4][5] = 6;
	map[3][4] = 11;
    int temp = INF;
	for(i = 1 ; i <= n ; ++i){
		for(j = 1 ; j <= n ; ++j){
			if(map[i][j] == temp)
				map[i][j] = map[j][i];
		}
	}
 
    int ans = dijkstra(1,5);  
 
    printf("%d",ans);  
 
    return 0;  
} 
