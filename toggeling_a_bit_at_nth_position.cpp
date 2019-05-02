#include <iostream>
using namespace std;
// First step is to shift 1,Second step is to XOR with given number
void toggle(int &num, int pos)
{
    num ^= (1 << pos);
}
int main()
{
    int num = 4;
    int pos = 1;
    toggle(num, pos);
    cout << num << endl;
    return 0;
}