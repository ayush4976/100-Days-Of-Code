#include <stdio.h>
#include <string.h>

int main(void) {
	int n,i,j,k,len,count=0;
	char temp;
	char a[100][100],b[100][100];
	scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",&a[i]);
        strcpy(b[i],a[i]);
    }
    for(i=0;i<n;i++){
        len = strlen(a[i]);
        for(k=0;k<(len/2)-1;k++){
            for (j = k+1; j < len/2; j++) {
                if (a[i][k]>a[i][j]) {
                    temp = a[i][k];
                    a[i][k]=a[i][j];
                    a[i][j]=temp;
                }
            }
        }
        for(k=(len+1)/2;k<len-1;k++){
            for (j = k+1; j < len; j++) {
                if (a[i][k]>a[i][j]) {
                    temp = a[i][k];
                    a[i][k]=a[i][j];
                    a[i][j]=temp;
                }
            }
        }
        count=0;
        for(k=0;k<len/2;k++){
            if(a[i][k]==a[i][k+((len+1)/2)]){
                count++;
                
            }
            else{
                count=0;
                break;
            }
        }
        if(count==0)
            printf("%s == NO\n",b[i]);
        else
            printf("%s == YES\n",b[i]);  
    }
	return 0;
}