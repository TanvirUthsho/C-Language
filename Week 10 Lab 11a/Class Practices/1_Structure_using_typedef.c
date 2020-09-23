#include <stdio.h>
#include <string.h>
struct Books
{
    char title[20];
    char author[20];
    char subject[20];
    int book_id;
};
int main()
{
    struct Books book1;
    strcpy(book1.title, "Programming");
    strcpy(book1.author, "Nuha Ali");
    strcpy(book1.subject, "Tutorial");
    book1.book_id = 100;
    printf("%s\n", book1.title);
    printf("%s\n", book1.author);
    printf("%s\n", book1.subject);
    printf("%d\n", book1.book_id);
    return 0;
}