# include <iostream>
using namespace std;
int main()
{
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
return 0;
}
