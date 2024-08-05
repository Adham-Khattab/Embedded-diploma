//!...Adding an item to the list mentioning its position
#include <stdio.h>
int main() 
{
    int i, data_number;
    float lst[50] = {}, added_item;
    int position;

    printf("Enter no. of elements: ");
    scanf("%d", &data_number);

    for (i = 0; i < data_number; i++) 
    {
        printf("Enter number to add to list: ");
        scanf("%f", &lst[i]);
    }
    printf("Enter an element to insert and its position: ");
    scanf("%f %d", &added_item, &position);
    //We cant make it==> for(i=position;i<=data_number-1;i++)
    //The shift should be to the right as the empty space is in the right not left
    for (i = data_number - 1; i >= position; i--)
    {
        lst[i + 1] = lst[i];
    }
    lst[position] = added_item;
    for (i = 0; i < data_number+1; i++) // data_number+1 as data length increased by one
    {
        printf("{%.2f},", lst[i]);
    }
}
