#include <iostream>
#include <vector>

using namespace std;

void op(vector<vector<int> > a)
{
    cout << "\033[2J\033[1;1H";
    for (int i = 0; i < (int)a.size(); i++)
    {
        for (int j = 0; j < (int)a[i].size(); j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

