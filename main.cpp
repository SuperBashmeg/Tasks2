#include "struct.h"

Car cars[10] = {
	Car("AA0000AA", "BMW", "X5", Color::BLACK),
	Car("BB1111BB", "Audi", "A6", Color::WHITE),
	Car("CC2222CC", "Mercedes", "S500", Color::RED),
	Car("DD3333DD", "Toyota", "Corolla", Color::BLUE),
	Car("EE4444EE", "Nissan", "GTR", Color::GREEN),
	Car("FF5555FF", "Mazda", "RX-7", Color::YELLOW),
	Car("GG6666GG", "Subaru", "Impreza", Color::ORANGE),
	Car("HH7777HH", "Honda", "Civic", Color::PURPLE),
	Car("II8888II", "Ford", "Mustang", Color::BROWN),
	Car("JJ9999JJ", "Chevrolet", "Camaro", Color::PINK)
};

int find(string numberPlate) {
	for (int i = 0; i < 10; i++) {
		if (cars[i].getNumberPlate() == numberPlate) {
			return i;
		}
	}
	return -1;
}

void printCars() {
	for (int i = 0; i < 10; i++) {
		cout << "Car " << i + 1 << endl;
		cars[i].print();
		cout << endl;
	}
}

void printColors() {
	cout << "0. Red" << endl;
	cout << "1. Green" << endl;
	cout << "2. Blue" << endl;
	cout << "3. Yellow" << endl;
	cout << "4. Black" << endl;
	cout << "5. White" << endl;
	cout << "6. Orange" << endl;
	cout << "7. Purple" << endl;
	cout << "8. Pink" << endl;
	cout << "9. Brown" << endl;

}

int main()
{
	while (true) {
		for (int i = 0; i < 10; i++)
		{
			cout << "Car " << i + 1 << endl;
			cars[i].print();
			cout << endl;
		}

		cout << "Enter number plate: ";
		string numberPlate;
		cin >> numberPlate;
		int carId = find(numberPlate);
		if (cars[carId].getNumberPlate() == "Undefined number plate") {
			cout << "Car not found!" << endl;
			continue;
		}
		else {
			cout << "_____________________________";
			cout << endl << endl;
			cout << "Car found!" << endl;
			cars[carId].print();
		}

		//change menu
		cout << "Select parameter to change: " << endl;
		cout << "1. Number plate" << endl;
		cout << "2. Brand" << endl;
		cout << "3. Model" << endl;
		cout << "4. Color" << endl;
		cout << "5. Exit" << endl;
		int choice;
		cin >> choice;
		switch (choice) {
			case 1:
			{
				cout << "Enter new number plate: ";
				string newNumberPlate;
				cin >> newNumberPlate;
				cars[carId].setNumberPlate(newNumberPlate);
				
			} break;
			case 2:
			{
				cout << "Enter new brand: ";
				string newBrand;
				cin >> newBrand;
				cars[carId].setBrand(newBrand);
				
			} break;
			case 3:
			{
				cout << "Enter new model: ";
				string newModel;
				cin >> newModel;
				cars[carId].setModel(newModel);
				
			} break;
			case 4:
			{
				cout << "Enter new color: ";
				printColors();
				int newColor;
				cin >> newColor;
				cars[carId].setColor(static_cast<Color>(newColor));
			} break;
			case 5:
			{
				return 0;
			}
		}
	}
	return 0;
}