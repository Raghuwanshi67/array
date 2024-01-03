#include <stdio.h>
#include <conio.h>

int main()
{
    char op;
    int A[20], i, num, pos, size;
    printf("enter size of an array:\n");
    scanf("%d", &size);
    printf("enter the elements of the araay:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("enter the operation to be performed i.e. {i for insertion,s for searching,d for deleting\n");
    scanf("%s", &op);
    switch (op)
    {
    case 'i': // inserting an element in array
        printf("enter the number and position for insertion:\n");
        scanf("%d %d", &num, &pos);
        if (pos <= size)
        {
            for (i = size; i <= pos; i--)
            {
                A[i + 1] = A[i];
            }
            A[pos - 1] = num;
            size++;
        }
        for (i = 0; i < size; i++)
        {
            printf("%d", A[i]);
        }
        break;
      
    case 's': // search or traversing an element in array
        printf("enter the element to be searched:\n");
        scanf("%d", &num);
        for (i = 0; i < size; i++)
        {
            if (A[i] == num)
            {
                printf("%d is at index of: %d", num, i);
            }
        }
        break;
       
    case 'd':
        // deleting an element of the array
        printf("position of the element to be deleted :\n");
        scanf("%d", pos);
        if (pos <= size)
        {
            for (i = pos; i < size; i++)
            {
                A[i] = A[i - 1];
            }
            for (i = 0; i < size; i++)
            {
                printf("%d\n", A[i]);
            }
        }
        break;
    default:
        printf("invalid operation");
        return 1;
    }
    return 0;
}
