#include <iostream>
#include <string>
using namespace std;

int main() {
	int year;
	string country, animal, funnyname, vehicle, place, food, color, movement, object, charactarname;
	cout << "Give me some data and I will predict your future!\n";
	// Getting input from user
	cout << "Enter a year in future: ";
	cin >> year;
	cout << "\nEnter the name of a country: ";
	cin.ignore();
	getline(cin, country);
	cout << "\nEnter your favourite vehicle: ";
	getline(cin, vehicle);
	cout << "\nEnter a type of animal: ";
	getline(cin, animal);
	cout << "\nEnter a funny name: ";
	getline(cin, funnyname);
	cout << "\nEnter a place where you like to go: ";
	getline(cin, place);
	cout << "\nEnter a type of food: ";
	getline(cin, food);
	cout << "\nEnter a color: ";
	getline(cin, color);
	cout << "\nEnter some sort of movement (dosen't end with ing): ";
	getline(cin, movement);
	cout << "\nEnter an object: ";
	getline(cin, object);
	cout << "\nEnter a character's name: ";
	getline(cin, charactarname);
	// Displaying the output
	cout << "In " << year << ", you will go to " << country << " by " << vehicle << ".\nYou will be gifted a " << animal << " that you decide to name " << funnyname << "." " \nIn " << country << ", you went to the " << place << "." " \nAfterwards you will get some " << food << ", but this place was different because the " << food << " was " << color << "." " \nThis will make you so happy, that you will start to " << movement << "." " \nLastly, you'll go to a store and buy a " << object << ", then you will name it " << charactarname << ".";

}