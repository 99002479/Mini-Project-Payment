#include <pay.h>			/* Add include file*/

struct date{
	   int month;
	   int day;
	   int year;
	   };

struct account {
	int number;
	char name[100];
	int acct_no;
	float mobile_no;
	char street[100];
	char city[100];
	char acct_type;
	float oldbalance;
	float newbalance;
	float payment;
	struct date lastpayment;
  }customer;

void main()
	{
	  int i,n;
	  char ch;

	  printf("   PAYMENT SYSTEM:\n\n");
	  printf("\n1:    ADD ACOOUNT\n");
	  printf("2:    SEARCH CUSTOMER\n");
	  printf("3:    EXIT\n");

	  do{
	       printf("\nOPTION:");
	       ch=getchar();
	  }while(ch<='0' || ch>'3');

	  switch(ch){
		case '1':

			printf("\nHOW MANY ACCOUNTS?");
			scanf("%d",&n);
			for(i=0;i<n;i++){
				input();
				if(customer.payment>0)
					customer.acct_type=(customer.payment > customer.oldbalance)? 'I': 'S';
				else
					customer.acct_type=(customer.oldbalance>0)?'S' : 'N';
				customer.newbalance=customer.oldbalance - customer.payment;
				writefile();
			}
			main();
		case '2':

			printf("SEARCH BY?\n");
			printf("\n1 --- Search by customer number\n");
			printf("2 --- Search by customer name\n");
			search();
			ch=getchar();
			main();
		case '3':
			exit(1);
	  }
 }





