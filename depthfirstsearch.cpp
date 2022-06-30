//DEPTH FIRST SEARCH 
//OR
//DEPTH FIRST TRAVERSAL
//IN THE TRESS WE DONT HAVE ANY CYCLES SO IN THE TREES THERE WILL NO 
//CHANCE TO VIST THE VISITED AGAIN
//BUT GRAPH IS A DATASTRUCUTRE WHERE THERE ARE CYCLES AND IN THE GRAPHS
//THERE IS A  CHANCE TO VISIT THE VISITED NODE AGAIN
//TO AVOID THE REVISITING OF THE NODES WE HAVE TO MAINTIAN A BOOLEAN ARRAY
//THAT TRACKS WHETHER WE HAVE VISITED A PARTICULAR NODE AND IF WE HAVE 
//VISITED THE NODE WE STORE THE TRUE FOR THAT VERTEX IF WE HAVE
//NOT VISITED THE NODE WE STORE FALSE FOR THAT VERTEX

//WE CAN USE THE DEPTH FIRST SEARCH ON BOTH GRAPHS AND THE TRESS 
//WE USE THE DEPTH FIRST SEARCH TO TRAVERSE THE GRAPH OR THE TREE
//THIS ALGORITHM WILL STARTS FROM THE ROOT NODE WE CAN SELECT ANY OF THE 
//NODE AS THE ROOT NODE IN THE CASE OF GRAPHS
//UNLIKE THE BFS IT GOES DEEPER AND DEEPER WHILE TRAVERSING 
//WHEN IT REACHES THE LAST NODE IT BACKTRACKS 
//IN THIS APPROACH WE HAVE START FROM THE ROOT NODE WE HAVE TO MARK
//THE VISITING STATUS OF THE NODES IF WE HAVE VISITED WE HAVE TO MARK TRUE
//IF WE HAVE NOT VISITED BY DEFAULT UT WILL BE FALSE FOR THAT VERTEX

//WE HAVE TWO WAYS TOIMPLEMENT THE DFS ONE IS RECURSIVE APPROACH AND
//ANOTHER IS THE RECURSIVE APPROACH
//HERE WE ARE GOING TO IMPLEMENT THE RECUSRSIVE APPROACH OF THE DFS
//*************************************
//||||||| ALGORITHM OR PROCEDURE ||||||
//-------------------------------------
//1)CREATE A RECURSIVE FUNCTION WITH TWO ARGUMENTS AND ONE ARGUMENT IS 
//TO TAKE THE INDEX OF THE CURRENTLY VISITING NODE AND AS A SECOND
//ARGUMENT WE HAVE TO TAKE THE VISITING STATUS ARRAY
//2)MARK THE CURRENTLY TRAVERSING NODE AS THE VISITED NODE IN THE 
//VISITINGSTATUS ARRAY AND PRINT THE DATA IN THE NODE
//TRAVERSE ALL THE ADJACENT NODES AND THE UNVISITED NODES BY CALLING THE 
//TRAVERSING FUNCTION RECURSIVELY

#include<bits/stdc++.h>
using namespace std;
class myDirectedGraph{
    //this class was representing the directed graph and 
    //we are storing the nodes in the form of adjacency list
    public:
    map<int,bool> visitingstatus;
    map<int,list<int>> adjacentnode;
    void addEdgetoGraph(int vertex,int width);
    void DepthFirstSearch(int vertex);
};
    void myDirectedGraph::addEdgetoGraph(int vertex,int width){
        adjacentnode[vertex].push_back(width);
    }
    void myDirectedGraph::DepthFirstSearch(int vertex){
        visitingstatus[vertex]=true;
        cout<<vertex<<" ";
        //traverse all the vertices which are adjacent to currently 
        //traversed vertex
        list<int>::iterator iter;
        for(iter=adjacentnode[vertex].begin();iter!=adjacentnode[vertex].end();++iter){
            if(!visitingstatus[*iter]){
                DepthFirstSearch(*iter);
            }
        }
    }


int main() {
    myDirectedGraph graph;
    graph.addEdgetoGraph(0,1);
    graph.addEdgetoGraph(0,2);
    graph.addEdgetoGraph(0,3);
    graph.addEdgetoGraph(1,4);
    graph.addEdgetoGraph(2,5);
    graph.addEdgetoGraph(3,6);
    cout<<"äpplying DFS from  vertex 0"<<endl;

    graph.DepthFirstSearch(0);
    return 0;
}
