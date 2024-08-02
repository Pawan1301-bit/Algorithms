#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

void bfs(vector<vector<int>>&adjList, int start , vector<int>&visited){
    queue<int> q;
    //creating a queue for bfs

    //marking the current queue as visited and enqueue it 
    visited[start] = true;
    q.push(start);

    //iterating over the queue
    while(!q.empty()){
        // dequeuing the current node from the queue and print it 
        int currentNode = q.front();    //return the element without deleting it 
        q.pop();
        cout << currentNode << " "; 

        //bow getting all the adjacent verteces of the dequeued vertex -- if an adjacent vertex has not been visited then mark it visited and enqueue it 
        for(int neighbor : adjList[currentNode]){
            if(!visited[neighbor]){
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }



    }


}

void addEdges(vector<vector<int>>&adjList ,int u , int v){
    adjList[u].push_back(v);
}

int main(){

    int vertex = 5;
    //nmber of vertex of the graph 

    vector<vector<int>> adjList(vertex);
    //adjancy list representation of the graph -- In an adjacency list, each vertex in the graph is associated with a list of its neighboring vertices

    //adding vertex
    addEdge(adjList, 0,1);
    addEdge(adjList, 0,2);
    addEdge(adjList, 1,3);
    addEdge(adjList, 1,4);
    addEdge(adjList, 2,5);

    //marking all the vertex that are not visited
    vector<bool> visited(vertex, false);

    //starting bfs from vertex 0 
    cout << "breath first search of the tree : " << bfs(adjList, 0 ,visited);

    return 0;
}

