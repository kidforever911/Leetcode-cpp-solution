#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int a;
    vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    for (const string &word : msg)
    {
        cout << word << "hello";
    }
    cout << endl;
}