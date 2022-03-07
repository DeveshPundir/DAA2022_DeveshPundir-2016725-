//FIND SEARCH ELEMENT IN AN ARRAY
#include <stdio.h>
#define MAX 50
int read(int *a, int x);
int print(int *a, int x, int y);
int main()
{
    int a[MAX], x, y;

    printf("enter the values\n");
    scanf("%d", &x);

    read(a, x);
    printf("enter the element to find\n");
    scanf("%d", &y);
    print(a, x, y);
    return 0;
}
int read(int *a, int x)
{
    printf("enter the elements\n");
    for (int i = 0; i < x; i++)
        scanf("%d", &a[i]);
    return 0;
}
int print(int *a, int x, int y)
{
    for (int i = 0; i < x; i++)
    {
        if (a[i] == y)
        {
            printf("the element is at position=%d and at address =%d", i + 1, &a[i]);
            break;
        }
    }
}
