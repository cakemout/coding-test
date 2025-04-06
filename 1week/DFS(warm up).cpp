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
