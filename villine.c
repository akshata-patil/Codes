// Question Link : https://www.codechef.com/problems/VILLINE

#include <stdio.h>
#include<stdlib.h>

int main(void) {
	// your code goes here
	int n,c,m,res,l=0,r=0,i,j;

	scanf("%d",&n);
	int a[n][3];
	
	scanf("%d%d",&m,&c);
	for(i=0;i<n;i++)
	{
	    for(j=0;j<3;j++)
	    {
	    
	    scanf("%d\t",&a[i][j]);
	    }
	    printf("\n");
	}
	for(i=0;i<n;i++)
	{
	    res=(m*a[i][0])+c-a[i][1];
	    if(res>0)
	    {
	        r=r+a[i][2];
	    }
	    else
	    l=l+a[i][2];
	}
	
	if(r>l)
	{
	    printf("%d",r);
	}
	else
	printf("%d",l);
	
	
	return 0;
}


