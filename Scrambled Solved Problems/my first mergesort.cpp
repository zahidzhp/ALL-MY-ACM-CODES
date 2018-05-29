#include <iostream>
#include <cstdio>


void merging(int mer[],int size,int low, int middle, int high)
{
    int temp[size];
    register int i;
    for(i=low; i<=high; i++)
        temp[i]=mer[i];
    int l=low;
    int j=middle+1;
    int k=low;
    while(l<=middle&&j<=high)
    {
        if(temp[l]<temp[j])
        {
            mer[k]=temp[l];
            l++;
        }
        else
        {
            mer[k]=mer[j];
            j++;
        }
        k++;
    }
    while(l<=middle)
    {
        mer[k]=temp[l];
        k++;
        l++;
    }
}


void mergesort(int mer[],int size, int low, int high)
{
    if(low<high)
    {
        int middle=(low+high)/2;
        mergesort(mer,size,low,middle);
        mergesort(mer,size,middle+1,high);
        merging(mer,size,low,middle,high);
    }
}

int main()
{
    int a;
    scanf("%d",&a);
    if(a==0) return 0;
    int arr[a];
    const int size=a;
    register int i;
    for(i=0; i<a; i++)
        scanf("%d",&arr[i]);
    mergesort(arr,size,0,a-1);
    printf("SORTED ARRAY:\n");
    for(i=0; i<a; i++)
        printf("%d ",arr[i]);
        printf("\n");
    main();
    return 0;
}
