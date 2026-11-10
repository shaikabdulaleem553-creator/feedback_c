#include<stdio.h>
int main()
{
char ch;
FILE*fp;
fp=fopen("feedback.txt","w");
if(fp==NULL)
{
printf("file opening failed \n");
return 0;
}
fprintf(fp,"feedback about the c program \n");
fprintf(fp,"1. c program is easy to syudy \n");
fprintf(fp,"2. c program contain data struture and many varaibles\n");
fprintf(fp,"3.c program contain loops and many data type\n");
fprintf(fp,"4.c program contain state ments\n");
fprintf(fp,"5.c program used to code the machines\n");
fclose(fp);
fp=fopen ("feedback.txt","a");
if(fp==NULL)
{
printf("file opening is failed\n");
return 0;
}
fprintf(fp,"feedback about the c sir\n ");
fprintf(fp,"1.my c program sir is good person\n ");
fprintf(fp,"2.my c program like a albet einstein\n ");
fprintf(fp,"3.my c prograam sir is motivated person\n");
fprintf(fp,"4.my c program sir is inteligenge person\n");
fprintf(fp,"5.my c program sir explain correctly\n");
fclose(fp);
fp=fopen("feedback.txt","r");
if (fp==NULL)
{
printf("file opening is failed\n");
return 0;
}
while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}
fclose(fp);
return 0;
}


















