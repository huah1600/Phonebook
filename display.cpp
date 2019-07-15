#include <iostream> 
#include <string>
#include <fstream>
#include <vector>





using namespace std;


void putname() {



	ofstream output;
	output.open("data.txt", ofstream::app);
	ifstream input;
	input.open("data.txt", fstream::app);

	vector<string>name;
	string person;


		std::cout << "write name" << "\n";
		std::cin.ignore();
		getline(cin, person);
		name.push_back(person);
		std::cout << "write lastname" << "\n";
		getline(cin, person);
		name.push_back(person);
		std::cout << "write mobile" << "\n";
		getline(cin, person);
		name.push_back(person);
		std::cout << "write adress" << "\n";
		getline(cin, person);
		name.push_back(person);
		std::cout << "write birth" << "\n";
		getline(cin, person);
		name.push_back(person);
		std::cout << "write somthing else" << "\n";
		getline(cin, person);
		name.push_back(person);

	

	for (int i = 0; i < name.size(); i++) {

		output << name[i] << "\n";


	}
	output.close();

	for (int i = 0; i < name.size(); i++) {

		input >> name[i];

	}
	input.close();
	

}
void display() {
	
	string name, lastname, mobile, person, somthing, birth, adress;
	
	
	ifstream out;
	out.open("data.txt");
	
		while (getline(out, name), getline(out, lastname), getline(out, mobile), getline(out, adress), getline(out, birth), getline(out, somthing))
		{
            

			cout << " Name:: "<< name << endl;
			cout << " Lastname:: "<< lastname << endl;
			cout << " Mobile:: "<< mobile << endl;
			cout << " adress:: "<< adress << endl;
			cout << " birth:: "<< birth << endl;
		    cout<<  " somthing else:: "<< somthing<< endl;
			

	}
	
	
	out.close();


}

