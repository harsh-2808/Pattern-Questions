#include <iostream>
using namespace std;

/*
n=5
1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9
*/

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << row + j - 1 << " ";
            j++;
        }
        cout << endl;
        row++;
    }
}