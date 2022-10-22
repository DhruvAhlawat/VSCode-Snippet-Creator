#include<iostream>
#include<string>
#include<vector>

using namespace std;
//#define int long long

int main()
{
    cout << "\"Put name here\":" << endl << "{" << endl;
    cout << "   \"prefix\": \"enter_Trigger_statement_here\"," << endl;
    cout << "   \"body\": [" << endl;

    string current;
    while(getline(cin,current))
    {
        int tabspaces = 0;
        
        //uncomment this section to add tabspaces as \t commands instead of spaces in the strings
        #pragma region tabSpaces-as-command
        /*
        while(tabspaces < current.size() && current[tabspaces] == ' ')
        {
            tabspaces++;

        }
        string newCurrent = "";
        for(int i = tabspaces; i< current.size();i++)
        {
            newCurrent.push_back(current[i]);
        }
        current = newCurrent;
        tabspaces /= 4; //considering tabspace to be 4 spaces. edit if using some other factor.
       
        
        for (int i = 0; i < tabspaces; i++)
        {
            current = "\\t" + current;
        } 
        */
        #pragma endregion
        
        current = "\"" + current + "\",";
        cout << current << endl;
    }
    //cout << binExpMod(122,100000,1000000007);
    cout << "]" << endl << "}," << endl;
}

