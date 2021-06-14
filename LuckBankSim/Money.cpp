#include "Money.h"
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include <vector>
void Money::draw(GUI& gui)
{
	gui.drawBankNotes();
}

bool Money::LoadBankNotes()
{
	Money money;
	fstream file;
	string line, bankNoteType, bankNoteld, numOfBankNotes, image;
	file.open("BankOfLuckFiles\\BankNoteInfo\\BankNoteInfo.txt", ios::in);
	if (file.fail()) {
		return false;
	}
	else {
		while (getline(file, line)) {
			stringstream S(line);
			getline(S, bankNoteType, ',');
			money.BankNoteType.push_back(bankNoteType);
			getline(S, bankNoteld, ',');
			money.BankNoteld.push_back(stoi(bankNoteld));
			getline(S, numOfBankNotes, ',');
			money.NumOfBankNotes.push_back(stoi(numOfBankNotes));
			getline(S, image, ',');
			money.ImageLocation.push_back(image);
		}
	}
}

vector <string> Money::getBankNoteType() const
{
	return BankNoteType;
}
