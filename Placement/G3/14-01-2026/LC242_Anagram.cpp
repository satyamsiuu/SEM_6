#include<iostream>
using namespace std;
int main()
{
    int hash[26] = {0};
    string str1, str2;
    cin >> str1 >> str2;
    if(str1.length() != str2.length())
    {
        cout << "Not Anagram" << endl;
        return 0;
    }       
    for(int i = 0; i < str1.length(); i++)
    {
        hash[str1[i] - 'a']++;
        hash[str2[i] - 'a']--;
    }
    for(int i = 0; i < 26; i++)
    {
        if(hash[i] != 0)
        {
            cout << "Not Anagram" << endl;
            return 0;
        }
    }
    cout << "Anagram" << endl;
    return 0;
}