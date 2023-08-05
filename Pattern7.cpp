#include <iostream>
using namespace std;

/*
n=6
*
* *
* * *
* * * *
* * * * *
* * * * * *
*/

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
}