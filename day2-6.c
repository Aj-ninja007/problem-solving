 #include<stdio.h>
 void main()
 {
    int a[10],i,n;
    printf("enter array size");
    scanf("%d",&n);
    printf("enter array elements: ");
    for(i=0;i<=n;i++)
    scanf("%d",&a[i]);
    {
       printf("original array: %d",a[i]);
    }
    printf("\n");
 }