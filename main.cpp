#include <iostream> 
#include "Source1.h"
#include "search.h"
#include <string>
#include <fstream>
#include <vector>




using namespace std;




int main()
{
	
	int x;
	
	do {
	std::cout << "Phonebook" << endl;
	std::cout << "----------" << endl;
	std::cout << "|meny|" << endl;
	std::cout << "-------------" << endl;
	std::cout << "(1).Addlist |"  << endl;
	std::cout << "(2).Display |" << endl;
	std::cout << "(3).Search  |" << endl;
	std::cout << "()4.Delete  |" << endl;
	std::cout << "()5.Exit    |" << endl;
	std::cout << "-------------" << endl;
	cin >> x;


	
		switch (x) {
		case 1:
			
			while (x != 0) {
				putname();
				std::cout << "again ?" << endl;
				std::cout << "If yes click[1] and If no click[0]" << endl;

				cin >> x;
				if (x == 0) {
					break;
				}
			}



		case 2:
			while (x != 0) {
				display();
				std::cout << "again ?" << endl;
				std::cout << "If yes click[1] and If no click[0]" << endl;

				cin >> x;
				
				if (x == 0) {
					break;
				}
			}
		
		
		
           case 3:
			   

			 
			   while (x != 0) {
				  
				   search();
				   std::cout << "again ?" << endl;
				   std::cout << "If yes click[1] and If no click[0]" << endl;

				   cin >> x;

				   if (x == 0) {
					   break;
				   }
			   }
			   
			

		   case 4:
			  
			   while (x != 0) {

				   Delete();
				   std::cout << "again ?" << endl;
				   std::cout << "If yes click[1] and If no click[0]" << endl;

				   cin >> x;

				   if (x == 0) {
					   break;
				   }
			   }
			  
		   break;
	}


	} while ( x != 5);

	
	system("pause");

	return 0;
}

