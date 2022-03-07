#include <iostream>
#include <stack>
#include <vector>
#include <stdio.h>
using namespace std;
 
int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        int n;
        cin >> n;
        vector<int> target(n);
        target.clear();
        for (int i = 1; i <= n; i++)
        {
            cin >> target[i];
        }
        int order = 1;
        int pos = 1;
        int ans = 1;
        stack<int> s;
        while (pos <= n)
        {
            if (order == target[pos]) // 要是放入的就是要輸出的 直接輸出
                order++, pos++;
            else if (!s.empty() && s.top() == target[pos]) // 若車站裡面不是空的 而且最後進的是要輸出的 則輸出
                s.pop(), pos++;
            else if (order <= n) //若出發點還有車 則放進去
                s.push(order++);
            else   // 若出發點沒車了 要輸出的沒辦法輸出 則此種排法為錯誤的
            {
                ans = 0;    
                break;
            }
        }
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}