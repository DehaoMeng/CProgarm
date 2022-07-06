//author:孟德昊
//时间：07/10/21 17:42
//
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define N 9   
#define P 6  
struct edge {
    int initial;
    int end;
    int weight;
};

int cmp(const void* a, const void* b) {
    return  ((struct edge*)a)->weight - ((struct edge*)b)->weight;
}
void kruskal_MinTree(struct edge edges[], struct edge minTree[]) {
    int i, initial, end, elem, k;
    int assists[P];
    int num = 0;
    for (i = 0; i < P; i++) {
        assists[i] = i;
    }
    qsort(edges, N, sizeof(edges[0]), cmp);
    for (i = 0; i < N; i++) {
        initial = edges[i].initial - 1;
        end = edges[i].end - 1;
        if (assists[initial] != assists[end]) {
            minTree[num] = edges[i];
            num++;
            elem = assists[end];
            for (k = 0; k < P; k++) {
                if (assists[k] == elem) {
                    assists[k] = assists[initial];
                }
            }
            if (num == P - 1) {
                break;
            }
        }
    }
}

void display(struct edge minTree[]) {
    int cost = 0, i;
    printf("最小生成树为:\n");
    for (i = 0; i < P - 1; i++) {
        printf("%d-%d  权值：%d\n", minTree[i].initial, minTree[i].end, minTree[i].weight);
        cost += minTree[i].weight;
    }
    printf("总权值为：%d", cost);
}

int main() {
    int i;
    struct edge edges[N], minTree[P - 1];
    for (i = 0; i < N; i++) {
        scanf("%d %d %d", &edges[i].initial, &edges[i].end, &edges[i].weight);
    }
    kruskal_MinTree(edges, minTree);
    display(minTree);
    return 0;
}
