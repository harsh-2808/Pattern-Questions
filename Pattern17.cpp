#include <iostream>
using namespace std;

/*
n=6
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
*/

int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << "* ";
            col++;
        }
        cout << endl;
        row++;
    }
}