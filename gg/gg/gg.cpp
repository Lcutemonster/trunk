#include <stdio.h>
#include <string.h>

struct Books
{
   char  title[50];
   char  author[50];
   int   book_id;
};

int main()
{

   struct Books Book[2];        
   int i,j;
 
  /*���ṹ�����鸳ֵ*/
   for (i=0;i<=2;i++)
   {   
        scanf("%s %s %d\n", &Book[i].title, &Book[i].author, &Book[i].book_id);
   }
 /*��ʾ�ṹ������*/
   for (j=0;j<=2;j++)
   {
        printf( "Book[%d] title : %s\nBook[%d] author : %s\nBook[%d] book_id : %d\n", j, Book[j].title,j, Book[j].author, j, Book[j].book_id);

   }
   return 0;
}
