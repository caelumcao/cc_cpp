#include <iostream>
#include <map>
#include <vector>
#include <assert.h>
using namespace std;

void Test_UseMapWithoutInit()
{
    map<int, vector<int>> a;
    a[1].push_back(10);
    a[1].push_back(11);
    assert(a[1].size() == 2);
}

int main()
{
    Test_UseMapWithoutInit();

    return 0;
}