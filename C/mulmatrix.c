int main()
{
    int arr1[3][3]={{1,2,3},{4,5,6}.{7,8,9}};
    int arr2[3][3]={{1,2,3},{4,5,6}.{7,8,9}};
    int mul[3][3];




    for(int i=0; i<3;i++){
        for(int j=0; j<3; j++)
        {
            for (int k=0; k<3;k++)
            {
                mul[i][j]+=arr1[i][j]*arr2[k][j];
            }
        }

    }

    printf("multiplication is:\n");
    for(int i=0; i<3; i++)
    {
         for(int j=0; j<3; j++){
            printf("%d",mul[i][j]);
         }

    }
    
}