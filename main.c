#include <stdio.h>
int main(void)
{
  int i,j,k;
  int A[5][6],B[6][3];
  int Sum[5][3] = {{0,0,0},{0,0,0},(0,0,0),{0,0,0},{0,0,0}};
  printf("\n\tProgram for Even Number !!!\n\n");

  //A[5][6]
  for(i=0;i<5;i++){
    printf("Data A[%d][0-5]\n",i);
    for(j=0;j<6;j++){
      printf("\tA[%d][%d] : ",i,j);
      scanf("%d",&A[i][j]);
    }
    printf("\n");
  }

  //B[6][3]
  for(i=0;i<6;i++){
    printf("Data B[%d][0-2]\n",i);
    for(j=0;j<3;j++){
      printf("\tB[%d][%d] : ",i,j);
      scanf("%d",&B[i][j]);
    }
    printf("\n");
}
  //
    printf("Number A[5][6]\n");
    for(i=0;i<5;i++){
      for(j=0;i<6;i++){
      printf("%-3d",A[i][j]);
    }
    printf("\n");
}
  //
    printf("Number B[6][3]\n");
    for(i=0;i<6;i++){
      for(j=0;i<3;i++){
      printf("%-3d",B[i][j]);
    }
    printf("\n");
}
  //Program Calculate Matrix
  for(i=0;i<5;i++){
    for(j=0;j<3;j++){
      for(k=0;k<6;k++){
        Sum[i][j] += (A[i][k] * B[k][j]);
      }
    }
  }
}
