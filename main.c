#include<stdio.h>
int main()
{

    int *i;
    int arr[][3][3] = {{{1,2,3},{4,5,6},{7,8,9}},{{10,11,12},{13,14,15},{16,17,18}},{{19,20,21},{22,23,24},{25,26,27}}};
    int length = sizeof(arr)/sizeof(arr[0]);
    for(i = &arr[0][0][0];i<=&arr[length-1][length-1][length-1];i++)
    {
        printf("%d ",*i);
    }
}
