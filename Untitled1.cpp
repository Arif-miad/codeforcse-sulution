#include<bits/stdc++.h>
using namespace std;
#include<string>

int main ()
{
      string str1,str2;

      while(cin>>str1>>str2)
      cout << str1 << endl << str2 << endl;
      cout << endl;
      cout << "str1.swap(str2)" << endl;
      cout << endl;
      str1.swap(str2);
      cout << "str1 is : " << str1 << endl;
      cout << "str2 is : " << str2 << endl;

return 0;
}
