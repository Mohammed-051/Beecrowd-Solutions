
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    while(cin >> n)
    {
        while(n--!=0)
        {
            int a,b;
            cin >> a>> b;
            while(b!=0)
            {
                int temp = b;
                b = a%b;
                a = temp;
            }
            cout << a<<endl;

        }

    }
    return 0;
}
