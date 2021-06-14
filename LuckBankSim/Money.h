#pragma once
#include "BoardObjects\Drawable.h"
#include <vector>
#include <string>
class Money : public Drawable
{
	vector <string> BankNoteType;
	vector <int> BankNoteld;
	vector <int> NumOfBankNotes;
	vector <string> ImageLocation;

public:
	void draw(GUI& gui) override;
	bool LoadBankNotes();
	vector <string> getBankNoteType() const;
};

