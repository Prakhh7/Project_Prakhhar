<<<<<<< HEAD
void circle()
{
<<<<<<< HEAD
cout<<"Press 1 for Stack and Queues\n"<<"Press 2 to draw a circle\n"<<"Press 3 to draw a rectangle";
int choice;
cin>>choice;
switch(choice)
{
case 1:
break ;

case 2:
circle();
break ;

case 3:
rectangle();
break ;
}
=======
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
<<<<<<< HEAD
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

>>>>>>> abhi
=======
  void fr(fileName)
{
        char ch;
	const char *fileName="test.txt";
	
	//declare object
	ifstream file;
	
	//open file
	file.open(fileName,ios::in);
	if(!file)
	{
		cout<<"Error in opening file!!!"<<endl;
		return -1; //return from main
	}
	
	//read and print file content
	while (!file.eof()) 
	{
		file >> noskipws >> ch;	//reading from file
		cout << ch;	//printing
	}
	//close the file
	file.close();
}

void fw()
{
        ofstream fp;
	char s[100], fname[20];
	cout<<"Enter a file name with extension (like file.txt) to create a file : ";
	gets(fname);
	fp.open(fname);
	if(!fp)
	{
		cout<<"Error in opening file..!!";
		getch();
		exit(1);
	}
	cout<<"Enter few lines of text :\n";
	while(strlen(gets(s))>0)
	{
		fp<<s;
		fp<<"\n";
	}
	fp.close();
}
  void bubblesort()
{
template <class T>
void bubbleSort(T a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j - 1])
              swap(a[j], a[j - 1]);
}
  
// Driver Code
int main() {
//Declaration of array
    int a[5];
//Taking input of array
for(int j=0;j<=4;j++)
{
cin>>a[j];
}
    int n = sizeof(a) / sizeof(a[0]);
  
    // calls template function 
    bubbleSort(a, 5);
  
    cout << " Sorted array : ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

}

void charfunc()
{
class String
{
protected:
    char str[200];
public:
    String(){}
    String(char* xstr){ strcpy(str, xstr);    }

    void show() { cout << str << endl; }
    char* operator+(String);
    char* operator=(String);
    char *operator+=(String);
    int stringlen();
    int stringsize();
    void tolower();
    void toupper();
};

char* String::operator+(String xstr)
{
    strcat(str, xstr.str);
    return str;
}

//to copy two strings
char* String::operator=(String xstr)
{
    strcpy(str, xstr.str);
    return str;
}

//to add two strings
char* String::operator+=(String xstr)
{
    strcat(str, xstr.str);
    return str;
}

//to find string length
int String::stringlen()
{
    return strlen(str);
}

//to find string size
int String::stringsize()
{
    return (strlen(str) + 1);
}

//to convert the string into lowercase
void String::tolower()
{
    for (int i = 0; str[i] != '\0'; i++)
        if (isupper(str[i]))
            str[i] += 32;
}

//to convert the string into uppercase
void String::toupper()
{
    for (int i = 0; str[i] != '\0'; i++)
        if (islower(str[i]))
            str[i] -= 32;
}
}
>>>>>>> deva
return 0;
=======
clrscr(); //clrscr is used to clear the screen.

//declaring radius as integer.
int radius=30;
// gmode is Graphics mode which is a computer display 
// mode that generates image using pixels. 
// DETECT is a macro defined in "graphics.h" header file 

int gdriver=DETECT,gmode;

 // initgraph initializes the graphics system 
 // by loading a graphics driver from disk 

initgraph(&gdriver,&gmode,"C:\TC\BGI");

//circle function
circle(getmaxx()/2,getmaxy*()/2,radius);

//getch is used for taking input only a character.
getch();

    // closegraph function closes the graphics 
    // mode and deallocates all memory allocated 
    // by graphics system . 
    closegraph();
>>>>>>> kush
}
void rectangle()
{
    // gm is Graphics mode which is a computer display 
    // mode that generates image using pixels. 
    // DETECT is a macro defined in "graphics.h" header file 
    
    int gd = DETECT, gm; 
  
    // location of left, top, right, bottom 
    
    int left = 150, top = 150; 
    int right = 450, bottom = 450; 
  
    // initgraph initializes the graphics system 
    // by loading a graphics driver from disk 
    
    initgraph(&gd, &gm, ""); 
  
    // rectangle function 
   
     rectangle(left, top, right, bottom); 
  
    getch(); 
  
    // closegraph function closes the graphics 
    // mode and deallocates all memory allocated 
    // by graphics system . 
    
    closegraph(); 
  }
void queue()
{
// A CPP program to demonstrate linked list  
// based implementation of queue  
#include <bits/stdc++.h> 
using namespace std; 
  
// A linked list (LL) node to store a queue entry  
class QNode  
{  
    public: 
    int key;  
    QNode *next;  
};  
  
// The queue, front stores the front node 
// of LL and rear stores ths last node of LL  
class Queue  
{  
    public: 
    QNode *front, *rear;  
};  
  
// A utility function to create  
// a new linked list node.  
QNode* newNode(int k)  
{  
    QNode *temp = new QNode(); 
    temp->key = k;  
    temp->next = NULL;  
    return temp;  
}  
  
// A utility function to create an empty queue  
Queue *createQueue()  
{  
    Queue *q = new Queue(); 
    q->front = q->rear = NULL;  
    return q;  
}  
  
// The function to add a key k to q  
void enQueue(Queue *q, int k)  
{  
    // Create a new LL node  
    QNode *temp = newNode(k);  
  
    // If queue is empty, then  
    // new node is front and rear both  
    if (q->rear == NULL)  
    {  
    q->front = q->rear = temp;  
    return;  
    }  
  
    // Add the new node at  
    // the end of queue and change rear  
    q->rear->next = temp;  
    q->rear = temp;  
}
  
// Function to remove 
// a key from given queue q  
QNode *deQueue(Queue *q)  
{  
    // If queue is empty, return NULL.  
    if (q->front == NULL)  
    return NULL;  
  
    // Store previous front and  
    // move front one node ahead  
    QNode *temp = q->front;  
    q->front = q->front->next;  
  
    // If front becomes NULL, then  
    // change rear also as NULL  
    if (q->front == NULL)  
    q->rear = NULL;  
    return temp;  
}  
  
// Driver code  
    Queue *q = createQueue();  
    enQueue(q, 10);  
    enQueue(q, 20);  
    deQueue(q);  
    deQueue(q);  
    enQueue(q, 30);  
    enQueue(q, 40);  
    enQueue(q, 50);  
    QNode *n = deQueue(q);  
    if (n != NULL)  
    cout << "Dequeued item is " << n->key;  
    
}  

void infixToPostfix(string s) 
{ 
    std::stack<char> st; 
    st.push('N'); 
    int l = s.length(); 
    string ns; 
    for(int i = 0; i < l; i++) 
    { 
        // If the scanned character is an operand, add it to output string. 
        if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z')) 
        ns+=s[i]; 
  
        // If the scanned character is an ‘(‘, push it to the stack. 
        else if(s[i] == '(') 
          
        st.push('('); 
          
        // If the scanned character is an ‘)’, pop and to output string from the stack 
        // until an ‘(‘ is encountered. 
        else if(s[i] == ')') 
        { 
            while(st.top() != 'N' && st.top() != '(') 
            { 
                char c = st.top(); 
                st.pop(); 
               ns += c; 
            } 
            if(st.top() == '(') 
            { 
                char c = st.top(); 
                st.pop(); 
            } 
        } 
          
        //If an operator is scanned 
        else{ 
            while(st.top() != 'N' && prec(s[i]) <= prec(st.top())) 
            { 
                char c = st.top(); 
                st.pop(); 
                ns += c; 
            } 
            st.push(s[i]); 
        } 
  
    } 
    //Pop all the remaining elements from the stack 
    while(st.top() != 'N') 
    { 
        char c = st.top(); 
        st.pop(); 
        ns += c; 
    } 
      
    cout << ns << endl; 
// To test the above functions
   string exp = "a+b*(c^d-e)^(f+g*h)-i"; 
    infixToPostfix(exp); 
  
}

