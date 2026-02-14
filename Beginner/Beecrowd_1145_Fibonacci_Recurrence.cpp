#include<bits/stdc++.h>
using namespace std;

int main()


{

    int x,y;

    cin >> x >> y;
    int mark = 1;


    for(int i=1; i<=y; i++ )
    {
        if(mark== x)
        {
            cout << i << endl;
            mark = 1;
        }
        else
        {
            cout << i << " ";
            mark ++;

        }

    }



    return 0;
}

