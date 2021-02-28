#include<iostream>
#include<string>
using namespace std;

int number;
string word;
string answer1_1 = "Biology";
string answer2_1 = "Chemistry";
string answer3_1 = "Art";
string answer4_1 = "Music";
string answer5_1 = "Physics";
string answer6_1 = "Pe";
string answer7_1 = "Maths";
string answer8_1 = "Programming";
string asnwer9_1 = "Literature";
string answer10_1 = "History";
string answer11_1 = "Geography";

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

//game 1
//Draw rows
void drawFirstRow_1(string word1)
{

	cout << endl;
	cout << "                       -----------------------------" << endl;
	cout << "   1:                  | "; cout << word1[0]; cout << " | "; cout << word1[1]; cout << " | "; cout << word1[2]; cout << " | "; cout << word1[3]; cout << " | "; cout << word1[4]; cout << " | "; cout << word1[5]; cout << " | "; cout << word1[6]; cout << " | " << endl;
	cout << "                       -----------------------------";
}


void drawSecondRow_1(string word2)
{

	cout << endl;
	cout << "                       -------------------------------------" << endl;
	cout << "  2:                   | "; cout << word2[0]; cout << " | "; cout << word2[1]; cout << " | "; cout << word2[2]; cout << " | "; cout << word2[3]; cout << " | "; cout << word2[4]; cout << " | "; cout << word2[5]; cout << " | "; cout << word2[6]; cout << " | ";  cout << word2[7]; cout << " | ";  cout << word2[8]; cout << " | " << endl;
	cout << "                       -------------------------------------";
}


void drawThirdRow_1(string word3)
{

	cout << endl;
	cout << "                       -------------" << endl;
	cout << "  3:                   | "; cout << word3[0]; cout << " | "; cout << word3[1]; cout << " | "; cout << word3[2]; cout << " | " << endl;
	cout << "                       -------------";
}


void drawForthRow_1(string word4)
{

	cout << endl;
	cout << "                       ---------------------" << endl;
	cout << "  4:                   | "; cout << word4[0]; cout << " | "; cout << word4[1]; cout << " | "; cout << word4[2]; cout << " | "; cout << word4[3]; cout << " | "; cout << word4[4]; cout << " | " << endl;
	cout << "                       ---------------------";
}


void drawFifthRow_1(string word5)
{

	cout << endl;
	cout << "                       -----------------------------" << endl;
	cout << "  5:                   | "; cout << word5[0]; cout << " | "; cout << word5[1]; cout << " | "; cout << word5[2]; cout << " | "; cout << word5[3]; cout << " | "; cout << word5[4]; cout << " | "; cout << word5[5]; cout << " | "; cout << word5[6]; cout << " | " << endl;
	cout << "                       -----------------------------";
}


void drawSixthRow_1(string word6)
{

	cout << endl;
	cout << "                       ---------" << endl;
	cout << "  6:                   | "; cout << word6[0]; cout << " | "; cout << word6[1]; cout << " | " << endl;
	cout << "                       ---------";
}


void drawSeventhRow_1(string word7)
{

	cout << endl;
	cout << "                      ---------------------" << endl;
	cout << "  7:                  | "; cout << word7[0]; cout << " | "; cout << word7[1]; cout << " | ";  cout << word7[2]; cout << " | "; cout << word7[3]; cout << " | "; cout << word7[4]; cout << " | " << endl;
	cout << "                      ---------------------";
}


void drawEightRow_1(string word8)
{

	cout << endl;
	cout << "                      -------------------------------------------------" << endl;
	cout << "  8:                  | "; cout << word8[0]; cout << " | "; cout << word8[1]; cout << " | "; cout << word8[2]; cout << " | "; cout << word8[3]; cout << " | "; cout << word8[4]; cout << " | "; cout << word8[5]; cout << " | "; cout << word8[6]; cout << " | ";  cout << word8[7]; cout << " | ";  cout << word8[8]; cout << " | "; cout << word8[8]; cout << " | "; cout << word8[9]; cout << " | "; cout << word8[10]; cout << " | " << endl;
	cout << "                      -------------------------------------------------";
}


void drawNinthRow_1(string word9)
{

	cout << endl;
	cout << "                      -----------------------------------------" << endl;
	cout << "  9:                  | "; cout << word9[0]; cout << " | "; cout << word9[1]; cout << " | "; cout << word9[2]; cout << " | "; cout << word9[3]; cout << " | "; cout << word9[4]; cout << " | "; cout << word9[5]; cout << " | "; cout << word9[6]; cout << " | ";  cout << word9[7]; cout << " | ";  cout << word9[8]; cout << " | "; cout << word9[9]; cout << " | " << endl;
	cout << "                      -----------------------------------------";
}


void drawTenthRow_1(string word10)
{

	cout << endl;
	cout << "                      -----------------------------" << endl;
	cout << "  10:                 | "; cout << word10[0]; cout << " | "; cout << word10[1]; cout << " | "; cout << word10[2]; cout << " | "; cout << word10[3]; cout << " | "; cout << word10[4]; cout << " | "; cout << word10[5]; cout << " | "; cout << word10[6]; cout << " | " << endl;
	cout << "                      -----------------------------";
}


void drawEleventhRow_1(string word11)
{

	cout << endl;
	cout << "                      --------------------------------------" << endl;
	cout << "  11:                 | "; cout << word11[0]; cout << " | "; cout << word11[1]; cout << " | "; cout << word11[2]; cout << " | "; cout << word11[3]; cout << " | "; cout << word11[4]; cout << " | "; cout << word11[5]; cout << " | "; cout << word11[6]; cout << " | ";  cout << word11[7]; cout << " | ";  cout << word11[8]; cout << " | " << endl;
	cout << "                      --------------------------------------";
}

//Function to check if what you typed is the correct word (for the rest of the words)
void check(string word, string answer)
{
	getline(cin, word);
	for (size_t j = 0; j < answer.size(); j++)
	{
		if (word == "")
		{
			getline(cin, word);

		}
		if (word[j] == answer[j]) //counts how many letters you've typed are correct
		{
			counter++;
		}
		while (word[j] != answer[j]) //checks if the letter you've typed is wrong
		{
			if (j + 1 == 1)
			{
				cout << "The " << j + 1 << "st letter is incorrect!" << endl;
				cin >> word[j];

			}
			if (j + 1 == 2)
			{
				cout << "The " << j + 1 << "nd letter is incorrect!" << endl;
				cin >> word[j];

			}
			if (j + 1 == 3)
			{
				cout << "The " << j + 1 << "rd letter is incorrect!" << endl;
				cin >> word[j];

			}
			if (j + 1 > 3)
			{
				cout << "The " << j + 1 << "th letter is incorrect!" << endl;
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
		cout << "Question 8: The subject, where we are taught how to solve problems using programming language is?" << endl;
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
	cout << "                                          Level 1: School Subjects" << endl << endl << endl;
	changeQuestions1();
	if (correctWordsNumber == 0) //checks how many correct words you have found
	{
		check(word, answer1_1);
		correctWordsNumber = 1; //shows how many words you've found
		if (counter >= answer1_1.size()) //checks if you've typed the whole word correctly
		{
			drawFirstRow_1(answer1_1); //shows the correct row
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;

	changeQuestions1();
	if (correctWordsNumber == 1)
	{
		check(word, answer2_1);
		correctWordsNumber = 2;

		if (counter >= answer2_1.size())
		{
			drawSecondRow_1(answer2_1);
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions1();
	if (correctWordsNumber == 2)
	{
		check(word, answer3_1);
		correctWordsNumber = 3;

		if (counter >= answer3_1.size())
		{
			drawThirdRow_1(answer3_1);
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions1();
	if (correctWordsNumber == 3)
	{
		check(word, answer4_1);
		correctWordsNumber = 4;

		if (counter >= answer4_1.size())
		{
			drawForthRow_1(answer4_1);
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions1();
	if (correctWordsNumber == 4)
	{
		check(word, answer5_1);
		correctWordsNumber = 5;

		if (counter >= answer5_1.size())
		{
			drawFifthRow_1(answer5_1);
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions1();
	if (correctWordsNumber == 5)
	{
		check(word, answer6_1);
		correctWordsNumber = 6;

		if (counter >= answer6_1.size())
		{
			drawSixthRow_1(answer6_1);
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions1();
	if (correctWordsNumber == 6)
	{
		check(word, answer7_1);
		correctWordsNumber = 7;

		if (counter >= answer7_1.size())
		{
			drawSeventhRow_1(answer7_1);
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions1();
	if (correctWordsNumber == 7)
	{
		check(word, answer8_1);
		correctWordsNumber = 8;

		if (counter >= answer8_1.size())
		{
			drawEightRow_1(answer8_1);
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions1();
	if (correctWordsNumber == 8)
	{
		check(word, asnwer9_1);
		correctWordsNumber = 9;

		if (counter >= asnwer9_1.size())
		{
			drawNinthRow_1(asnwer9_1);
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions1();
	if (correctWordsNumber == 9)
	{
		check(word, answer10_1);
		correctWordsNumber = 10;

		if (counter >= answer10_1.size())
		{
			drawTenthRow_1(answer10_1);
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions1();
	if (correctWordsNumber == 10)
	{
		check(word, answer11_1);
		correctWordsNumber = 0;

		if (counter >= answer11_1.size())
		{
			drawEleventhRow_1(answer11_1);
			word = word.empty();
			counter = 0;
		}
	}
}

 //game 2
//Draw rows
void drawFirstRow_2(string word1)
{

	cout << endl;
	cout << "                      -------------------------" << endl;
	cout << "  1:                  | "; cout << word1[0]; cout << " | "; cout << word1[1]; cout << " | "; cout << word1[2]; cout << " | "; cout << word1[3]; cout << " | "; cout << word1[4]; cout << " | "; cout << word1[5]; cout << " | " << endl;
	cout << "                      -------------------------";
}


void drawSecondRow_2(string word2)
{

	cout << endl;
	cout << "                      ---------------------" << endl;
	cout << "  2:                  | "; cout << word2[0]; cout << " | "; cout << word2[1]; cout << " | "; cout << word2[2]; cout << " | "; cout << word2[3]; cout << " | "; cout << word2[4]; cout << " | " << endl;
	cout << "                      ---------------------" << endl;
}

void drawThirdRow_2(string word3)
{

	cout << endl;
	cout << "                      ---------------------" << endl;
	cout << "  3:                  | "; cout << word3[0]; cout << " | "; cout << word3[1]; cout << " | "; cout << word3[2]; cout << " | "; cout << word3[3]; cout << " | "; cout << word3[4]; cout << " | " << endl;
	cout << "                      ---------------------";
}


void drawForthRow_2(string word4)
{

	cout << endl;
	cout << "                      -----------------" << endl;
	cout << "  4:                  | "; cout << word4[0]; cout << " | "; cout << word4[1]; cout << " | "; cout << word4[2]; cout << " | "; cout << word4[3]; cout << " | " << endl;
	cout << "                      -----------------";
}


void drawFifthRow_2(string word5)
{

	cout << endl;
	cout << "                      -----------------------------------------" << endl;
	cout << "  5:                  | "; cout << word5[0]; cout << " | "; cout << word5[1]; cout << " | "; cout << word5[2]; cout << " | "; cout << word5[3]; cout << " | "; cout << word5[4]; cout << " | "; cout << word5[5]; cout << " | "; cout << word5[6]; cout << " | ";  cout << word5[7]; cout << " | ";  cout << word5[8]; cout << " | ";  cout << word5[9]; cout << " | " << endl;
	cout << "                      -----------------------------------------";
}


void drawSixthRow_2(string word6)
{

	cout << endl;
	cout << "                      -------------------------" << endl;
	cout << "  6:                  | "; cout << word6[0]; cout << " | "; cout << word6[1]; cout << " | "; cout << word6[2]; cout << " | "; cout << word6[3]; cout << " | "; cout << word6[4]; cout << " | "; cout << word6[5]; cout << " | " << endl;
	cout << "                      -------------------------";
}


void drawSeventhRow_2(string word7)
{

	cout << endl;
	cout << "                      -----------------------------------------------------" << endl;
	cout << "  7:                  | "; cout << word7[0]; cout << " | "; cout << word7[1]; cout << " | "; cout << word7[2]; cout << " | "; cout << word7[3]; cout << " | "; cout << word7[4]; cout << " | "; cout << word7[5]; cout << " | "; cout << word7[6]; cout << " | ";  cout << word7[7]; cout << " | ";  cout << word7[8]; cout << " | "; cout << word7[8]; cout << " | "; cout << word7[9]; cout << " | "; cout << word7[10]; cout << " | "; cout << word7[11]; cout << " | " << endl;
	cout << "                      -----------------------------------------------------";
}


void drawEightRow_2(string word8)
{

	cout << endl;
	cout << "                      -----------------------------" << endl;
	cout << "  8:                  | "; cout << word8[0]; cout << " | "; cout << word8[1]; cout << " | "; cout << word8[2]; cout << " | "; cout << word8[3]; cout << " | "; cout << word8[4]; cout << " | "; cout << word8[5]; cout << " | "; cout << word8[6]; cout << " | " << endl;
	cout << "                      -----------------------------";
}


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
		cout << "                                          Level 2: Capital Citys" << endl << endl<<endl;
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
		check(word, answer1_2);
		correctWordsNumber = 1; //shows how many words you've found

		if (counter >= answer1_2.size()) //checks if you've typed the whole word correctly
		{
			drawFirstRow_2(answer1_2); //shows the correct row
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions2();
	if (correctWordsNumber == 1)
	{
		check(word, answer2_2);
		correctWordsNumber = 2;

		if (counter >= answer2_2.size())
		{
			drawSecondRow_2(answer2_2);
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions2();
	if (correctWordsNumber == 2)
	{
		check(word, answer3_2);
		correctWordsNumber = 3;

		if (counter >= answer3_2.size())
		{
			drawThirdRow_2(answer3_2);
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions2();
	if (correctWordsNumber == 3)
	{
		check(word, answer4_2);
		correctWordsNumber = 4;

		if (counter >= answer4_2.size())
		{
			drawForthRow_2(answer4_2);
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions2();
	if (correctWordsNumber == 4)
	{
		check(word, answer5_2);
		correctWordsNumber = 5;

		if (counter >= answer5_2.size())
		{
			drawFifthRow_2(answer5_2);
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions2();
	if (correctWordsNumber == 5)
	{
		check(word, answer6_2);
		correctWordsNumber = 6;

		if (counter >= answer6_2.size())
		{
			drawSixthRow_2(answer6_2);
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions2();
	if (correctWordsNumber == 6)
	{
		check(word, answer7_2);
		correctWordsNumber = 7;

		if (counter >= answer7_2.size())
		{
			drawSeventhRow_2(answer7_2);
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions2();
	if (correctWordsNumber == 7)
	{
		check(word, answer8_2);
		correctWordsNumber = 8;

		if (counter >= answer8_2.size())
		{
			drawEightRow_2(answer8_2);
			word = word.empty();
			counter = 0;
		}
	}
	cout << endl;


	changeQuestions2();
	if (correctWordsNumber == 8)
	{
		check(word, answer9_2);
		correctWordsNumber = 9;

		if (counter >= answer9_2.size())
		{
			drawNinthRow_2(answer9_2);
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

	cout << endl << endl << "                                          Congratulations!!! You Won" << endl << endl;
	cout << endl << "                                          Do you want to start a new game: ";

	getline(cin, newGame);

	if (newGame == "Yes" || newGame == "yes")
	{
		changeWords2(); //main function

		cout << endl << "                 Congratulations!!! You Won ";
		system("PAUSE");

	}

	if (newGame == "No" || newGame == "no")
	{
		system("PAUSE");
	}
	else if (newGame != "No" && newGame != "Yes" && newGame == "no" && newGame == "yes") {
		cout << " Incorrect input!";
	}
	system("PAUSE");
}

void mainMenu() {
	int choice;
	cout << "               _      _        __        ___    _                 _      _        ____    _          _     _             ";
	cout << "             //\\    /\\\\      //\\\\       //    //\\     /         //\\    /\\\\      //      //\\     /  | |   | |   " << endl;
	cout << "             //  \\  /  \\\\    //__\\\\     //    //  \\   /         //  \\  /  \\\\    ////    //  \\   /   | |   | |    " << endl;
	cout << "            //    \\/    \\\\  //    \\\\  _//_   //    \\_/         //    \\/    \\\\  //___   //    \\_/    \\ \\___/ /   " << endl;
	cout << "          \\__________________________________________________________________________________________________/      " << endl;
	cout << "                                                                                                                      " << endl;
	cout << "                                                 1. Start Game                                    " << endl << endl;
	cout << "                                                 2. Rules                                         " << endl << endl;
	cout << "                                                 3. Quit                                          " << endl << endl;
	cout << "                                                                                                  " << endl;
	cout << "                                           Please select your choice! ";

	cin >> choice;
	if (choice == 1) {
		game();
	}
	else if (choice == 2) {
		system("CLS");
		cout << "                                        *****   *   *  *    ****   ****    " << endl;
		cout << "                                        *   *   *   *  *    *      *       " << endl;
		cout << "                                        ****    *   *  *    ****   ****    " << endl;
		cout << "                                        *   *   *   *  *    *         *    " << endl;
		cout << "                                        *    *   ***   **** ****   ****    " << endl;
		cout << "                                 ____________________________________________   " << endl << endl;
		cout << "    1.You must use only English.                         " << endl << endl;
		cout << "    2.You must fill all the given space.                 " << endl << endl;
		cout << "    3.There can't be more than one answear.              " << endl << endl;
		cout << "    4.Each first letter of the word must be in capital.  " << endl << endl;
		cout << "    5.There can't be any numbers or symbols in the words." << endl << endl;

		system("PAUSE");
		system("CLS");
		mainMenu();
	}
	else if (choice == 3) {
		system("PAUSE");
	}
	else if (choice != 3)
	{
		cout << "                                                  Incorrect Input!" << endl;
		system("PAUSE");
	}
}
void startGame()
{
	cout << "                _________       ___       ___     ___________     ____________     ___________           " << endl;
	cout << "               |  ____   |     |   |     |   |   |           |   |   _________|   |   ________|          " << endl;
	cout << "              |  |    |__|     |   |     |   |   |   ________|   |  |             |  |                   " << endl;
	cout << "              |  |             |   |     |   |   |  |________    |  |_________    |  |________           " << endl;
	cout << "              |  |     ____    |   |     |   |   |           |   |_________   |   |________   |          " << endl;
	cout << "              |  |    |_   |   |   |_   _|   |   |   ________|             |  |            |  |          " << endl;
	cout << "              |  |      |  |    |_  |___|  _|    |  |_________    _________|  |    ________|  |          " << endl;
	cout << "              |   |____|   |      |__   __|      |            |  |            |   |           |          " << endl;
	cout << "               |__________|         |___|        |____________|  |____________|   |___________|          " << endl;
	cout << "                                _______________     ____     ____     ___________                        " << endl;
	cout << "                               |               |   |    |   |    |   |           |                       " << endl;
	cout << "                               |____       ____|   |    |   |    |   |   ________|                       " << endl;
	cout << "                                    |     |        |    |___|    |   |  |________                        " << endl;
	cout << "                                    |     |        |             |   |           |                       " << endl;
	cout << "                                    |     |        |     ___     |   |   ________|                       " << endl;
	cout << "                                    |     |        |    |   |    |   |  |_________                       " << endl;
	cout << "                                    |     |        |    |   |    |   |            |                      " << endl;
	cout << "                                    |_____|        |____|   |____|   |____________|                      " << endl;
	cout << "           ____                          ____     ___________       __________       ________            " << endl;
	cout << "           \\   \\                        /   /   _|   _____   |_    |    ___   |     |   __   \\        " << endl;
	cout << "            \\   \\         ____         /   /   |    |     |    |   |   |   |   |    |  |  \\   \\      " << endl;
	cout << "             \\   \\       /    \\       /   /    |   |       |   |   |   |___|   |    |  |   \\   \\    " << endl;
	cout << "              \\   \\     /  __  \\     /   /     |   |       |   |   |    _    _/     |  |    |   |     " << endl;
	cout << "               \\   \\   /  /  \\  \\   /   /      |   |       |   |   |   | \\   \\      |  |    |   |  " << endl;
	cout << "                \\   \\_/  /    \\  \\_/   /       |   |_     _|   |   |   |  \\   \\     |  |___/   /   " << endl;
	cout << "                 \\      /      \\      /        |_   |_____|   _|   |   |   \\   \\    |         /      " << endl;
	cout << "                  \\____/        \\____/           |___________|     |___|    \\___\\   |________/       " << endl<<endl;
}
int main() {
	startGame();
	system("PAUSE");
	system("CLS");
	mainMenu();
}