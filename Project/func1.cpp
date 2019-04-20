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
