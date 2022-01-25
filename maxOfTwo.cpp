#include <iostream>
using namespace std;

int max(int x, int y)
{
    return (x > y) ? x : y;
}

int main()
{
    int i, j;
    cout << "Enter the numbers:: " << endl;
    cin >> i >> j;
    cout << "The max of the numbers is:" << max(i, j);

    return 0;
}