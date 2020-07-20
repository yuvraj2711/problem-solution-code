#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    string str[10], temp;//here you can extend string size.

    cout << "Enter 10 words: " << endl; // here size is limited so we are printing only 10 words(limit of words).
    for(int i = 0; i < 10; ++i)
    {
      getline(cin, str[i]);
    }

    for(int i = 0; i < 9; ++i)
       for( int j = i+1; j < 10; ++j)
       {
          if(str[i] > str[j])
          {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
          }
    }

    cout << "In lexicographical order: " << endl;

    for(int i = 0; i < 10; ++i)
    {
       cout << str[i] << endl;
    }
    return 0;
}
