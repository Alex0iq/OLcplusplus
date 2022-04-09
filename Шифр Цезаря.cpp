#include<iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = 'A' + (s[i] - 'A' + 3) % 26;
        else if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = 'a' + (s[i] - 'a' + 3) % 26;
    }
    cout << s << endl;
}
