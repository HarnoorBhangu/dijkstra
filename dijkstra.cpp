#include<iostream>
#include<climits>     
using namespace std;

//Total number of vertices in the graph
#define vertex 7      

int minimumDist(int dist[], bool Dset[])   
{
	int min=INT_MAX,index;                
	for(int v=0;v<vertex;v++)
	{
		if(Dset[v]==false && dist[v]<=min)      
		{
			min=dist[v];
			index=v;
		}
	}
	return index;
}
void dijkstra(int graph[vertex][vertex],int src) 
{
	int dist[vertex];                             
	bool Dset[vertex];
	for(int i=0;i<vertex;i++)                      
	{
		dist[i]=INT_MAX;
		Dset[i]=false;	
	}
	dist[src]=0;                                
	for(int c=0;c<vertex;c++)                           
	{
		int u=minimumDist(dist,Dset);              
		Dset[u]=true;                              
		for(int v=0;v<vertex;v++)                  
	
		{
			if(!Dset[v] && graph[u][v] && dist[u]!=INT_MAX && dist[u]+graph[u][v]<dist[v])
			dist[v]=dist[u]+graph[u][v];
		}
	}
	cout<<"Vertex\t\tDistance from source"<<endl;
	for(int i=0;i<vertex;i++)                      
	{
		char c=65+i;
		cout<<c<<"\t\t"<<dist[i]<<endl;
	}
}
int main()
{
  
    cout<<"Enter the elements in a 7x7 graph"<<endl;
    int graph[vertex][vertex];
    for(int i =0;i<7;i++)
    {
    for(int j =0;j<7;j++)
    {
        cin>>graph[i][j];
    }
    }
                    
	dijkstra(graph,0);
	return 0;	                        
}
