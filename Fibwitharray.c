#include <stdio.h>

int main()
{
    int n,a[10]={0},j=0,k;
    printf("Enter Total Elements Of Series");
    scanf("%d",&n);
    printf("Enter two initial Values");
    for(int l=0;l<2;l++)
        {
        scanf("%d",&a[l]);
        }
    printf("\n%d\n",a[j]);
    j++;
    printf("%d\n",a[j]);
    while(j<n)
        {
        printf("%d\n",a[j+1]=a[j]+a[j-1]);
        j++;
        }
    

    return 0;
}
