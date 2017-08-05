#include <cstdio>
#include <queue>

using namespace std;

struct State {
    int x, y;
    int step;
};

int R, C;
char maze[1000][1001];
bool visit[1000][1000];
State s, b, e;

void init_bfs(queue<State>& q, State src) {
    int i, j;

    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            visit[i][j] = false;
        }
    }
    visit[src.x][src.y] = true;
    q.push(src);
}

bool in_bound(int x, int y) {
    return (x >= 0 && x < R && y >= 0 && y < C);
}

int di[4] = {1, -1, 0, 0};
int dj[4] = {0, 0, 1, -1};

void get_moves(queue<State>& q, State u) {
    State v;
    int i;
    // 4 directions {down, up, right, left}
    for (i = 0; i < 4; i++) {
        v.x = u.x + di[i];
        v.y = u.y + dj[i];
        v.step = u.step + 1;
        if (in_bound(v.x, v.y) && maze[v.x][v.y] != 'w'  && !visit[v.x][v.y]) {
            visit[v.x][v.y] = true;
            q.push(v);
        }
    }
}

int bfs(State src, State dest) {
    queue<State> q;
    State u;

    init_bfs(q, src);
    while (!q.empty()) {
        u = q.front();
        q.pop();
        if (u.x == dest.x && u.y == dest.y) {
            return u.step;
        }
        get_moves(q, u);
    }

    return -1;
}

int main(void) {
    int i, j;

    while (scanf("%d %d", &R, &C) == 2) {
        for (i = 0; i < R; i++) {
            scanf("%s", maze[i]);
            for (j = 0; j < C; j++) {
                //save s, b, e position
                if (maze[i][j] == 's') {
                    s.x = i; s.y = j;
                }
                else if (maze[i][j] == 'b') {
                    b.x = i; b.y = j;
                }
                else if (maze[i][j] == 'e') {
                    e.x = i; e.y = j;
                }
            }
        }
        s.step = 0;
        b.step = bfs(s, b);
        if (b.step < 0) printf("No solution.\n");
        else {
			e.step = bfs(b, e);
			if (e.step < 0) printf("No solution.\n");
            else printf("Escape in %d steps.\n", e.step);
        }
    }

    return 0;
}
