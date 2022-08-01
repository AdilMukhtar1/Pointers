#include <iostream>
using namespace std;

/*
int main()
{
   int arr[5] = {0,1,2,3,4};
   int *ptr;
   ptr = arr;
   int i = 0;
   for(int i = 0; i < 5; i++)
   {
       printf("&arr[%d] = %p\n", i, ptr +i);
   }
   
   for(int i = 0; i < 5; i++)
   {
       printf("%d", *(ptr +i));
       cout<<endl;
   }

    return 0; 
}
*/
/*
int main()
{
   int *arr[5];
   int a,b,c,d,e;
   a = 10;
   b = 20;
   c = 30;
   d = 40;
   e = 50;

   arr[0] = &a;
   arr[1] = &b;
   arr[2] = &c;
   arr[3] = &d;
   arr[4] = &e;

   for(int i = 0; i < 5; i++)
   {
       printf("&arr[%d] = %p\n", i, arr[i]);
   }
   
   for(int i = 0; i < 5; i++)
   {
       printf("%d", *arr[i]);
       cout<<endl;
   }

    return 0; 
}
*/

int main()
{
   int arr[3][3] = {
                    {10, 11, 12},
                    {20, 21, 22},
                    {30, 31, 32}
                   };

cout<<**arr+1;
/*
   for(int i = 0; i < 5; i++)
   {
       printf("&arr[%d] = %p\n", i, arr[i]);
   }
   
   for(int i = 0; i < 5; i++)
   {
       printf("%d", *arr[i]);
       cout<<endl;
   }
   */

    return 0; 
}

