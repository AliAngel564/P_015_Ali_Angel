

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

void getWords(string array[], int size);
void pressAnyKey();
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
    for (int i = 0; i < size; i++)
    {
        if(extraWord == array[i])
        {
            int indexNum = i;
            index[i] = indexNum;
            countRepeated++;
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