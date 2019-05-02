
#include <iostream>
using namespace std;

bool at_position(int num, int pos)
{
    bool bit = num & (1 << pos);
    return bit;
}

int main()
{
    int num = 5;
    int pos = 0;
    bool bit = at_position(num, pos);
    cout << bit << endl;
    return 0;
}