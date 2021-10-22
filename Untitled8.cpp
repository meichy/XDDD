#include <stdio.h>

int binsearch(int x,int v[],int n)
{
	int low,high,mid;

	low = 0;
	high = n-1;
	while (low<=high){
		mid=(low+high)/2;
		if (x<v[mid])
			high=mid-1;
		else if(x>v[mid])
			low=mid+1;
		else
			return mid;
	}
	return -1;
}

int main()
{
	int x,c;
	scanf("%d",&x);
	int i=10;
	int v[]={0,1,2,3,4,5,6,7,8,9};
	c=binsearch(x,v,i);
	if(c==-1)
		printf("error");
	else
		printf("ÕÒµ½Êý×Ö%d",c);
}