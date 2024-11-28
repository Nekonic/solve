//GPT4.0 에서 좀 수정한 코드

#include <bits/stdc++.h>
using namespace std;
int capacity[401][401], flow[401][401];
vector<int> graph[401];

bool bfs(int N, int parent[]) {
    fill(parent, parent + N+1, -1);
    queue<int> q;
    q.push(1); // 소스는 1번 도시
    parent[1] = 1;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        for (int next : graph[cur]) {
            if (parent[next] == -1 && capacity[cur][next] - flow[cur][next] > 0) {
                parent[next] = cur;
                if (next == 2) return true; // 싱크(2번 도시)에 도달했다면 경로 찾기 성공
                q.push(next);
            }
        }
    }

    return false;
}

int fordFulkerson(int N) {
    int totalFlow = 0;
    int parent[401];

    while (bfs(N, parent)) {
        int pathFlow = INT_MAX;
        for (int cur = 2; cur != 1; cur = parent[cur]) {
            int prev = parent[cur];
            pathFlow = min(pathFlow, capacity[prev][cur] - flow[prev][cur]);
        }

        for (int cur = 2; cur != 1; cur = parent[cur]) {
            int prev = parent[cur];
            flow[prev][cur] += pathFlow;
            flow[cur][prev] -= pathFlow;
        }

        totalFlow += pathFlow;
    }

    return totalFlow;
}

int main() {
    int N, P;
    cin >> N >> P;

    int a, b;
    while(P--){
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a); // 역방향 간선도 추가
        capacity[a][b] = 1; // 각 간선의 용량을 1로 설정
    }

    cout << fordFulkerson(N);

    return 0;
}