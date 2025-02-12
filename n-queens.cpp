#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// Function to print the distance array after each iteration
void printIteration(int iteration, const vector<int> &distance)
{
    cout << "Iteration " << iteration << ": ";
    for (int d : distance)
    {
        if (d == INT_MAX)
        {
            cout << "INF ";
        }
        else
        {
            cout << d << " ";
        }
    }
    cout << endl;
}

// Function to implement the Bellman-Ford algorithm
void bellmanFord(int vertices, int edges, int source, const vector<vector<int>> &graph)
{
    vector<int> distance(vertices, INT_MAX);
    distance[source] = 0;

    // Relax all edges |V| - 1 times
    for (int i = 1; i <= vertices - 1; i++)
    {
        for (int j = 0; j < edges; j++)
        {
            int u = graph[j][0];
            int v = graph[j][1];
            int weight = graph[j][2];

            // If the distance to u is not infinity and we find a shorter path to v
            if (distance[u] != INT_MAX && distance[u] + weight < distance[v])
            {
                distance[v] = distance[u] + weight;
            }
        }
        printIteration(i, distance); // Print distances after each iteration
    }

    // Check for negative-weight cycles
    for (int j = 0; j < edges; j++)
    {
        int u = graph[j][0];
        int v = graph[j][1];
        int weight = graph[j][2];

        if (distance[u] != INT_MAX && distance[u] + weight < distance[v])
        {
            cout << "Graph contains a negative-weight cycle" << endl;
            return;
        }
    }

    // Print the final distances from the source vertex
    cout << "Final distances from source vertex " << source << ": ";
    for (int d : distance)
    {
        if (d == INT_MAX)
        {
            cout << "INF ";
        }
        else
        {
            cout << d << " ";
        }
    }
    cout << endl;
}

// Main function
int main()
{
    int vertices, edges, source;
    cout << "Enter the number of vertices: ";
    cin >> vertices;
    cout << "Enter the number of edges: ";
    cin >> edges;

    vector<vector<int>> graph(edges, vector<int>(3));
    cout << "Enter the edges in the format (source destination weight):" << endl;
    for (int i = 0; i < edges; i++)
    {
        cin >> graph[i][0] >> graph[i][1] >> graph[i][2];
    }

    cout << "Enter the source vertex: ";
    cin >> source;

    bellmanFord(vertices, edges, source, graph);

    return 0;
}
