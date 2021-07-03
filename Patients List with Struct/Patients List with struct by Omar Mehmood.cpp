//Omar Mehmood CS 13A0 01 Advanced Programming Techniques Laboratory Exercise/Assignment 4/19/2021
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct patient {
	string name;
	string visitReason;
	int age;
	string gender;
	int weight;
	};

int choice , count = 0, patientcount = 0;
patient newPatient[1000];
int main ()
{
	cout << "Welcome to New York Dental Care!";
	do{
	cout << "\n--------------------------------\n1) Register new Patient\n2) Print out current patients registered at facility\n3) Quit\n\nSELECTION: ";
	cin >> choice;
	
	if(choice == 1){
		count++;
		cout << "Age: ";
		cin >> newPatient[count].age;
		cout << "Weight: ";
		cin >> newPatient[count].weight;
		cin.ignore();
		cout << "What is your name: ";
		getline (cin, newPatient[count].name);
		cout << "Visit reason: ";
		getline (cin, newPatient[count].visitReason); 
		cout << "Gender: ";
		getline (cin, newPatient[count].gender);
	}
	
	if (choice == 2){
		patientcount++;
		for (int i = 1 ; i <= patientcount ; i++)
		cout << "\n\nPatient " << i << "\n------------"
		<< "\nName: " << newPatient[i].name
		<< "\nVisit reason: " << newPatient[i].visitReason
		<< "\nAge: " << newPatient[i].age
		<< "\nGender: " << newPatient[i].gender
		<< "\nWeight: " << newPatient[i].weight;
		cout << "\n\n";
	}
	}while (choice != 3);
	cout << "Thank you for registering at New York Dental Care";
	
	
	return 0;
}
