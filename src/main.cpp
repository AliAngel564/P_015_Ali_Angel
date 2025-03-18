/*
Amerike University
Author: Ali Angel
Work #: 15
Date: 18/03/25
Description: This program will use arrays and functions to ask the user for 10 words and an additional word
and it will then look for the additional word in the array, it will then show the amount of times the word
was repeated and the index number of the array it appeared in.
*/

#include <iostream>
#include <conio.h>

using namespace std;

void pressAnyKey();
void getWords(string array[], int size);
void lookForWord(string array[],int size,string extraWord);

int main()
{
    string extraWord;
    string usrWords[10]; 
    cout << "This program will now ask you to input 10 words\n";
    getWords(usrWords,10);
    pressAnyKey();
    cout << "Now write an additional word: ";
    cin >> extraWord;
    pressAnyKey();
    cout << "The program will now look for our extra word inside the array\n";
    lookForWord(usrWords,10,extraWord);

    return 0;
}

void pressAnyKey()
{
    cout << "\nPRESS ANY KEY TO CONTINUE\n";
    getch();
    system("cls");
}
void getWords(string array[], int size)
{
    for(int i = 0;i < size;i++)
    {
        cout << "Write word number " << i <<": ";
        cin >> array[i]; 
    }
}
void lookForWord(string array[],int size,string extraWord)
{
    int index[10];
    int countRepeated = 0;
    int counter = 0;
    int indexNum;
    for (indexNum = 0; indexNum < size; indexNum++)
    {
        if(extraWord == array[indexNum])
        {
            countRepeated++;
            index[counter] = indexNum;
            counter++;
        }
    }
    if(countRepeated == 0)
    {
        cout << "\nThe additional word was not found in our array";
    }else
    {
        cout << "\nOur additional word was found " << countRepeated << " times in our array";
        cout << "\nThe word was found in the following indexes of our array\n";
        for(int i=0;i<countRepeated;i++)
        {
            cout << "index No." << index[i] << "\n";
        }
    }
}