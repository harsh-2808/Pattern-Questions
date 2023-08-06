#include <iostream>
using namespace std;

/*
n=5
A B C D E
F G H I J
K L M N O
P Q R S T
U V W X Y
*/

int main()
{
    int n;
    cin >> n;
    int row = 1;
    char c = 'A';
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << c << " ";
            c++, col++;
        }
        cout << endl;
        row++;
    }
}