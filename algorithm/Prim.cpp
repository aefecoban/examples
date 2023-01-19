#include <iostream>

using namespace std;

#define VSize 5
#define MAX 9999

int MinNode(int w[VSize], bool mstSelected[VSize]){
    int minVal = MAX;
    int selected = 0;
    for(int i = 0; i < VSize; i++){
        if(!mstSelected[i] && w[i] < minVal){
            minVal = w[i];
            selected = i;
        }
    }
    return selected;
}

void PrintMe(int parent[VSize], int graph[VSize][VSize]){
    int costOfTree = 0;
    for(int i = 0; i < VSize; i++){
        if(parent[i] == -1)
          continue;
        
        costOfTree += graph[i][parent[i]];
        cout << i << " <-> " << parent[i] << " (" << graph[i][parent[i]] << ")" << endl;
    }
    cout << "Cost : " << costOfTree;
}

void Prim(int graph[VSize][VSize]){
    int parent[VSize];
    int w[VSize];
    bool mstSelected[VSize];
    
    for(int i = 0; i < VSize; i++){
        w[i] = MAX;
        mstSelected[i] = false;
    }
    
    w[0] = 0;
    parent[0] = -1;
    
    for(int i = 0; i < VSize; i++){
        int CNode = MinNode(w, mstSelected);
        mstSelected[CNode] = true;
        
        for(int j = 0; j < VSize; j++){
            if(graph[CNode][j] && !mstSelected[j] && 
            graph[CNode][j] < w[j]
            ){
                parent[j] = CNode;
                w[j] = graph[CNode][j];
            }
        }
        
    }
    
    PrintMe(parent, graph);
}

int main (){
    
    int graph[VSize][VSize] = {
        {0, 2, 0, 3, 9},
        {2, 0, 1, 6, 0},
        {0, 1, 0, 5, 3},
        {3, 6, 5, 0, 1},
        {9, 0, 3, 1, 0}
    };
    
    Prim(graph);
    
    return 0;
}
