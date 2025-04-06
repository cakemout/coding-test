#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <queue>

using namespace std;

unordered_map <char, vector<char>> adjList;
unordered_set <char> visited;
vector <char> result;

void dfs(char node)
{
    result.push_back(node);
    visited.insert(node);

    for(char v: adjList[node])
    {
        if(visited.find(v) == visited.end())
        {
            dfs(v);
        }
    }
}

void solution(vector<pair<char, char>> graph, char start)
{
    for(int i=0; i<graph.size(); i++)
    {
        char u = graph[i].first;
        char w = graph[i].second;
        adjList[u].push_back(w);

    }
    dfs(start);
}

void init()
{
    adjList.clear();
    visited.clear();
    result.clear();
}

int main() {

    solution({{'A','B'}, {'B','C'}, {'C','D'}, {'D','E'}},'A');
    for(int i=0; i<result.size(); i++)
    {
        cout << result[i] << ' ';
    }
    cout<<endl;
    init();

    solution({{'A','B'}, {'A','C'}, {'B','D'}, {'B','E'}, {'C', 'F'}, {'E', 'F'}},'A');
    for(int i=0; i<result.size(); i++)
    {
        cout << result[i] << ' ';
    }
    cout<<endl;
    
    return 0;
}
