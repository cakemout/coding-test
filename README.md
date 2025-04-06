1. 재귀호출로 구현된 dfs와 스택으로 구현된 dfs의 장단점  
   - 재귀호출를 이용하면 이용하기 쉬우나 너무 많이 호츨하면 변수가 많아져 스택오버플로우가 일어나버린다. 스택을 이용하면 통안에 물건을 넣는듯이 관리가 가능하여 계속 호출하는것보다는 관리에 안정성이 있다.
 
 
 2. 방향 그래프에서 사이클 존재 여부를 판별하기 위해 dfs를 어떻게 활용할 수 있는지 설명 
   - visited이라는 리스트를 만들어 노드를 방문할때 마다 방문했다고 흔적을 만든다. 예를 들어 unordered_set vector<char> visited라고 만든 후 노드를 방문할때마다 visited.inserted(노드)라고 방문처리하여 남긴다.
 
 
 3. 재귀를 활용한 dfs에서 가장 최근의 노드를 돌아가는 백트래킹 동작이 어떤 방식으로 돌아가는지 설명
   - 코드로 예시
cpp
void dfs(char node) {
    result.push_back(node);
    visited.insert(node);

    for (char v : adjList[node]) {
        if (visited.find(v) == visited.end()) {
            dfs(v);
        }
    }
}
'''
 이처럼 노드가 방문하지 않으면 재귀호출하고 방문했다하면 다음 노드로 나아가는 방식을 이용한다. 
