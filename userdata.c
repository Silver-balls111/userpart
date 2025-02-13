#include<stdio.h>
struct user
{

    int acc_no;
    
    char username[100],password[32];
    
    float balance;
}user1;

int main()
{
    FILE *fptr;
    char file_name[100];
    printf("Enter the file name");
    gets(file_name);
    fptr = fopen(file_name,"wb");
    if(fptr == NULL)
    {
        printf("Error!");
        return 1;
    }
    printf("Enter the account number");
    scanf("%d",&user1.acc_no);
    printf("Enter the username");
    scanf("%s",user1.username);
    printf("Enter the password");
    scanf("%s",user1.password);
    printf("Enter the balance");
    scanf("%f",&user1.balance);
    fwrite(&user1,sizeof(user1),1,fptr);
    fclose(fptr);
    return 0;
}