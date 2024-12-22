#include<iostream>
#include<string.h>
#include<windows.h>
using namespace std;
int busrequire1=3; 
//tells the total number of buses whoose route is to be add
int x=0; 
int y=0; 
// variable use for route of first bus
int z=0; 
// variable use for route of second bus
int l=0; 
// variable use for route of third bus
struct BUSMANGEMENT
{
int a[4];
 //variable use for keeping track of buses 
int i=0; 
//variable use for keeping track of buses 
int numberofseats[10]; 
// for seats in buses
void add(int a[4]) 
//adding the bus
           {
           HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
           	SetConsoleTextAttribute(h,11);
	cout<<"\n Enter the number plate of the bus that is to be add only numbers no alphabet and special symbol: ";
				cin>>a[i];
					SetConsoleTextAttribute(h,12);
	cout<<"\n Add number of seats in Bus:"<<a[i]<<" is "<<" : ";
				cin>>numberofseats[i];
				i++;
			}
void search(int a[4]) 
//searching the bus and its and seats
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
           	SetConsoleTextAttribute(h,12);
	int n;
	cout<<"\n Enter the number plate of bus which is to be searched: ";
	cin>>n;
	for(int j=0; j<i; j++)
	{
		if(n==a[j])
		{
			
           	SetConsoleTextAttribute(h,6);
			cout<<"\n The seats of the bus that is searched is: "<<numberofseats[j];
			
		}
	}
}
void del(int a[4])
 //deleting the number plate of bus
{
HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
           	SetConsoleTextAttribute(h,2);
	int n;
	cout<<"\n enter your bus number plate is : ";
	cin>>n;	
		for(int j=0; j<i; j++){
			if(n==a[j]){
				for(int k=j; k<i; k++){
					a[k]=a[k+1];
				}
				i--;
				break;
			}
		}
}
void show(int a[15]) 
// showing the bus number plate and and seats
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
           	SetConsoleTextAttribute(h,13);
	for(int  j=0; j<i; j++){
	 	SetConsoleTextAttribute(h,8);
		cout<<"\n\n"<<"The number plate of the bus is : "<<a[j];
		
          
				cout<<"\nThe number of seats in the bus : "<<a[j]<<" is : "<<numberofseats[j];
	}
}

void addroute1(string stop1[100])
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
           	SetConsoleTextAttribute(h,5);
	cin.ignore();
	while(y<busrequire1){
		cout<<endl;
		cout<<"enter stop "<<y+1;
		getline(cin,stop1[y]);
		y++;
	}
	
}
void addroute2(string stop2[100])
{
	cin.ignore();
	while(z<busrequire1){
		HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
           	SetConsoleTextAttribute(h,8);
           	cout<<endl;
		cout<<"enter stop "<<z+1;
		getline(cin,stop2[z]);
		z++;
	}

}
void addroute3(string stop3[100])
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
           	SetConsoleTextAttribute(h,13);
	cin.ignore();
	while(l<busrequire1){
		cout<<endl;
		cout<<"enter stop "<<l+1;
		getline(cin,stop3[l]);
		l++;
	}
}
void showroute1(string stop1[100])
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
           	SetConsoleTextAttribute(h,11);
	for(int  j=0; j<y; j++){
		cout<<"\n\n"<<"STOP"<<j+1<<":"<<stop1[j];
	}
}
void showroute2(string stop2[100])
{
	for(int  e=0; e<z; e++){
		cout<<"\n\n"<<"STOP"<<e+1<<":"<<stop2[e];
	}
}
void showroute3(string stop3[100])
{
	for(int  k=0; k<l; k++){
		cout<<"\n\n"<<"STOP"<<k+1<<":"<<stop3[k];
	}
}
};
int main()
{ 
   HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
   BUSMANGEMENT obj; 
   // creating the object
	int totalbuses=3;
	bool exitprogram=false;
		SetConsoleTextAttribute(h,2);
	cout<<"\n\n\t\t\tTrasport Mangement System\t\t\t";
	SetConsoleTextAttribute(h,3);
	cout<<"\n\t\t\t\tTrack Of Buses\t\t\t\t";
	SetConsoleTextAttribute(h,15);
	cout<<"\n Menu";
	SetConsoleTextAttribute(h,5);
    cout<<"\n \n1. add bus";
	cout<<"\n 2. remove bus";
	cout<<"\n 3. search bus";
	cout<<"\n 4. show record";
	cout<<"\n 5. exit"<<endl;
	int busrequire,choice,numberofseats;
	SetConsoleTextAttribute(h,8);
	cout<<"\nEnter the number of buses that are required at the moment: ";
	cin>>busrequire;
	if(busrequire==totalbuses)
	{
	while(!exitprogram)
			{
				SetConsoleTextAttribute(h,1);
	cout<<"\n\n enter your choice ";
	cin>>choice;
	switch(choice)
{
	case 1:
		if(obj.i<=busrequire-1)
		{ 
			obj.add(obj.a);
		}
	   break;
	case 2:
		if(obj.i>=busrequire-1)
		{
			obj.del(obj.a);	
		}
		break;
        case 3:
    	obj.search(obj.a);
    	break;
		case 4:
	   obj.show(obj.a);
		break;		
	    case 5:
	    	SetConsoleTextAttribute(h,14);
	cout<<"\n Exting this module\n";
	exitprogram=true;
	break;
	default:
		SetConsoleTextAttribute(h,12);
		cout<<"\n\n invalid value";
}
	}

	string stop1[100];
	string stop2[100];
	string stop3[100];
	int b[3];
	int x=0;
	int BUS[x];
	while(x<3)
	{
		for(int j=0;j<obj.i;j++)
	{
	    BUS[x]=obj.a[j];
	    x++;
	}
	}
	SetConsoleTextAttribute(h,10);
	cout<<"\n\n These are the number plates of buses one by one "<<endl;
	for(x=0;x<3;x++)
	{
		
           	SetConsoleTextAttribute(h,11);
		cout<<"BUS"<<x+1<<":"<<BUS[x]<<endl;
	}
	bool exitprogram1=false;
	SetConsoleTextAttribute(h,10);
	    cout<<"\n\t\t\t\tRoute Optumization\t\t\t\t";
	    
           	SetConsoleTextAttribute(h,5);
	    cout<<"\n\t\t\t\tTime Management\t\t\t\t";
	   
           	SetConsoleTextAttribute(h,8);
	    cout<<"\n Menu";
	   
           	SetConsoleTextAttribute(h,11);
	    cout<<"\n \n1. add route time for first bus";
		cout<<"\n 2. add route and time for second bus";
		cout<<"\n 3. add route and time for third bus";
		cout<<"\n 4. show route and time of first bus";
		cout<<"\n 5. show route and time of second bus";
		cout<<"\n 6. show route and time of third bus";
		cout<<"\n 7 the distances cover by three buses";
	    cout<<"\n 8. Exit the module"<<endl;
	    //as we know bus require is equal to 3
int busrequire1=3;
int distance1,distance2,distance3;// distances of buses
//distances travel by buses
	int choice1; //choice for second module
	while(!exitprogram1)
	{
		
           	SetConsoleTextAttribute(h,10);
		cout<<"\nenter the choice";
		cin>>choice1;
	switch(choice1)
	{
		case 1:
	if(y<=busrequire1-1)
		{
			
           	SetConsoleTextAttribute(h,5);
			cout<<"Enter the route of first bus ";
			obj.addroute1(stop1);
		}
	   break;
	    case 2:
	   	if(z<=busrequire1-1)
	   	  { 
	   	  
           	SetConsoleTextAttribute(h,5);
	   	  cout<<"Enter the route of second bus ";
	   		obj.addroute2(stop2);
		   }
		   break;
		   case 3:
		   	if(l<=busrequire1-1)
	   	  {
	   	  
           	SetConsoleTextAttribute(h,5);
	   	  	cout<<"Enter the route of third bus ";
	   		obj.addroute3(stop3);
		   }
		   	break;
			case 4:
			
           	SetConsoleTextAttribute(h,3);
			cout<<"Show the route of first bus ";
		    obj.showroute1(stop1);
		    break;
		    case 5:
		    	
           	SetConsoleTextAttribute(h,14);
		    cout<<"show the route of second bus ";
		    obj.showroute2(stop2);
		    break;
		    case 6:
		    	
           	SetConsoleTextAttribute(h,8);
		    cout<<"Enter the route of third bus ";
		    obj.showroute3(stop3);
		    break;
		    case 7:
		    
           	SetConsoleTextAttribute(h,9);
		    cout<<"enter the distance travel by first bus1 of number plate "<<BUS[0]<<endl;
		    cin>>distance1;
		    cout<<"meters";
		    	SetConsoleTextAttribute(h,4);
		    cout<<"\nenter the distance travel by first bus2 of number plate "<<BUS[1]<<endl;
		    cin>>distance2;
		    cout<<"meters";
		    	SetConsoleTextAttribute(h,11);
		    cout<<"\nenter the distance travel by first bus3 of number plate "<<BUS[2]<<endl;
		    cin>>distance3;
		    cout<<"meters";
		    if(distance1>distance2&&distance1>distance3)
		    {
		    
           	SetConsoleTextAttribute(h,2);
		    	cout<<"\n As the distance of bus1 is more the time taken by bus1 is more than other so it is less convinient "<<endl;
			}
			else if(distance2>distance1&&distance2>distance3)
			{
				
           	SetConsoleTextAttribute(h,1);
		    	cout<<"As the distance of bus2 is more so the time taken by bus2 is more than other so its is less convinient"<<endl;
			}
			else
			{
			
           	SetConsoleTextAttribute(h,5);
				cout<<"As the distance of bus 3 is more so the time taken by bus3 is more than other so its is less convinient"<<endl;
	
			}
			break;
	        case 8:	
			
           	SetConsoleTextAttribute(h,6);		
	        cout<<"\n \t\t Exting this module\n";
	        exitprogram1=true;
	        break;
	        default:
	        
           	SetConsoleTextAttribute(h,12);
	        cout<<"\n\n invalid value";
	}	
	}
}
	
	else
	{
	
           	SetConsoleTextAttribute(h,12);
		cout<<"\ninvalid";
	}
}
	
