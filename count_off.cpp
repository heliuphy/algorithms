//
// Created by 何柳 on 2018/12/2.
//
#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i ) {
        q.push(i);
    }
    int k = 0;
    while(q.size() > 1) {
        ++ k;
        if (k % m != 0) {
            q.push(q.front());
        }
        q.pop();
    }
    cout << q.front() << endl;
    return 0;
}
