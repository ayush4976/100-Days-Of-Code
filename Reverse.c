#include <stdio.h>
#include <stdlib.h>
int main() {
	//code
	int n,k,i,rev;
	scanf("%d",&n);
	int *a=(int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	for(i=0;i<n;i++){
	    k=a[i];
	    rev=0;
	    while(k!=0){
	        rev = rev*10 + k%10;
	        k=k/10;
	    }
	    printf("%d\n",rev);
	}
	free(a);
	return 0;
}