       #include <stdio.h>
int main()
{
    int temp;

     printf("Enter temp sensor reading:");
     scanf("%d",&temperature);

      if (temperature>=0 && temperature<=70)
      {
        printf("Status:normal\n");
      }
      else if ( temperature>70 && temperature<=110){
        printf("Status: Warning\n");
      }
      else if (temperature >110){
        printf("Invalid sensor value\n");
      }
}
