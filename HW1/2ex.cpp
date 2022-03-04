//寫錯後參考網路重新構思邏輯
#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main()
{
    int T, tmp;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        stack<int> s;
        queue<int> q;
        for (int i = 1; i <= n; ++i) cin >> tmp, q.push(tmp);
        for (int i = 1; i <= n; ++i)
        {
            s.push(i);
            while (!s.empty() && s.top() == q.front()) s.pop(), q.pop();
        }
        cout << (s.empty() ? "YES\n" : "NO\n");
    }
    return 0;
}