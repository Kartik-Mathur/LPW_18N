// Classes
#include <iostream>
using namespace std;
// ---------------------BLUE PRINT------------------------
class Car{
private:
	int seats;	
	const int tyres;
public:
	static int count;

	char *name;
	int price;
	int model;
	// Constructor
	Car():tyres(4){
		count++;
		name=NULL;
	}	

	// Parameterized
	Car(char *n,int p,int m,int s):tyres(4),price(p),model(m),seats(s){
		name=new char[strlen(n)+1];
		strcpy(name,n);
		count++;
		// price=p;
		// seats=s;
		// model=m;		
	}

	// Copy Constructor
	// Car D=C; or Car D(E);
	Car(Car &X):tyres(4){
		name=new char[strlen(X.name)+1];
		strcpy(name,X.name);
		price=X.price;
		seats=X.seats;
		model=X.model;
		count++;
	}	

	void print()const{
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

	// Operator Overloading
	void operator=(Car X){
		if(name!=NULL){
			delete name;
			name=NULL;
		}
		name=new char[strlen(X.name)+1];
		strcpy(name,X.name);
		price=X.price;
		model=X.model;
		seats=X.seats;
	}

	void operator+=(Car X){
		int l1=strlen(name);
		int l2=strlen(X.name);

		char *OldName=name;
		delete []OldName;		
		name=new char[l1+l2+1];
		strcpy(name,OldName);

		int i=l1;

		for(int j=0;j<=l2;j++){
			name[i]=X.name[j];
			i++;
		}
		// name[l1+l2]='\0';

		price=X.price;
		model=X.model;
		seats=X.seats;
	}

	// A=B+C;
	Car* operator+(Car X){
		Car *newCar=new Car;

		// Copy name and X.name in new car's name -HomeWork
		(*newCar).name=new char[5];
		strcpy((*newCar).name,"FORD");
		(*newCar).price=price+X.price;
		(*newCar).model=model+X.model;
		(*newCar).seats=seats+X.seats;
		return newCar;
	}

	~Car(){
		count--;
		cout<<"Deleting Car "<<name<<endl;
	}

};
// --------------------------------------------

int Car::count=0;


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
	// Car E(D); // Copy Constructor - Calling way2
	Car E;
	E=D; // Assignment Operator
	A+=B;
	Car* F=B+C;

	A.print();
	B.print();
	C.print();
	D.print();
	E.print();
	(*F).print();
	cout<<Car::count<<endl;
	delete F;
	cout<<Car::count<<endl;



	return 0;
}