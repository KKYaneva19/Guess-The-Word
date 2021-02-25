#include<iostream>
#include<string>
using namespace std;

int number;
string word;
string answer1 = "Biology";
string answer2 = "Chemistry";
string answer3 = "Art";
string answer4 = "Music";
string answer5 = "Physics";
string answer6 = "Pe";
string answer7 = "Maths";
string answer8 = "Programming";
string answer9 = "Literature";
string answer10 = "History";
string answer11 = "Geography";

string answer1_2 = "London";
string answer2_2 = "Tokyo";
string answer3_2 = "Paris";
string answer4_2 = "Rome";
string answer5_2 = "Washington";
string answer6_2 = "Berlin";
string answer7_2 = "Buenos Aires";
string answer8_2 = "Bangkok";
string answer9_2 = "Cape Town";

int counter = 0;
int correctWordsNumber = 0;

//Draw row for the first word
void drawFirstRow(string word1)
{

	cout << endl;
	cout << "                       -----------------------------" << endl;
	cout << "   1:                  | "; cout << word1[0]; cout << " | "; cout << word1[1]; cout << " | "; cout << word1[2]; cout << " | "; cout << word1[3]; cout << " | "; cout << word1[4]; cout << " | "; cout << word1[5]; cout << " | "; cout << word1[6]; cout << " | " << endl;
	cout << "                       -----------------------------";
}

//Draw row for the second word
void drawSecondRow(string word2)
{

	cout << endl;
	cout << "                       -------------------------------------" << endl;
	cout << "  2:                   | "; cout << word2[0]; cout << " | "; cout << word2[1]; cout << " | "; cout << word2[2]; cout << " | "; cout << word2[3]; cout << " | "; cout << word2[4]; cout << " | "; cout << word2[5]; cout << " | "; cout << word2[6]; cout << " | ";  cout << word2[7]; cout << " | ";  cout << word2[8]; cout << " | " << endl;
	cout << "                       -------------------------------------";
}

//Draw row for the third word
void drawThirdRow(string word3)
{

	cout << endl;
	cout << "                       -------------" << endl;
	cout << "  3:                   | "; cout << word3[0]; cout << " | "; cout << word3[1]; cout << " | "; cout << word3[2]; cout << " | " << endl;
	cout << "                       -------------";
}

//Draw row for the forth word
void drawForthRow(string word4)
{

	cout << endl;
	cout << "                       ---------------------" << endl;
	cout << "  4:                   | "; cout << word4[0]; cout << " | "; cout << word4[1]; cout << " | "; cout << word4[2]; cout << " | "; cout << word4[3]; cout << " | "; cout << word4[4]; cout << " | " << endl;
	cout << "                       ---------------------";
}

//Draw row for the fifth word
void drawFifthRow(string word5)
{

	cout << endl;
	cout << "                       -----------------------------" << endl;
	cout << "  5:                   | "; cout << word5[0]; cout << " | "; cout << word5[1]; cout << " | "; cout << word5[2]; cout << " | "; cout << word5[3]; cout << " | "; cout << word5[4]; cout << " | "; cout << word5[5]; cout << " | "; cout << word5[6]; cout << " | " << endl;
	cout << "                       -----------------------------";
}

//Draw row for the sixth word
void drawSixthRow(string word6)
{

	cout << endl;
	cout << "                       ---------" << endl;
	cout << "  6:                   | "; cout << word6[0]; cout << " | "; cout << word6[1]; cout << " | " << endl;
	cout << "                       ---------";
}

//Draw row for the seventh word
void drawSeventhRow(string word7)
{

	cout << endl;
	cout << "                      ---------------------" << endl;
	cout << "  7:                  | "; cout << word7[0]; cout << " | "; cout << word7[1]; cout << " | ";  cout << word7[2]; cout << " | "; cout << word7[3]; cout << " | "; cout << word7[4]; cout << " | " << endl;
	cout << "                      ---------------------";
}

//Draw row for the eight word
void drawEightRow(string word8)
{

	cout << endl;
	cout << "                      -------------------------------------------------" << endl;
	cout << "  8:                  | "; cout << word8[0]; cout << " | "; cout << word8[1]; cout << " | "; cout << word8[2]; cout << " | "; cout << word8[3]; cout << " | "; cout << word8[4]; cout << " | "; cout << word8[5]; cout << " | "; cout << word8[6]; cout << " | ";  cout << word8[7]; cout << " | ";  cout << word8[8]; cout << " | "; cout << word8[8]; cout << " | "; cout << word8[9]; cout << " | "; cout << word8[10]; cout << " | " << endl;
	cout << "                      -------------------------------------------------";
}

//Draw row for the ninth word
void drawNinthRow(string word9)
{

	cout << endl;
	cout << "                      -----------------------------------------" << endl;
	cout << "  9:                  | "; cout << word9[0]; cout << " | "; cout << word9[1]; cout << " | "; cout << word9[2]; cout << " | "; cout << word9[3]; cout << " | "; cout << word9[4]; cout << " | "; cout << word9[5]; cout << " | "; cout << word9[6]; cout << " | ";  cout << word9[7]; cout << " | ";  cout << word9[8]; cout << " | "; cout << word9[9]; cout << " | " << endl;
	cout << "                      -----------------------------------------";
}

//Draw row for the tenth word
void drawTenthRow(string word10)
{

	cout << endl;
	cout << "                      -----------------------------" << endl;
	cout << "  10:                 | "; cout << word10[0]; cout << " | "; cout << word10[1]; cout << " | "; cout << word10[2]; cout << " | "; cout << word10[3]; cout << " | "; cout << word10[4]; cout << " | "; cout << word10[5]; cout << " | "; cout << word10[6]; cout << " | " << endl;
	cout << "                      -----------------------------";
}

//Draw row for the eleventh word
void drawEleventhRow(string word11)
{

	cout << endl;
	cout << "                      --------------------------------------" << endl;
	cout << "  11:                 | "; cout << word11[0]; cout << " | "; cout << word11[1]; cout << " | "; cout << word11[2]; cout << " | "; cout << word11[3]; cout << " | "; cout << word11[4]; cout << " | "; cout << word11[5]; cout << " | "; cout << word11[6]; cout << " | ";  cout << word11[7]; cout << " | ";  cout << word11[8]; cout << " | " << endl;
	cout << "                      --------------------------------------";
}

//Function to check if what you typed is the correct word (for the rest of the words)
void checkWords(string word, string wantedWord)
{
	getline(cin, word);
	for (size_t j = 0; j < wantedWord.size(); j++)
	{
		if (word == "")
		{
			getline(cin, word);

		}
		if (word[j] == wantedWord[j]) //counts how many letters you've typed are correct
		{
			counter++;
		}
		while (word[j] != wantedWord[j]) //checks if the letter you've typed is wrong
		{
			if (j + 1 == 1)
			{
				cout << j + 1 << "st letter is incorrect!";
				cin >> word[j];

			}
			if (j + 1 == 2)
			{
				cout << j + 1 << "nd letter is incorrect!";
				cin >> word[j];

			}
			if (j + 1 > 2)
			{
				cout << j + 1 << "th letter is incorrect!" << endl;
				cin >> word[j];
			}
			counter++;

		}
	}
}

void changeQuestions1()
{
	switch (correctWordsNumber)
	{
	case 0:
		//Shows the question and expects you to write the correct answer
		cout << "Question 1: Which is the natural science that studies life and living organisms?" << endl;
		cout << "Type word: ";
		break;

	case 1:
		cout << "Question 2: Which is the science subject involved with elements and compounds composed of atoms, molecules and ions?" << endl;
		cout << "Type word: ";
		break;

	case 2:
		cout << "Question 3: Which is the creative subject, where we express imaginative or technical skill while drawing?" << endl;
		cout << "Type word: ";
		break;

	case 3:
		cout << "Question 4: Which is the subject, where we do research and learn about music?" << endl;
		cout << "Type word: ";
		break;

	case 4:
		cout << "Question 5: Which is the scientific discipline which deals with matter and its relation to energy?" << endl;
		cout << "Type word: ";
		break;
	case 5:
		cout << "Question 6: The school subject, where we are taught sport and physical activity, is?" << endl;
		cout << "Type word: ";
		break;

	case 6:
		cout << "Question 7: The subject, where we study of numbers, shapes and patterns is?" << endl;
		cout << "Type word: ";
		break;

	case 7:
		cout << "Question 8: The subject, where we are taught how to solve problems using programming languages is?" << endl;
		cout << "Type word: ";
		break;
	case 8:
		cout << "Question 9: The subject, where we study about different authors and their work? " << endl;
		cout << "Type word: ";
		break;
	case 9:
		cout << "Question 10: The subjects, where we study about the past is?" << endl;
		cout << "Type word: ";
		break;
	case 10:
		cout << "Question 11: The subject, where we study about the Earth and the other planets is?" << endl;
		cout << "Type word: ";
		break;
	}
}

void changeWords1() //goes from one word to another
{
	changeQuestions1();
	if (correctWordsNumber == 0) //checks how many correct words you have found
	{
		checkWords(word, wantedWord1);
		correctWordsNumber = 1; //shows how many words you've found
		if (counter >= wantedWord1.size()) //checks if you've typed the whole word correctly
		{
			drawFirstRow(wantedWord1); //shows the correct row
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;

	changeQuestions1();
	if (correctWordsNumber == 1) //checks how many correct words you have found
	{
		checkWords(word, wantedWord2);
		correctWordsNumber = 2; //shows how many words you've found

		if (counter >= wantedWord2.size()) //checks if you've typed the whole word correctly
		{
			drawSecondRow(wantedWord2); //shows the correct row
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions1();
	if (correctWordsNumber == 2) //checks how many correct words you have found
	{
		checkWords(word, wantedWord3);
		correctWordsNumber = 3; //shows how many words you've found

		if (counter >= wantedWord3.size()) //checks if you've typed the whole word correctly
		{
			drawThirdRow(wantedWord3); //shows the correct row
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions1();
	if (correctWordsNumber == 3) //checks how many correct words you have found
	{
		checkWords(word, wantedWord4);
		correctWordsNumber = 4; //shows how many words you've found

		if (counter >= wantedWord4.size()) //checks if you've typed the whole word correctly
		{
			drawForthRow(wantedWord4); //shows the correct row
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions1();
	if (correctWordsNumber == 4) //checks how many correct words you have found
	{
		checkWords(word, wantedWord5);
		correctWordsNumber = 5; //shows how many words you've found

		if (counter >= wantedWord5.size()) //checks if you've typed the whole word correctly
		{
			drawFifthRow(wantedWord5); //shows the correct row
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions1();
	if (correctWordsNumber == 5) //checks how many correct words you have found
	{
		checkWords(word, wantedWord6);
		correctWordsNumber = 6; //shows how many words you've found

		if (counter >= wantedWord6.size()) //checks if you've typed the whole word correctly
		{
			drawSixthRow(wantedWord6); //shows the correct row
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions1();
	if (correctWordsNumber == 6) //checks how many correct words you have found
	{
		checkWords(word, wantedWord7);
		correctWordsNumber = 7; //shows how many words you've found

		if (counter >= wantedWord7.size()) //checks if you've typed the whole word correctly
		{
			drawSeventhRow(wantedWord7); //shows the correct row
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions1();
	if (correctWordsNumber == 7) //checks how many correct words you have found
	{
		checkWords(word, wantedWord8);
		correctWordsNumber = 8; //shows how many words you've found

		if (counter >= wantedWord8.size()) //checks if you've typed the whole word correctly
		{
			drawEightRow(wantedWord8); //shows the correct row
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions1();
	if (correctWordsNumber == 8) //checks how many correct words you have found
	{
		checkWords(word, wantedWord9);
		correctWordsNumber = 9; //shows how many words you've found

		if (counter >= wantedWord9.size()) //checks if you've typed the whole word correctly
		{
			drawNinthRow(wantedWord9); //shows the correct row
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions1();
	if (correctWordsNumber == 9) //checks how many correct words you have found
	{
		checkWords(word, wantedWord10);
		correctWordsNumber = 10; //shows how many words you've found

		if (counter >= wantedWord10.size()) //checks if you've typed the whole word correctly
		{
			drawTenthRow(wantedWord10); //shows the correct row
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions1();
	if (correctWordsNumber == 10) //checks how many correct words you have found
	{
		checkWords(word, wantedWord11);
		correctWordsNumber = 0; //restarts counter

		if (counter >= wantedWord11.size()) //checks if you've typed the whole word correctly
		{
			drawEleventhRow(wantedWord11); //shows the correct row
			word = word.empty();
			counter = 0;
		}
	}
}

///game 2
void drawFirstRow_2(string word1)
{

	cout << endl;
	cout << "                      -------------------------" << endl;
	cout << "  1:                  | "; cout << word1[0]; cout << " | "; cout << word1[1]; cout << " | "; cout << word1[2]; cout << " | "; cout << word1[3]; cout << " | "; cout << word1[4]; cout << " | "; cout << word1[5]; cout << " | " << endl;
	cout << "                      -------------------------";
}

//Draw row for the second word
void drawSecondRow_2(string word2)
{

	cout << endl;
	cout << "                      ---------------------" << endl;
	cout << "  2:                  | "; cout << word2[0]; cout << " | "; cout << word2[1]; cout << " | "; cout << word2[2]; cout << " | "; cout << word2[3]; cout << " | "; cout << word2[4]; cout << " | " << endl;
	cout << "                      ---------------------" << endl;
}

//Draw row for the third word
void drawThirdRow_2(string word3)
{

	cout << endl;
	cout << "                      ---------------------" << endl;
	cout << "  3:                  | "; cout << word3[0]; cout << " | "; cout << word3[1]; cout << " | "; cout << word3[2]; cout << " | "; cout << word3[3]; cout << " | "; cout << word3[4]; cout << " | " << endl;
	cout << "                      ---------------------";
}

//Draw row for the forth word
void drawForthRow_2(string word4)
{

	cout << endl;
	cout << "                      -----------------" << endl;
	cout << "  4:                  | "; cout << word4[0]; cout << " | "; cout << word4[1]; cout << " | "; cout << word4[2]; cout << " | "; cout << word4[3]; cout << " | " << endl;
	cout << "                      -----------------";
}

//Draw row for the fifth word
void drawFifthRow_2(string word5)
{

	cout << endl;
	cout << "                      -----------------------------------------" << endl;
	cout << "  5:                  | "; cout << word5[0]; cout << " | "; cout << word5[1]; cout << " | "; cout << word5[2]; cout << " | "; cout << word5[3]; cout << " | "; cout << word5[4]; cout << " | "; cout << word5[5]; cout << " | "; cout << word5[6]; cout << " | ";  cout << word5[7]; cout << " | ";  cout << word5[8]; cout << " | ";  cout << word5[9]; cout << " | " << endl;
	cout << "                      -----------------------------------------";
}

//Draw row for the sixth word
void drawSixthRow_2(string word6)
{

	cout << endl;
	cout << "                      -------------------------" << endl;
	cout << "  6:                  | "; cout << word6[0]; cout << " | "; cout << word6[1]; cout << " | "; cout << word6[2]; cout << " | "; cout << word6[3]; cout << " | "; cout << word6[4]; cout << " | "; cout << word6[5]; cout << " | " << endl;
	cout << "                      -------------------------";
}

//Draw row for the seventh word
void drawSeventhRow_2(string word7)
{

	cout << endl;
	cout << "                      -----------------------------------------------------" << endl;
	cout << "  7:                  | "; cout << word7[0]; cout << " | "; cout << word7[1]; cout << " | "; cout << word7[2]; cout << " | "; cout << word7[3]; cout << " | "; cout << word7[4]; cout << " | "; cout << word7[5]; cout << " | "; cout << word7[6]; cout << " | ";  cout << word7[7]; cout << " | ";  cout << word7[8]; cout << " | "; cout << word7[8]; cout << " | "; cout << word7[9]; cout << " | "; cout << word7[10]; cout << " | "; cout << word7[11]; cout << " | " << endl;
	cout << "                      -----------------------------------------------------";
}

//Draw row for the eight word
void drawEightRow_2(string word8)
{

	cout << endl;
	cout << "                      -----------------------------" << endl;
	cout << "  8:                  | "; cout << word8[0]; cout << " | "; cout << word8[1]; cout << " | "; cout << word8[2]; cout << " | "; cout << word8[3]; cout << " | "; cout << word8[4]; cout << " | "; cout << word8[5]; cout << " | "; cout << word8[6]; cout << " | " << endl;
	cout << "                      -----------------------------";
}

//Draw row for the ninth word
void drawNinthRow_2(string word9)
{

	cout << endl;
	cout << "                      -------------------------------------" << endl;
	cout << "  9:                  | "; cout << word9[0]; cout << " | "; cout << word9[1]; cout << " | "; cout << word9[2]; cout << " | "; cout << word9[3]; cout << " | "; cout << word9[4]; cout << " | "; cout << word9[5]; cout << " | "; cout << word9[6]; cout << " | ";  cout << word9[7]; cout << " | ";  cout << word9[8]; cout << " | " << endl;
	cout << "                      -------------------------------------";
}


void changeQuestions2()
{
	switch (correctWordsNumber)
	{
	case 0:
		//Shows the question and expects you to write the correct answer
		system("CLS");
		cout << "Question 1: The capital and the largest city of England is?" << endl;
		cout << "Type word: ";
		break;

	case 1:
		cout << "Question 2: The capital city of Japan is?" << endl;
		cout << "Type word: ";
		break;

	case 2:
		cout << "Question 3: The capital and the most popular city of France is?" << endl;
		cout << "Type word: ";
		break;

	case 3:
		cout << "Question 4: The capital of Italy is?" << endl;
		cout << "Type word: ";
		break;

	case 4:
		cout << "Question 5: The capital city of the USA is? (named after their first president)" << endl;
		cout << "Type word: ";
		break;

	case 5:
		cout << "Question 6: The capital and largest city of Germany is?" << endl;
		cout << "Type word: ";
		break;

	case 6:
		cout << "Question 7: The capital and largest city of Argentina is?" << endl;
		cout << "Type word: ";
		break;

	case 7:
		cout << "Question 8: The capital and most populous city of Thailand is?" << endl;
		cout << "Type word: ";
		break;

	case 8:
		cout << "Question 9: The capital of South Africa is?" << endl;
		cout << "Type word: ";
		break;
	}
}

void changeWords2() //goes from one word to another
{
	changeQuestions2();
	if (correctWordsNumber == 0) //checks how many correct words you have found
	{
		checkWords(word, wantedWord1_2);
		correctWordsNumber = 1; //shows how many words you've found

		if (counter >= wantedWord1_2.size()) //checks if you've typed the whole word correctly
		{
			drawFirstRow_2(wantedWord1_2); //shows the correct row
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions2();
	if (correctWordsNumber == 1) //checks how many correct words you have found
	{
		checkWords(word, wantedWord2_2);
		correctWordsNumber = 2; //shows how many words you've found

		if (counter >= wantedWord2_2.size()) //checks if you've typed the whole word correctly
		{
			drawSecondRow_2(wantedWord2_2); //shows the correct row
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions2();
	if (correctWordsNumber == 2) //checks how many correct words you have found
	{
		checkWords(word, wantedWord3_2);
		correctWordsNumber = 3; //shows how many words you've found

		if (counter >= wantedWord3_2.size()) //checks if you've typed the whole word correctly
		{
			drawThirdRow_2(wantedWord3_2); //shows the correct row
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions2();
	if (correctWordsNumber == 3) //checks how many correct words you have found
	{
		checkWords(word, wantedWord4_2);
		correctWordsNumber = 4; //shows how many words you've found

		if (counter >= wantedWord4_2.size()) //checks if you've typed the whole word correctly
		{
			drawForthRow_2(wantedWord4_2); //shows the correct row
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions2();
	if (correctWordsNumber == 4) //checks how many correct words you have found
	{
		checkWords(word, wantedWord5_2);
		correctWordsNumber = 5; //shows how many words you've found

		if (counter >= wantedWord5_2.size()) //checks if you've typed the whole word correctly
		{
			drawFifthRow_2(wantedWord5_2); //shows the correct row
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions2();
	if (correctWordsNumber == 5) //checks how many correct words you have found
	{
		checkWords(word, wantedWord6_2);
		correctWordsNumber = 6; //shows how many words you've found

		if (counter >= wantedWord6_2.size()) //checks if you've typed the whole word correctly
		{
			drawSixthRow_2(wantedWord6_2); //shows the correct row
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions2();
	if (correctWordsNumber == 6) //checks how many correct words you have found
	{
		checkWords(word, wantedWord7_2);
		correctWordsNumber = 7; //shows how many words you've found

		if (counter >= wantedWord7_2.size()) //checks if you've typed the whole word correctly
		{
			drawSeventhRow_2(wantedWord7_2); //shows the correct row
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions2();
	if (correctWordsNumber == 7) //checks how many correct words you have found
	{
		checkWords(word, wantedWord8_2);
		correctWordsNumber = 8; //shows how many words you've found

		if (counter >= wantedWord8_2.size()) //checks if you've typed the whole word correctly
		{
			drawEightRow_2(wantedWord8_2); //shows the correct row
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions2();
	if (correctWordsNumber == 8) //checks how many correct words you have found
	{
		checkWords(word, wantedWord9_2);
		correctWordsNumber = 9; //shows how many words you've found

		if (counter >= wantedWord9_2.size()) //checks if you've typed the whole word correctly
		{
			drawNinthRow_2(wantedWord9_2); //shows the correct row
			word = word.empty();
			counter = 0;
		}
	}

}

void game()
{

	string newGame;
	system("CLS");
	changeWords1(); //main function
	system("CLS");

	cout << endl << endl << "                    Congratulations!!! You Won" << endl << endl;
	cout << endl << "                    Do you want to start a new game: ";

	getline(cin, newGame);

	if (newGame == "Yes")
	{

		changeWords2(); //main function

		cout << endl << "                 Congratulations!!! You Won ";
		system("PAUSE");

	}

	if (newGame == "No")
	{
		system("PAUSE");
	}
	else if (newGame != "No" || newGame != "Yes") {
		cout << " Incorrect input!";
	}
	system("PAUSE");
}

void menu() {
	int choice;
	cout << "                                      ********** Guess The Word **********\n" << endl;
	cout << "                                                 1. Start Game\n" << endl;
	cout << "                                                  2. Rules\n" << endl;
	cout << "                                                   3. Quit\n" << endl;
	cout << "                                           Please select your choice!";
	cin >> choice;
	if (choice == 1) {
		game();
	}
	else if (choice == 2) {
		system("CLS");
		cout << "1.There can't be more than one aswear.\n2.U must fill all the given space.\n3.U must use only English.\n4.There can't be any numbers or symbols.\n5.Each first letter must be in capital.\n";
		system("PAUSE");
		system("CLS");
		menu();
	}
	else if (choice == 3) {
		system("PAUSE");
	}
}

int main() {

	menu();
}
