#include <stdio.h>
#include <limits.h>

#define V 6
void printSolution(int dist[]);
int minDistance(int dist[], int sptSet[]) {
    int v;
    int min = INT_MAX;
    int minIndex = -1;

    for (v = 0; v < V; v++) {
        if (sptSet[v] == 0 && dist[v] <= min) {
            min = dist[v];
            minIndex = v;
        }
    }

    return minIndex;
}


void dijkstra(int graph[V][V], int src) {
    int dist[V];
    int sptSet[V];
    int i,count,v;
    for ( i = 0; i < V; i++)
        dist[i] = INT_MAX, sptSet[i] = 0;

    dist[src] = 0;

    for ( count = 0; count < V - 1; count++) {
        int u = minDistance(dist, sptSet);

        sptSet[u] = 1;

        for ( v = 0; v < V; v++)
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }

    printSolution(dist);
}

void printSolution(int dist[]) {
    int i;
    printf("Vertex \t\t Distance from Source\n");
    for ( i = 0; i < V; i++)
        printf("%d \t\t %d\n", i, dist[i]);
}

int main() {
    int graph[V][V] = { {0, 7, 9, 0, 0, 14},
                        {7, 0, 10, 15, 0, 0},
                        {9, 10, 0, 11, 0, 2},
                        {0, 15, 11, 0, 6, 0},
                        {0, 0, 0, 6, 0, 9},
                        {14, 0, 2, 0, 9, 0} };
  
    dijkstra(graph, 0);
  
    return 0;
}
