#include<iostream>
#include<string>

using namespace std;
struct parking
{
	int parkingnumber;
	string parkingstatus;
	string vehiclenumber;
	string drivername;
	string vehicletype;
	float parkinghours;
};

float leave(struct parking fee[])
{
string v_num;
float fees=0;
cout<<"enter vehicle number"<<endl;
cin>>v_num;
for(int i=0; i<100; i++)
{
if(v_num==fee[i].vehiclenumber)
{
	    if(fee[i].vehicletype=="car"||"taxi")
		{
		    fees=fees + fee[i].parkinghours*20;
		    cout<<"your total bill is "<<fees<<"rps"<<endl;
		    
		}
		else if(fee[i].vehicletype=="bus")
		{
			fees=fees + fee[i].parkinghours*50;
			cout<<"your total bill is "<<fees<<"rps"<<endl;
			
		}
		else if(fee[i].vehicletype=="bike"||"cycle")
		{
			fees= fees + fee[i].parkinghours*10;
			cout<<"your total bill is "<<fees<<"rps"<<endl;
			
		}
		else if(v_num!=fee[i].vehiclenumber)
		{
			cout<<"sorry"<<endl;
			break;
		}
}

else
{
   cout<<"";
}
fee[i].parkingstatus="FREE";

}


cout<<"		***************"<<" THANK YOU FOR USING THE OUR SERVICES "<<" **************"<<endl;
return 0;
}

float fee(struct parking calculation[])
{
	int total_parked_vehicles;
	int totalfee=0;
	int fees_of_vehicle[100];
	int total_area=100;
	int largest=0;
	string dname;
	cout<<"\n\tENTER HOW MANY VEHICLES ARE PARKED SO FAR : ";
	cin>>total_parked_vehicles;
	
	for(int i=1;i<=total_parked_vehicles;i++)
		{
			if(calculation[i].vehicletype=="car"||"taxi")
		{
			fees_of_vehicle[i]=calculation[i].parkinghours*20;
		}
		else if(calculation[i].vehicletype=="bus")
		{
			fees_of_vehicle[i]=calculation[i].parkinghours*50;
		}
		else if(calculation[i].vehicletype=="bike"||"cycle")
		{
			fees_of_vehicle[i]=calculation[i].parkinghours*10;
		}
		else
		{
			cout<<" "<<endl;
		}
	   
	   	}
	   	for(int i=0;i<total_parked_vehicles;i++)
	   	{
	   		totalfee= totalfee+ fees_of_vehicle[i];
		   }
	largest=fees_of_vehicle[0];
    dname=calculation[0].drivername;
	for (int i=0;i<=total_parked_vehicles;i++)
	{
		if(fees_of_vehicle[i]>largest)
		{
			largest=fees_of_vehicle[i];
			dname=calculation[i].drivername;
		}
	}
	cout<<"the total amount of fee is"<<totalfee<<endl;
	cout<<"LARGEST FEES PAYED BY ANY VEHICLE IS : "<<largest<<" WHOSE DRIVER NAME IS : "<<dname<<endl;
	total_area =total_area - total_parked_vehicles;
	cout<<"TOTAL SPACE LEFT IN PARKING : "<<total_area<<endl;
	return 0;
};

void menu();
int main()
{
	//declaring variable of the structure
    parking Psystem[100]; 
    char choice;
int availablevehicles;
// As the space in Parking is 100 but all the space is not occupied so
     cout<<"Enter no of available vehicles"<<endl;
	 cin>>availablevehicles;
// Now taking the data for the parked vehicles
for(int i=0; i<availablevehicles; i++)
    {
		cout<<" Enter parking number for vehicle "<<i+1<<endl;
		cin>>Psystem[i].parkingnumber;
		cout<<" Enter Vehicle number for "<<i+1<<endl;
		cin>>Psystem[i].vehiclenumber;
		cout<<" Enter driver name for vehicle "<<i+1<<endl;
		cin>>Psystem[i].drivername;
		cout<<" Enter type of vehicle "<<i+1<<endl;
		cin>>Psystem[i].vehicletype;
		cout<<"Enter number of hours driver want to park for vehicle "<<i+1<<endl;
		cin>>Psystem[i].parkinghours;
	}	

	while(choice!='E')
	{
		if(choice=='P')
		{
			cout<<endl;
		}
		if(choice=='L')
		{
		  cout<<leave(Psystem);
		}
		if(choice=='D')
		{
			cout<<endl;
		}
		if(choice=='C')
		{
			cout<<fee(Psystem);
		}
		cout<<"enter your choice according to the following menu "<<endl;
	    menu();
	    cin>>choice;
   }
}
void menu ()
{

	cout<<" 	Welcome to Parking Management of Centaurus Mall Islamabad" <<endl;
    cout<<" 	Please press 'P' to park your vehicle "<<endl;
    cout<<" 	please press 'L' to leave the parking "<<endl;
    cout<<" 	please press 'D' to display the information of vehicles currently parked "<<endl;
    cout<<" 	please press 'C' to calculate the total amount of all currently parked vehicles"<<endl;
    cout<<" 	please press 'E' to exit the program "<<endl;
	
};

