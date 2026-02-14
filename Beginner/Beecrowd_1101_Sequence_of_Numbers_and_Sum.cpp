
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    int sum , temp;




    while (1)
    {
        cin >> a >> b;
        if(a<=0)break;
        if(b<=0)break;

        if(a>b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        sum = 0;
        for(int i = a; i<=b; i++)
        {
            cout<< i << " ";
            sum += i;

        }

        cout << "Sum="<< sum <<endl;
    }
    return 0;
}
