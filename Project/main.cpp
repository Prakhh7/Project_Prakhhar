# include <iostream>
using namespace std;

  struct node {
    int data;
    struct node *next;
} *first = NULL;

void insert() {
    struct node *temp;
    struct node *nn = (struct  node*)malloc(sizeof(struct node));
    printf("enter  the data\n");
    scanf("%d", &nn->data);
    temp = first;
    while (temp->next != first)
        temp = temp->next;
    temp->next = nn;
    nn->next = NULL;
}

void display() {
    struct node *temp;
    temp = first;
    if (temp == NULL) {
        printf("no elements\n");
        return;
    }
    printf("elements in linked list are\n");
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

void deletion() {
    struct node  *temp;
    temp = first;
    first = first->next;
    temp->next = NULL;
    free(temp);
  void equation ()
{
cout<< "Enter the number of variables in the equations: ";
	int n;
	
	cin>>  n;
	char var = 'x';
	int a[n][n],b[n][1];
	
	for (int i = 0; i< n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin>> a[i][j];   //Get the Matrix values
		}
		cin>> b[i][0]; //Get the constant values
	}
	
	cout<< "\nLinear Equation in Matrix representation is: \n";
	for (int i = 0; i< n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout<<" "<< a[i][j]; //print the matrix values
		}
		//print the variable and constant values
		cout<< "  " <<static_cast<char>(var) << "  =  " << b[i][0]<< "\n";
		var++;
	}
}

}

int main() {
    int  op;  
    do {
        printf("1.insertion\n2.deletion\n3.display\n4.exit\n");
        printf("enter option\n");
        scanf("%d", &op);
        switch (op) {
          case 1:
             insert();
             break;
          case 2:
             deletion();
             break;
          case 3:
             display(); 
             break;
        }
    } while (op != 6);
}

return 0;
}
