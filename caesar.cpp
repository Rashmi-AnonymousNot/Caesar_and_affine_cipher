#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(int argc, char* argv[])
{
    char alphabets[26];
    string plain,cipher;
    int i = 0;
    int key;
    cout<<"Alphabets"<<endl;
    for(char c = 'a';c<='z';c++)
        {
            alphabets[i] = c;
            cout<<alphabets[i]<<" ";
            i++;

        }
    cout<<endl;
    /*for(i=0;i<26;i++)
        {
            cout<<i<<" ";

        }
    */
    cout<<"\nEnter the caesar cipher key:";
    cin>>key;
    /*for(i=0;i<26;i++)
        {
            cout<<alphabets[(i+key)%26]<<" ";
        }*/
    cin.ignore();
    cout<<"\nWhat is the text to be encrypted? - ";
    getline(cin,plain);
    cout<<"After encryption, it is ";
    for(i=0;i<plain.length();i++)
        {
            cipher[i] = (char)(((plain[i]+key - 97)%26)+97);
            cout<<cipher[i]<<"";
        }
    cout<<"\nDecrypting "<<cipher<<"gives back ";
    for(i=0;i<plain.length();i++)
        {
          
            cout<<(char)(((cipher[i]-key - 97)%26+26)%26+97)<<"";
        }
    return 0;
}