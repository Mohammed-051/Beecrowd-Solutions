#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;

    while (getline(cin, a))
    {
        if (a == "*")
            break;

        int l = a.length();
        bool task = true;
        char c = tolower(a[0]);

        for (int i = 1; i < l - 1; i++)
        {
            if (a[i] == ' ' && tolower(a[i + 1]) != c)
            {
                task = false;
                break;
            }
        }

        if (task)
        {
            cout << "Y" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }

    return 0;
}
