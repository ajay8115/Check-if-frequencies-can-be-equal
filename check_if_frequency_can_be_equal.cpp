// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

bool sameFreq(string s)
{
    int n = s.size();

    map<char, int> m;
    for (int i = 0; i < n; i++)
    {
        m[s[i]]++;
    }

    vector<int> v;
    for (auto p : m)
    {
        v.push_back(p.second);
    }

    sort(v.begin(), v.end());

    int sum = 0;
    int cnt = 0;
    for (int i = 0; i < v.size() - 1; i++)
    {
        sum += (v[i + 1] - v[i]);
        if (v[i + 1] != v[i])
        {
            cnt++;
        }
    }

    if (sum == 1 or sum == 0)
    {
        return true;
    }

    if (cnt == 1 and a[0] == 1)
    {
        return true;
    }

    return false;
}
