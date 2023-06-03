#include<bits/stdc++.h>
using namespace std;
bool palindromecheck(string str, int i,int j)
{
    if(i>j)
    {
        false;
    }

    if(str[i]==str[j])
    {
        i++;
        j--;
        palindromecheck(str,i,j);
    }
}


int main()
{

    string str = "abbccbba";

    bool ans = palindromecheck(str,0,str.length()-1);
    if(ans)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }

    return 0;
}