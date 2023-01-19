#include <iostream>

using namespace std;

#define VSize 9
#define MAX 9999

int MinNode(int dist[VSize], bool mstSelected[VSize]){
    int minVal = MAX;
    int selected = 0;
    for(int i = 0; i < VSize; i++){
        if(!mstSelected[i] && dist[i] < minVal){
            minVal = dist[i];
            selected = i;
        }
    }
    return selected;
}

void PrintMe(int dist[VSize]){
    for(int i = 0; i < VSize; i++){
        cout << i << " => " << dist[i] << endl;
    }
}

void Dijkstra(int graph[VSize][VSize], int selectedNode){
    int dist[VSize];
    bool mstSelected[VSize];
    
    for(int i = 0; i < VSize; i++){
        dist[i] = MAX;
        mstSelected[i] = false;
    }
    
    dist[selectedNode] = 0;
    
    for(int i = 0; i < VSize; i++){
        int currentNode = MinNode(dist, mstSelected);
        int currentNodeW = dist[currentNode];
        mstSelected[currentNode] = true;
        
        for(int j = 0; j < VSize; j++){
            if( graph[currentNode][j] && !mstSelected[j] && (currentNodeW + graph[currentNode][j]) < dist[j]){
                dist[j] = currentNodeW + graph[currentNode][j];
            }
        }
    }
    
    PrintMe(dist);
}

int main (){
    
    int graph[VSize][VSize] = {{0, 2, 0, 4, 0, 0, 7, 12, 0},{2, 0, 8, 0, 4, 0, 0, 10, 0},{0, 8, 0, 15, 1, 4, 0, 0, 2},{4, 0, 15, 0, 3, 14, 1, 0, 6},{0, 4, 1, 3, 0, 10, 0, 7, 8},{0, 0, 4, 14, 10, 0, 2, 0, 0},{7, 0, 0, 1, 0, 2, 0, 1, 6},{12,10, 0, 0, 7, 0, 1, 0, 3},{0, 0, 2, 0, 6, 8, 6, 3, 0}};
    Dijkstra(graph, 0);
    
    return 0;
}
