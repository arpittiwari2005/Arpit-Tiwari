#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct user{
	char phone[50];
	char ac[50];
	char password[50];
	float balance;
};
void main(){
struct user usr;
int opt;
FILE *fp;
char filename[50];
printf("\n\nwhat do you want to do?");
printf("\n\nRegister to your account");
printf("\n\nLogin to an account");
printf("\n\nYpur choice\t");
scanf("%d",&opt);
if(opt==1){
system("cls");
printf("Enter your account no");
scanf("%s",usr.ac);
printf("Enter your phoneno");
scanf("%s",usr.phone);
printf("Enter your password");
scanf("%s",usr.password);
usr.balance=0;
strcpy(filename,usr.phone);
fp=fopen(strcat(filename,".dat"),"w");
fwrite(&usr,sizeof(struct user),3,fp);
if(fwrite!=0)
{
	printf("Accountn successfuley registered");
}
else{
	printf("something went wrong pls try again");
}
}
}
