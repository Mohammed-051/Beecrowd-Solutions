#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[101];
    int i, mark=0,highest = -10000000;

    for (i = 1; i<=100; i++)
    {
        cin >> a[i];
        if(highest< a[i])
        {
            highest = a[i];
            mark = i;
        }

    }
    cout << highest << endl << mark << endl;


    return 0;
}
