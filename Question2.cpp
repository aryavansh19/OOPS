#include <bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    int n = input.length();
    char ch;
    cout << "Enter a character for removing from the string: ";
    cin >> ch;
    input.erase(remove(input.begin(), input.end(), ch), input.end());
    cout << input;
}
