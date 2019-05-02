
#include <iostream>
using namespace std;
// First step is to get a number that  has all 1's except the given position.
void unset(int &num, int pos)
{
    //Second step is to bitwise and this  number with given number
    num &= (~(1 << pos));
}
int main()
{
    int num = 7;
    int pos = 1;
    unset(num, pos);
    cout << num << endl;
    return 0;
}