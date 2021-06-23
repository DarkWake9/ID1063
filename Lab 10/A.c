#include <stdio.h>
void swap(int num[], int i, int j)
{
    int temp = num[i];
    num[i] = num[j];
    num[j] = temp;
}
int main()
{
    int num[] = {1,2,3,4,5,6};
    for (int  i = 0; i < 6; i++)
    {
        swap(num, i, (num[i]+1)%6);
    }
    for (int  i = 0; i < 6; i++)
    {
        printf("%d", num[i]);
    }
    return 0;
    
}