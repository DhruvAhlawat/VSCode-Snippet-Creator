#include<iostream>
#include<string>
#include<vector>

using namespace std;
//#define int long long
int BinarySearchUpperBound(const vector<int> &a, int key,int l,int r) {
    int n = a.size();
    if(l == r)
    {
        if(a[l] <= key)
            return n;
        else
            return l;
    }
    if(l+1 == r)
    {
        if(a[l] <= key)
            return l;
        else if(a[r] <= key)
            return r;
        else
            return n;
    }
    int cur = (l+r)/2;
    if(a[cur] > key)
        return BinarySearchUpperBound(a,key,l,cur);
    else
        return BinarySearchUpperBound(a,key,cur,r);
}

int binexp(int n,int r)
{
    if(r == 0)
        return 1;
    if(r == 1)
        return n;
    
    if(r%2 == 0)
    {
        return binexp(n,(r/2))*binexp(n,(r/2));
    }
    else
    {
        return binexp(n,r-1)*n;
    }
}
long long binExpMod(long long n,long long r,long long modulus)
{
    n = (n%modulus);
    if(n == 0)
        return 0;
    if(n==1)
        return 1;
    if(r == 0)
        return 1;
    if(r == 1)
        return n;
    
    if(r%2 == 0)
    {
        return (((binExpMod(n,(r/2),modulus))*(binExpMod(n,(r/2),modulus)))%modulus);
    }
    else
    {
        return ((binExpMod(n,r-1,modulus)*n)%modulus);
    }
}



int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string current;
        //cin >> current;
        getline(cin,current);
        int tabspaces = 0;
        // while(tabspaces < current.size() && current[tabspaces] == ' ')
        // {
        //     tabspaces++;
        // }
        // tabspaces /= 4;

        
        // for (int i = 0; i < tabspaces; i++)
        // {
        //     current = "\\t" + current;
        // }
        current = "\"" + current + "\",";
        cout << current << endl;
        
    }
    //cout << binExpMod(122,100000,1000000007);
}

