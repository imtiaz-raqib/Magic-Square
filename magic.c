#include <stdio.h>


int main()
{
  int n; 
     
  printf("\nThis programs creates a magic square of a specified size.\n");
  printf("The size must be an odd number between 1 and 99.\n\n");
  printf("Enter the size of magic square: ");
  scanf("%d", &n);
  
  int magicsq[99][99];

  int row = 0;   
  int col = (n - 1) / 2;
  magicsq[row][col] = 1;

  int i;     
  for(i = 2; i <= n * n; i++)
    {
      row = (row + n - 1) % n;

      /*  printf("i = %d\n", i);
      printf("row %d\n", row);

       col = (col % n); */
      col = (col + 1) % n;

      /* printf("col %d\n\n", col); */
      
      if(magicsq[row][col] != 0)
	{ 
	  row = (n + row + 2) % n;
	  col = (n + col - 1) % n;
	  /* printf("n = %d ; row = %d ; col = %d\n", n, row, col); */
	}
      
      magicsq[row][col] = i;
    }
     
  printf("\n");
  int j;    
  for (i = 0; i < n; i++)
    {                                                     
      for (j = 0; j < n; j++)
	      {                                                 
	        printf("%5d", magicsq[i][j]);                                        
	      }                                                                       
      printf("\n");                                                             
    }
  printf("\n");                                                                       
  return 0;                                                                     
}