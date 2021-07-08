#include<bits/stdc++.h>
using namespace std;
int main()
{
      int a,i,x=0;
      string s;
      cin>>a;
      for(i=0;i<a;i++)
      {
            cin>>s;
            if(s[1]=='+')
            {
                  x++;
            }
            else
            {
                  x--;
            }
      }
      cout<<x;
}
