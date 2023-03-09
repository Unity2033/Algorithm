#include <iostream>

using namespace std;

int main()
{
    // 문자열 뒤집기
    string content;

    cin >> content;

    for (int i = 0; i < content.length() / 2; i++)
    {
        swap(content[i], content[content.length() - 1 - i]);
    }                

    cout << content << endl;

    return 0;
}