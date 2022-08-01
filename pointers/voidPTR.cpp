#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    void *ptr = &i;
    //printf("%d",*(int*)ptr);
    //cout<<*(int*)ptr;
    int j = 20;
    int *ptr2 = (int*)malloc(sizeof(int)); //application of void pointer
    *ptr2 = 30;
    cout<<*ptr2;
}