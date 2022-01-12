#include <stdio.h>
#include <stdlib.h>

struct book
{
	char book_name[20];
	int book_Id;
	char Author_name[20];
	float book_price;
};
int main()
{
	struct book accept(struct book b);
	void display(struct book b);
	void calculate(struct book b);
	struct book book_price;

	book_price=accept(book_price);
	
	calculate(book_price);
	display(book_price);

	return 0;
	
}
struct book accept(struct book b)
{
	printf("\n Enter employee details");
	scanf("%s%d%s%f",e.book_name,&e.book_Id,e.Author_name,&e.book_price);
	return e;
}

void display(struct book b)
{
	printf("\nBook name=%s\tBook no=%d\t Author Name=%s\t Book price=%f\t",e.book_name,e.book_Id,e.Author_name,e.book_price);
}
void calculate(struct book b)
{
if(book_price>500)
	printf("discounted price",0.01*book_price);
else
printf("no discount for you");
}
