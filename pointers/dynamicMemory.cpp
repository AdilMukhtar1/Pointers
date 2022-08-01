#include <iostream>
#include <stdlib.h>
using namespace std;

/*
int main()
{
    int *ptr;
    ptr = (int*)malloc(5 * sizeof(int)); // 20 bytes allocated

    if(ptr != NULL)
    {
        cout<<"Memory allocation successfull!\n";
    }
    else
    {
        cout<<"not Successfully allocated!\n";
    }

    *(ptr + 0) = 1;
    *(ptr + 1) = 2;
    *(ptr + 2) = 3;
    *(ptr + 3) = 4;
    *(ptr + 4) = 5;


    cout<<ptr[3];
}
*/

int main()
{
    int *ptr;
    ptr = (int*)calloc(5, sizeof(int)); // 20 bytes allocated

    if(ptr != NULL)
    {
        cout<<"Memory allocation successfull!\n";
    }
    else
    {
        cout<<"not Successfully allocated!\n";
    }

    *(ptr + 0) = 1;
    *(ptr + 1) = 2;
    *(ptr + 2) = 3;
    *(ptr + 3) = 4;
    *(ptr + 4) = 5;


    cout<<ptr[3]<<endl;

    //reallocating using realloc

    realloc(ptr, 7 * sizeof(int));
    
    *(ptr + 5) = 6;
    *(ptr + 7) = 7;
    cout<<ptr[7];

    free(ptr);
}
