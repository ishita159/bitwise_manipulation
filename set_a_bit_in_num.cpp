#include <iostream>
using namespace std;
// num is the number and pos is the position
// at which we want to set the bit.
void set(int &num, int pos)
{
    // First step is shift '1', second
    // step is bitwise OR
    num |= (1 << pos);
}
int main()
{
    int num = 4, pos = 1;
    set(num, pos);
    cout << (int)(num) << endl;
    return 0;
}