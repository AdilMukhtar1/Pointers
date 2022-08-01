#include <iostream>
using namespace std;

/*
int main()
{
    char str[6] = "HELLO";
    for(int i = 0; str[i]; i++)
    {
        cout<<*(str + i)<<endl;
    }
    for(int i = 0; str[i]; i++)
    {
        cout<<&str + i<<endl;
    }
}
*/
/*
int main()
{
    char str[6] = "HELLO";
    char *ptr;
    ptr = str;
    for(int i = 0; ptr[i] != '\0'; i++)
    {
        cout<<&ptr + i<<endl;
    }
    for(int i = 0; str[i]; i++)
    {
        cout<<*(ptr + i)<<endl;
    }
}
*/
int main()
{
   char str[11] = "2JZ Fever!";
   for(int i = 0; str[i]; i--)
   {
       printf("%s\n", str + i);
   }

    return 0; 
}