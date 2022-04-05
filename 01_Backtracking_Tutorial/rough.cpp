#include<stdio.h>
#include<string.h>
#define SIZE 20
struct bookdetail
{
 char name[20];
 int isbn;
 float price;
};
void output(struct bookdetail v[],int n);
int main()
{
 struct bookdetail b[SIZE];
 int num,i;
 printf("Enter the Numbers of Books:");
 scanf("%d",&num);
 printf("\n");
 for(i=0;i<num;i++)
 {
 printf("\t=:Book %d Detail:=\n",i+1);
 printf("\nEnter the Book Name:\n");
 scanf("%s",b[i].name);
 printf("Enter the ISBN number of book:\n");
 scanf("%d",&b[i].isbn);
 printf("Enter the Price of Book:\n");
 scanf("%f",&b[i].price);
 }
 output(b,num);
}
void output(struct bookdetail v[],int n)
{
 int i,t=1;
 for(i=0;i<n;i++,t++)
 {
 printf("\n");
 printf("Book No.%d\n",t);
 printf("\t\tBook %d Name is=%s \n",t,v[i].name);
 printf("\t\tBook %d ISBN number is=%d \n",t,v[i].isbn);
 printf("\t\tBook %d Price is=%f \n",t,v[i].price);
 printf("\n");
 }
}



