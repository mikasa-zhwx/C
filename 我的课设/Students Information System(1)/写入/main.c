#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
#define N 50

struct match
{
	char name[20];
	char miyao[20];

}mat[N];

int main()
{   char yh[20];
    char pw[20];
    int i;
    FILE*z;
    for(i=0;i<7;i++)
   {
    printf("			       ���������ʦ����\n");
    scanf("%s",yh);
    printf("			       ��������������Կ��\n");
    scanf("%s",pw);
    z=fopen("match.txt","ab");
    strcpy(mat[i].name,yh);
    strcpy(mat[i].miyao,pw);

    fwrite(&mat[i],sizeof( struct match),1,z);
    fclose(z);

   }
   return 0;
}
