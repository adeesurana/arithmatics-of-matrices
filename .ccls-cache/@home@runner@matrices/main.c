#include<stdio.h>
int main()
{
	int M,N,X,Y;
	printf("\n\n\t\tPlease enter number of rows and columns in Matrix - A : ");
	scanf(" %d %d",&M,&N);
	printf("\n\n\t\tPlease enter number of rows and columns in Matrix - B : ");
	scanf(" %d %d",&X,&Y);
	if(M==X && N==Y)
	{
		int A[M][N],B[X][Y],C[M][N],D[M][N],i,j;
		printf("\n\n\t\tPlease enter the elements of Matrix - A in 2D format : ");
		for(i=0;i<M;i++)
		{
			for(j=0;j<N;j++)
			{
				scanf(" %d",&A[i][j]);
			}
		}
                printf("\n\n\t\tPlease enter the elements of Matrix - B in 2D format : ");
                for(i=0;i<M;i++)
                {
                        for(j=0;j<N;j++)
                        {
                                scanf(" %d",&B[i][j]);
                        }
                }

		for(i=0;i<M;i++)
		{
			for(j=0;j<N;j++)
			{
				C[i][j]=A[i][j]+B[i][j];
				D[i][j]=A[i][j]-B[i][j];
			}
		}
                printf("\n\n\t\tThe Addition of 2 Matrices in 2D format : ");
                for(i=0;i<M;i++)
                {
			printf("\n\n\t\t\t");
                        for(j=0;j<N;j++)
                        {
                                printf(" %-6d",C[i][j]);
                        }
                }
                printf("\n\n\t\tThe Subtraction of 2 Matrices in 2D format : ");
                for(i=0;i<M;i++)
                {
                        printf("\n\n\t\t\t");
                        for(j=0;j<N;j++)
                        {
                                printf(" %-6d",D[i][j]);
                        }
                }printf("\n\n\n");
	}else{
		printf("\n\n\t\tTo add two matrices they must have same rows and columns\n\n");
	}return 0;
}