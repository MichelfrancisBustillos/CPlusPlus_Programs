#include <iostream>
#include <string.h>
#include <vector>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <cstdlib>

//g++ .cpp -o GroupProject.exe -std=c++11 -static-libgcc -static-libstdc++

using namespace std;

struct item{
	string itemName;
	float smallPrice;
	float mediumPrice;
	float largePrice;
};

struct customer{
	string name;
	string phoneNumber;
	string addressLine1;
	string addressLine2;
};

struct itemOrder{
	int menuItemNumber;
	string itemName;
	char itemSize;
	int itemQuantity;
};

void populateMenu(item menu[]);
vector<customer> readFile(void);
void pushFile(customer newCust);
vector<string> &split(const string &s, char delim, vector<string> &elems);
vector<string> split(const string &s);
void customerCheck (string phoneNumber, vector<customer> customers);
float totalCost(itemOrder order, item menu[]);
int totalTime();
void printMenu(item menu[]);

int main(){
	system("CLS");
	itemOrder order;
	string phoneNumber;
	vector<customer> customers = readFile();
	
	item * menu = new item[9];
	populateMenu(menu);
	printMenu(menu);
	bool inputCheck = false;
	while (!inputCheck){
		cout<<"Enter an item, size (s, m, or l) and quantity: ", cin>>order.itemName>>order.itemSize>>order.itemQuantity, cout<<endl;
		for(order.menuItemNumber = 0; order.menuItemNumber < 9; order.menuItemNumber++){
			if (order.itemName.compare(menu[order.menuItemNumber].itemName)){
				inputCheck = true;
				break;
			}
		}
	}
	
	cout<<"Input customer's phone number or enter 0 to quit: ", cin>>phoneNumber, cout<<endl;
	customerCheck(phoneNumber, customers);
	
	//bool delivered = false;
	//cout<<"Has order been delivered (1 = yes/2 = no)? ", cin>>delivered, cout<<endl;
	
	cout<<"The total meal cost will be $"<<totalCost(order, menu)<<endl;
	/* int time = totalTime();
	bool cancell = false;
	if(time == 0){
		cout<<"It will take >1 hour to deliver. Would you like to cancell (1=yes/2=no)?", cin>>cancell, cout<<endl;
	}
	else{
	cout<<"It will take "<<time<<" minutes to deliver."<<endl;
	} */
	system("PAUSE");
}

int totalTime(){
	int timeInMinutes = 0;
	int cooks = 0;
	string junk;
	
	cout<<"Enter number of cooks free: ", cin>>cooks, cout<<endl; //Get info from 'NumOfCookFree()'
	switch (cooks){
		case 0:
			timeInMinutes = 30;
			break;
		case 1:
			timeInMinutes = 15;
			break;
		case 2:
			timeInMinutes = 10;
			break;
		case 3:
			timeInMinutes = 5;
			break;
	}
	int drivers = 0;
	cout<<"Choose delivery location: "<<endl;
	cout<<"1. Bel Air"<<endl;
	cout<<"2. Riverside"<<endl;
	cout<<"3. Aberdeen"<<endl;
	cout<<"4. Forest Hill"<<endl;
	cout<<"5. Other/No drivers free."<<endl;
	cout<<">", cin>>drivers, cout<<endl;
	
	switch(drivers){
		case 1:
			timeInMinutes = timeInMinutes + 5;
			break;
		case 2:
			timeInMinutes = timeInMinutes + 10;
			break;
		case 3:
			timeInMinutes = timeInMinutes + 25;
			break;
		case 4:
			timeInMinutes = timeInMinutes + 30;
			break;
		case 5:
		default:
			timeInMinutes = 0;
			break;
	}
	
	return timeInMinutes;
}

float totalCost(itemOrder order, item menu[]){
	float total = 0;
	
	if(order.itemSize == 's'){
		total = menu[order.menuItemNumber].smallPrice * order.itemQuantity;
	}
	else if(order.itemSize == 'm'){
		total = menu[order.menuItemNumber].mediumPrice * order.itemQuantity;
	}
	else if(order.itemSize == 'l'){
		total = menu[order.menuItemNumber].largePrice * order.itemQuantity;
	}
	
	return total;
}

vector<customer> readFile(void){
	string name;
	string phoneNumber;
	string addressLine1;
	string addressLine2;
	vector<customer> customers;
	vector<string> temper;
	customer temp;
	fstream ioFile;
	ioFile.open("customers.csv", fstream::in | fstream::out | fstream::app);
	while (!ioFile.eof()){
		getline(ioFile, name);
		temper = split(name);
		temp.name = temper[0];
		temp.phoneNumber = temper[1];
		temp.addressLine1 = temper[2];
		temp.addressLine2 = temper[3];
		customers.push_back(temp);
	}
	
	ioFile.close();
	return customers;
}

void pushFile(customer newCust){
	fstream ioFile;
	ioFile.open("customers.csv", fstream::in | fstream::out | fstream::app);
	
	ioFile<<newCust.name<<","<<newCust.phoneNumber<<","<<newCust.addressLine1<<","<<newCust.addressLine2<<endl;
	
	ioFile.close();
}

void populateMenu(item menu[]){
	menu[0].itemName = "Plain";
	menu[0].smallPrice = 8;
	menu[0].mediumPrice = 10;
	menu[0].largePrice = 12;
	
	menu[1].itemName = "Stuffed";
	menu[1].smallPrice = 10;
	menu[1].mediumPrice = 12;
	menu[1].largePrice = 14;
	
	menu[2].itemName = "Calzone";
	menu[2].smallPrice = 9;
	menu[2].mediumPrice = 0;
	menu[2].largePrice = 11;
	
	menu[3].itemName = "CheeseSteak";
	menu[3].smallPrice = 4.25;
	menu[3].mediumPrice = 0;
	menu[3].largePrice = 6.75;
	
	menu[4].itemName = "Cheeseburger";
	menu[4].smallPrice = 3.25;
	menu[4].mediumPrice = 0;
	menu[4].largePrice = 5.95;
	
	menu[5].itemName = "Italian";
	menu[5].smallPrice = 3.25;
	menu[5].mediumPrice = 0;
	menu[5].largePrice = 5.95;
	
	menu[6].itemName = "Lasanga";
	menu[6].smallPrice = 7.50;
	menu[6].mediumPrice = 0;
	menu[6].largePrice = 10.25;
	
	menu[7].itemName = "Spaghetti";
	menu[7].smallPrice = 6;
	menu[7].mediumPrice = 0;
	menu[7].largePrice = 8.25;
	
	menu[8].itemName = "StuffedShells";
	menu[8].smallPrice = 6.75;
	menu[8].mediumPrice = 0;
	menu[8].largePrice = 9.50;
}

void customerCheck (string phoneNumber, vector<customer> customers){
	bool found = false;
	for(int it = 1; it < customers.size(); it++){
		if(phoneNumber.compare(customers[it].phoneNumber) == 0){
			cout<<"Name: "<<customers[it].name<<endl;
			cout<<"Phone Number: "<<customers[it].phoneNumber<<endl;
			cout<<"Address: "<<customers[it].addressLine1<<endl<<"      "<<customers[it].addressLine2<<endl;
			found = true;
			break;
		}
	}
	if(!found){
		customer newCust;
		cin.ignore();
		cout<<"Enter customer name: ", getline(cin, newCust.name), cout<<endl;
		newCust.phoneNumber = phoneNumber;
		cout<<"Enter Address Line 1: ", getline(cin, newCust.addressLine1), cout<<endl;
		cout<<"Enter Address Line 2: ", getline(cin, newCust.addressLine2), cout<<endl;
		customers.push_back(newCust);
		pushFile(newCust);
	}
}

vector<string> &split(const string &s, char delim, vector<string> &elems) {
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return elems;
}

vector<string> split(const string &s) {
    vector<string> elems;
	char delim = ',';
    split(s, delim, elems);
    return elems;
}

void printMenu(item menu[]){
	cout<<fixed<<showpoint;
	cout<<setprecision(2);
	cout<<endl;
	cout<<setw(20)<<"Item"<<setw(10)<<"Small"<<setw(10)<<"Medium"<<setw(10)<<"Large"<<endl;
	cout<<setfill('_')<<setw(20)<<""<<setw(10)<<""<<setw(10)<<""<<setw(10)<<""<<endl;
	for(int c = 0; c < 8; c++){
		if(menu[c].mediumPrice == 0){
			cout<<setfill(' ')<<setw(20)<<menu[c].itemName<<setw(10)<<menu[c].smallPrice<<setw(10)<<"N/A"<<setw(10)<<menu[c].largePrice<<endl;
		}
		else{
			cout<<setfill(' ')<<setw(20)<<menu[c].itemName<<setw(10)<<menu[c].smallPrice<<setw(10)<<menu[c].mediumPrice<<setw(10)<<menu[c].largePrice<<endl;
		}
	}
	cout<<endl;
}