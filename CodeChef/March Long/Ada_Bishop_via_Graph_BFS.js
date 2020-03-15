// BFS Did work but not giving expected output


class Graph{
    constructor(){
        this.adjacencyList = {};
    }
    addVertex(vertex){
        if(!this.adjacencyList.hasOwnProperty(vertex)){
            this.adjacencyList[vertex] = [];
        }
    }
    addEdge(vertex1,vertex2){
        if(this.adjacencyList.hasOwnProperty(vertex1) && this.adjacencyList.hasOwnProperty(vertex2)){
            this.adjacencyList[vertex1].push(vertex2);
            this.adjacencyList[vertex2].push(vertex1);
        }
        else{
            if(!this.adjacencyList.hasOwnProperty(vertex1)){
                this.addVertex(vertex1);
            }
            if(!this.adjacencyList.hasOwnProperty(vertex2)){
                this.addVertex(vertex2);
            }
            this.adjacencyList[vertex1].push(vertex2);
            this.adjacencyList[vertex2].push(vertex1);
        }
    }
    static visited = {};
    static queue = [];
    static bfsHelper(myAns){
        while(Graph.queue.length > 0){
            let myVertex = Graph.queue.pop();
            if(!Graph.visited[myVertex]){
                myAns.push(myVertex);
                Graph.visited[myVertex] = true;
                for(let i of my.adjacencyList[myVertex]){
                    Graph.queue.push(i);
                }
            }
            else{
                myAns.push(myVertex);
            }
        }
    }
    bfs(vertex){
        let myAns = [];
        Graph.queue.push(vertex);
        if(this.adjacencyList.hasOwnProperty(vertex)){
            Graph.bfsHelper(myAns);
        }
        return myAns;
    }
}

let my = new Graph();

my.addEdge(11,21);
my.addEdge(31, 21);
my.addEdge(13, 21);
my.addEdge(33, 21);
my.addEdge(31, 42);
my.addEdge(42, 51);
my.addEdge(42, 53);
my.addEdge(42, 33);
my.addEdge(51, 62);
my.addEdge(62, 71);
my.addEdge(62, 73);
my.addEdge(62, 53);
my.addEdge(71, 82);
my.addEdge(73, 82);
my.addEdge(13, 24);
my.addEdge(73, 82);
console.log(my.bfs(11));
console.log(my);
