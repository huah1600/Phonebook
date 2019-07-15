#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;





void search() {


	ifstream input;
	string name, lastname, mobile,adress,birth,somthing;
	vector<string>o;
	input.open("data.txt");


	if (input.is_open()) {
		string i;
		std::cout << "search name" << endl;
		cin >> i;

		while (getline(input, name)) {

			getline(input, lastname);
			getline(input, mobile);
			getline(input, adress);
			getline(input, birth);
			getline(input, somthing);

			
		
			
			if (name == i || mobile== i) {

				cout << "Name:: " << name << endl;
				cout << "Lastname:: " << lastname << endl;
				cout << "Mobile:: " << mobile << endl;
				cout << "adress:: " << adress << endl;
				cout << "birth:: " << birth << endl;
				cout << "somthing else:: " << somthing << endl;
			
				o.push_back(name);
			}

		}
		if (o.size() == 0) {
			std::cout << "The name dosen`t exist" << endl;
		}
	}
	else {
	std:cout << "File is not open" << endl;
	}






}

void Delete() {
	ofstream temp;
	ifstream input;
	string name, lastname, mobile,adress, somthing, birth;

	input.open("data.txt", ifstream::app);
	temp.open("temp.txt", ofstream::app);
	string i;
	std::cout << "Delete name" << endl;
	cin >> i;

	
	while (getline(input, name)) {

		

		getline(input, lastname);
		getline(input, mobile);
		getline(input, adress);
		getline(input, birth);
		getline(input, somthing);


		


			if (name != i ) {
				
				temp << name << "\n" << lastname << "\n" << mobile << "\n" << adress << "\n" << birth << "\n" <<somthing<< "\n";

			}
			
			
		}
	std::cout << "It's deleted" << endl;
	
	input.close();
	temp.close();
	remove("data.txt");
	rename("temp.txt", "data.txt");


}
