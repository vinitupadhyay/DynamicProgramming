#include <iostream>
#include <string>
#include <list>
#include <stdlib.h>

using namespace std;

string expandString(string & str)
{
    string val;
    int len = str.length();
    int count = 0;
    
    for(int i=0; i<len; i++)
    {
        if(str[i] > 48 && str[i] <= 57)
        {
            string tmp(1, str[i]);
            const char *ch = tmp.c_str();
            count = atoi(ch);
            if(count!=0)
            {
                i++;
                while(count--)
                {
                    
                    val.push_back(str[i]);
                }
            } 
        }
        else
        {
            val.push_back(str[i]);
        }
    }
    
    return val;
}

int main()
{
    string inputStr = "aaaa2b3cdddd";
    cout << expandString(inputStr) << endl;
    return 0;
}
