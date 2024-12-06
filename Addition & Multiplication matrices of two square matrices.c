//C program that can find Addition & Multiplication matrices of two square matrices
#include <stdio.h>
int main() 
{
    int a,b,c,d,i,j,k;
//Input first matrix size
    printf("For 1st matrix.\nEnter number of rows and columns(n*n)\n");
    scanf("%d%d",&a,&b);
//Input second matrix size
    printf("\nFor 2nd matrix.\nEnter number of rows and columns(n*n)\n");
    scanf("%d%d",&c,&d);
//Initialize all arrays
    int mat[a][b],mad[c][d],sum[a][b],mul[a][b];
//Checking whether matrices are square or not
    if(a!=c || b!=d)
    {
        printf("\nInvalid inputs!!\nBoth matrix should must be square matrices.\nAnd having same rows and columns sizes.");
        return 1;
    }
//Input elements of the first matrix    
        printf("\nEnter elements of first matrix\n");
        for(i=0;i<a;i++)
        {for(j=0;j<b;j++)
            {scanf("%d",&mat[i][j]);}
        }
//Input elements of the second matrix
        printf("\nEnter elements of second matrix\n");
        for(i=0;i<a;i++)
        {for(j=0;j<b;j++)
            {scanf("%d",&mad[i][j]);}
        }
//Calculating matrix after addition
        printf("\nAddition matrix of both matrices is\n");
        for(i=0;i<a;i++)
        {for(j=0;j<b;j++)
            {
                sum[i][j]=mat[i][j]+mad[i][j];
                printf("%d\t",sum[i][j]);
            }
            printf("\n");
        }
//Initialing multiplication array elements with 0
        printf("\nMultiplication matrix of both matrices is:\n");
        for(i=0;i<a;i++)
        {for(j=0;j<b;j++)
        {mul[i][j]=0;}}
//Calculating matrix after multiplication        
        for(i=0;i<a;i++)
        {for(j=0;j<b;j++)
        {for(k=0;k<a;k++)
        {
            mul[i][j] = mul[i][j] + (mat[i][k]*mad[k][j]);
        }
        printf("%d\t",mul[i][j]);
        }
        printf("\n");
        }
    return 0;
}
