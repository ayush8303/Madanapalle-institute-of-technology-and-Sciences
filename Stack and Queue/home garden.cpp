#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define endl "\n"

int32_t main()
{
  int n;
  cin >> n;
  int sum = 0;
  queue<int> q;
  while (n--)
  {
    int type;
    cin >> type;
    if (type == 1)
    {
      q.push(-sum);
    }
    else if (type == 2)
    {
      int val;
      cin >> val;
      sum += val;
    }
    else
    {
      int k;
      cin >> k;
      int ans = 0;
      while (!q.empty() && q.front() + sum >= k)
      {
        ans++;
        q.pop();
      }
      cout << ans << endl;
    }
  }
  return 0;
}
