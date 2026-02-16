#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    int m;

    cin >> n;
    m = n;
    printf("N[0] = %d\n", n);

    for(int i = 1; i<10; i++)
    {
        m = m*2;
        printf("N[%d] = %d\n", i, m);

    }


    return 0;
}
