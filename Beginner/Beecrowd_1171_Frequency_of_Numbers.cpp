#include<bits/stdc++.h>

using namespace std;

void countFreq(int a[],int n);

int main()
{
    int n;

    cin >> n;

    int a[n];

    for(int i = 0; i<n; i++)
    {
        int x;
        cin >> x;
        a[i] = x;
    }
    int s = sizeof(a)/sizeof(a[0]);
    sort(a,a+s);

    countFreq(a,s);
    return 0;
}
void countFreq(int a[],int n)
{
    unordered_map<int, int> mp;

    for(int i = 0; i<n; i++)
        mp[a[i]]++;
    for(int i = 0; i<n; i++)
    {
        if(mp[a[i]] !=-1)
        {
            cout<<a[i]<<" aparece " << mp[a[i]] <<" vez(es)"<< endl;
            mp[a[i]] = -1;
        }
    }
}
