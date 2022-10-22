#include<iostream>
#include<string>
#include<vector>

using namespace std;
//#define int long long

int main()
{
    string current;
    while(getline(cin,current))
    {
        int tabspaces = 0;
        //uncomment this section to add tabspaces as \t commands instead of spaces in the strings
       /* while(tabspaces < current.size() && current[tabspaces] == ' ')
        {
            tabspaces++;
        }
        tabspaces /= 4;

        for (int i = 0; i < tabspaces; i++)
        {
            current = "\\t" + current;
        } */
        current = "\"" + current + "\",";
        cout << current << endl;
    }
    //cout << binExpMod(122,100000,1000000007);
}

