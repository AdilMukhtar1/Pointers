#include <iostream>
using namespace std;

/*
int main()
{
    int *ptr;

    {
        int i = 10;
        ptr = &i;
    }
    ptr = NULL;
    cout<<*ptr;
}*/

/*
void fun()
{
    int var = 300;
}

int* get()
{
    int i = 50;
    return &i;
}

int main()
{
    int *ptr = get();
    ptr = NULL;
    fun();
    cout<<*ptr; 
    return 0;
}
*/

int main()
{
    int *p = (int*)malloc(2*4);
    p[0] = 3;
    p[1] = 4;
    free(p);
    //p = NULL; // issue resolved
    int *q = (int*)malloc(2*4);
    q[0] = 5;
    q[1] = 6;

    cout<<p[0]<<" "<<p[1]; //storing tha values of q
}