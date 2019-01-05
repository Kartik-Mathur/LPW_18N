// Classes
#include <iostream>
using namespace std;
// ---------------------BLUE PRINT------------------------
class Car{
private:
	int seats;	
public:
	char *name;
	int price;
	int model;
	// Constructor
	Car(){
		name=NULL;
	}	

	// Parameterized
	Car(char *n,int p,int m,int s){
		name=new char[strlen(n)+1];
		strcpy(name,n);
		price=p;
		seats=s;
		model=m;		
	}


	void print(){
		cout<<"Name  : "<<name<<endl;
		cout<<"Price : "<<price<<"$"<<endl;
		cout<<"Model : "<<model<<endl;
		cout<<"Seats : "<<seats<<endl<<endl;
	}

	void SetValues(char *n,int p,int m,int s){
		if(name!=NULL){
			delete name;
			name=NULL;
		}
		name = new char[strlen(n)+1];
		strcpy(name,n);
		price=p;
		seats=s;
		model=m;
	}

	void SetSeats(int s){
		if(seats>0 && seats<4){
			seats=s;
		}
		else{
			seats=4;
		}
	}

	int GetSeats(){
		return seats;
	}

	void SetName(char *n){
		if(name!=NULL){
			delete name;
			name=NULL;
		}
		name = new char[strlen(n)+1];
		strcpy(name,n);		
	}

};
// --------------------------------------------
int main(){
	Car A; // Creating object of class Car

	A.price=100;
	// A.name[0]='B';
	// A.name[1]='M';
	// A.name[2]='W';
	// strcpy(A.name,"BMW");
	A.SetName("BMW");
	A.SetSeats(-3);
	// A.seats=5;
	A.model=100;
	// cout<<A.GetSeats()<<endl;
	// cout<<A.seats<<endl;

	Car B;
	B.SetValues("Audi",200,500,4);

	Car C("Suzuki",400,555,5);

	Car D=C; // Copy Constructor - Calling way1
	Car E(D); // Copy Constructor - Calling way2

	A.print();
	B.print();
	C.print();
	D.print();
	E.print();

	return 0;
}