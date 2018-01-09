#include <stdio.h>
#include <stdlib.h>
int undir_graph();
int read_graph ( int adj_mat[50][50], int n );
int undir_graph()
{
    int adj_mat[50][50];
    int deg, i, j, n;
    printf("\n How Many Vertices ? : ");
    scanf("%d", &n);
    read_graph(adj_mat, n);
    printf("\n\nThe adjacency matrix representation of this graph is\n\n");
	 for ( i =1;i<=n ;i++ )
    {
        for ( j = 1 ; j <= n ; j++ )
        {
        	
        	printf("%d\t",adj_mat[i][j]);
        }		
        printf("\n");
	}
    
    return(0);
} 
int read_graph ( int adj_mat[50][50], int n )
{
    int i, j;
    char reply;
    for ( i =1;i<=n ;i++ )
    {
        for ( j = 1 ; j <= n ; j++ )
        {
            if ( i == j )
            {
                adj_mat[i][j] = 0;
		continue;
            } 
            printf("\n Vertices %d & %d are Adjacent ? (Y/N) :",i-1,j-1);
            fflush(stdin);
			scanf("%c", &reply);
            fflush(stdin);
            if ( reply == 'y' || reply == 'Y' )
                adj_mat[i][j] = 1;
            else
                adj_mat[i][j] = 0;
	}
    } 
    return(0);
}

int main()
{
    printf("\n A Program to represent a Graph by using an ");
	printf("Adjacency Matrix method \n ");
	undir_graph();
return(0);
}

