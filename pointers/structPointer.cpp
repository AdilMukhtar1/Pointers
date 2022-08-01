#include<iostream>
using namespace std;

/*
struct emp{
    char name[4];
    int age;
    float weight;
};
int main()
{
    emp e = {"zay",20, 76.5};
    emp *ptr = &e;
    cout<<(*ptr).name;
    cout<<(*ptr).age;
    cout<<ptr->weight;
}
*/

struct emp{
    char name[5];
    int age;
    float weight;
};

struct emp* get();

int main()
{
    emp *e = get();

    printf("name: %s\n", e->name);
    printf("age: %d\n", e->age);
    printf("weight: %f\n", e->weight);

    free(e);
    return 0;
}

struct emp* get()
{
    emp *ptr = (emp*)malloc(sizeof(struct emp));

    printf("Enter employee's details\n");
    scanf("%s%d%f",ptr->name, &ptr->age, &ptr->weight);

    return ptr;
}