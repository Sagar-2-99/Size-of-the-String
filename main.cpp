#include <iostream>

using namespace std;

int length(char str[])
{
    if(str[0]=='\0')
    {
        return 0;
    }
    else
    {
        return 1+length(str+1);
    }
}

int main()
{
    while(1)
    {
        cout<<"Enter 1 to continue else press any other key to quit"<<endl;
        int b=0;
        cin>>b;
        if(b==1)
        {
            cout<<"Enter the size of string you want to use so that i can create dynamic array but you can enter the elements of equal or less size\n";
            int a=0;
            cin>>a;
            char str[a];
            cout<<"Enter the string"<<endl;
            cin>>str;
            int l=length(str);
            cout<<"Length of the string is :"<<l<<endl;
        }
        else
        {
            break;
        }


    }

}
