#include <stdio.h>
#include <conio.h>

int n = 5;
int qu[5];
int f = -1, r = -1;

void insert(int x)
{
    if ((f == r + 1) || (f == 0 && r == n - 1))
        printf("Stack Overflow\n");
    else if (f == -1 && r == -1)
    {
        f = 0;
        qu[++r] = x;
    }
    else if (r == n - 1)
    {
        r = 0;
        qu[r] = x;
    }
    else
        qu[++r] = x;
}

void del()
{
    if (f == -1 && r == -1)
        printf("Stack Underflow");
    else if (f == r)
    {
        f = -1;
        r = -1;
    }
    else if (f == n - 1)
        f = 0;
    else
        f++;
}

void display()
{
    if (f <= r)
        for (int i = f; i <= r; i++)
            printf("%d ", qu[i]);
    else
    {
        for (int i = f; i < n; i++)
            printf("%d ", qu[i]);
        for (int i = 0; i <= r; i++)
            printf("%d ", qu[i]);
    }
    printf("\n");
}

int main()
{
    int val;
    while (1)
    {
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        scanf("%d", &val);
        switch (val)
        {
        case 1:
            scanf("%d", &val);
            insert(val);
            break;

        case 2:
            del();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);
        default:
            break;
        }
    }
}