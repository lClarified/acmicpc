#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n,i,j,a,b,c,d,e;
	scanf( "%d",&n );
	n=n*2-1;
	for(i = 0 ;i<n/2+1;i++)
	{
		for( j = 0 ; j < n / 2 - i ; j++ )
			printf( " " );
		for( j = 0 ; j < i * 2 + 1 ; j++ )
			printf( "*" );
		printf( "\n" );
	}

    e=n-2;
    for(b=1;b<(n+1+2)/2;b++){
        for(c=0;c<b;c++){
            printf(" ");
        }//끝
        for(d=e;d>0;d--){
            printf("*");
        }
        printf("\n");
        e-=2;
    }

    return 0;
}
