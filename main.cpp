#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include<iomanip>
#include<vector>

using namespace std;

int main()
{
    char arr1[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    cout<<"Enter your key : ";
    int key;
    cin>>key;
    cout<<"Enter the word : ";
    string word;
    cin>>word;

    cout<<"Encrypted Cipher Text : ";
    for(int i=0;i<word.length();i++)
    {
        for(int k=0;k<26;k++)
        {
            if(word[i]==arr1[k])
            {
            int l=(k+key)%26;
            cout<<arr1[l];
            }

        }
    }
      cout<<"\n";

   cout<<"Enter Encrypted Cipher Text :";
    string cword;
    cin>>cword;

    cout<<"Decrypted Plain Text : ";
    for(int i=0;i<cword.length();i++)
    {
        for(int k=0;k<26;k++)
        {
            if(cword[i]==arr1[k])
            {
                if(k>=key)
                {
                    int l=(k-key);
                    cout<<arr1[l];
                }
                else
                    {
                        int l=(k-key)+26;
                        cout<<arr1[l];

                    }


            }

        }
    }

    return 0;
}
