#include <iostream>
#include <iomanip>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    char paragraph[1000];
    char additionalSentence[500];
    char keyword[100];
    char palindromeWord[100];

    cout <<"********************************************" <<endl;
    cout <<"DOCUMENT TEXT ANALYZER" <<endl;
    cout <<"********************************************" <<endl;
    cout <<endl;

    //Accept Paragraph
    cout << "Enter Paragraph" <<endl;
    cout <<endl;
    cin.getline(paragraph, 1000);

    int length = 0;
    int words = 0;
    int alphabets = 0;
    int digits = 0;
    int special = 0;

    //Manual String Length
    while(paragraph[length] != '\0')
    {
        length++;
    }

    //Count characters
    for(int i = 0; paragraph[i] != '\0'; i++)
    {
        if(isalpha(paragraph[i]))
        {
            alphabets++;
        }
        else if(isdigit(paragraph[i]))
        {
            digits++;
        }
        else if(paragraph[i] != ' ' && paragraph[i] != '\n')
        {
            special++;
        }
    }

    //Count words
    bool insideWord = false;

    for(int i = 0; paragraph[i] != '\0'; i++)
    {
        if(!isspace(paragraph[i]))
        {
            if(!insideWord)
            {
                words++;
                insideWord = true;
            }
        }
        else
        {
            insideWord = false;
        }
    }
    cout <<endl;
    cout <<"--------------------------------------------" <<endl;;
    cout <<"Text Analysis" <<endl;
    cout <<"--------------------------------------------" <<endl;
    cout <<endl;

    cout <<"Characters" <<setw(13) <<":" <<length <<endl;
    cout <<"Words" <<setw(18) <<":"<<words <<endl;
    cout <<"Alphabets" <<setw(14) <<":" <<alphabets <<endl;
    cout <<"Digits" <<setw(17) <<":"<<digits <<endl;
    cout <<"Special Characters" <<setw(5) <<":" <<special <<endl;
    cout <<endl;

    //String Extraction
    char firstWord[100];
    char lastWord[100];

    int i = 0;
    int j = 0;

    //Skip starting spaces
    while(paragraph[i] == ' ')
    i++;

    //First word
    while(paragraph[i] != ' ' && paragraph[i] != '\0' && paragraph[i] != '\n')
    {
        firstWord[j] = paragraph[i];
        i++;
        j++;
    }

    firstWord[j] = '\0';

    //Find last word manually
    int end = length - 1;

    while(end >= 0 && isspace(paragraph[end]))
    end--;

    int start = end;

    while(start >= 0 && !isspace(paragraph[start]))
    start--;

    start++;

    j = 0;

    for(i = start; i <= end; i++)
    {
        lastWord[j] = paragraph[i];
        j++;
    }

    lastWord[j] = '\0';

    cout <<"--------------------------------------------" <<endl;
    cout <<"String Extraction" <<endl;
    cout <<"--------------------------------------------" <<endl;
    cout <<endl;

    cout <<"First Word" <<setw(9) <<":" <<firstWord <<endl;
    cout <<"Last Word" <<setw(10) <<":" <<lastWord <<endl;

    if (length > 0)
    {
        cout <<"First Character" <<setw(4) <<":" <<paragraph[0] <<endl;
        cout <<"Last Character" <<setw(5) <<":" <<paragraph[length - 1] <<endl;
        cout <<endl;
    }

    //Concatenation
    cout <<"--------------------------------------------" <<endl;
    cout <<"Concatenation" <<endl;
    cout <<"--------------------------------------------" <<endl;
    cout <<endl;

    cout <<"Enter Additional Sentence" <<endl;
    cout <<endl;
    cin.getline(additionalSentence, 500);

    int paragraphLength = strlen(paragraph);

    paragraph[paragraphLength] = '\n';
    paragraph[paragraphLength + 1] = '\0';

    strcat(paragraph, additionalSentence);
    cout <<endl;

    cout <<"Updated Paragraph" <<endl;
    cout <<endl;
    cout <<paragraph <<endl;
    cout <<endl;

    //Pattern Matching
    cout <<"--------------------------------------------" <<endl;
    cout <<"Pattern Matching" <<endl;
    cout <<"--------------------------------------------" <<endl;
    cout <<endl;

    cout <<"Enter Search Word" <<setw(5) <<":";
    cin.getline(keyword, 100);
    cout <<endl;

    char *position = strstr(paragraph, keyword);

    if(position != NULL)
    {
        int firstOccurrence = position - paragraph;

        cout <<"Keyword Found." <<endl;
        cout <<endl;
        cout <<"First Occurrence Position" <<setw(5) <<":" <<firstOccurrence <<endl;
        cout <<endl;
    }
    else
    {
        cout <<"Keyword Not Found." <<endl;
        cout <<endl;
    }

    //String Transformation
    cout <<"--------------------------------------------" <<endl;
    cout <<"String Transformation" <<endl;
    cout << "--------------------------------------------" <<endl;
    cout <<endl;

    char upper[1000];
    char lower[1000];

    strcpy(upper, paragraph);
    strcpy(lower, paragraph);

    //Uppercase
    for(i = 0; upper[i] != '\0'; i++)
    {
        upper[i] = toupper(upper[i]);
    }

    cout <<"Uppercase" <<endl;
    cout <<endl;
    cout <<upper <<endl;
    cout <<endl;

    //Lowercase
    for(i = 0; lower[i] != '\0'; i++)
    {
        lower[i] = tolower(lower[i]);
    }

    cout <<"--------------------------------------------" <<endl;

    cout <<"Lowercase" <<endl;
    cout <<endl;
    cout <<lower <<endl;
    cout <<endl;

    cout <<"--------------------------------------------" <<endl;

    //Reverse Paragraph
    cout <<"Reverse" <<endl;
    cout <<endl;

    int newLength = strlen(paragraph);

    for(i = newLength - 1; i >= 0; i--)
    {
        cout <<paragraph[i];
    }
    cout <<endl;
    cout <<endl;

    //Palindrome Check
    cout <<"--------------------------------------------" <<endl;
    cout <<"Palindrome Check" <<endl;
    cout <<endl;

    cout <<"Enter Word" <<setw(5) <<":";
    cin.getline(palindromeWord, 100);
    cout <<endl;

    int left = 0;
    int right = strlen(palindromeWord) - 1;

    bool palindrome = true;

    while(left < right)
    {
        if(palindromeWord[left] != palindromeWord[right])
        {
            palindrome = false;
            break;
        }

        left++;
        right--;
    }

    if(palindrome)
    {
        cout <<"Result : Palindrome" <<endl;
        cout <<endl;
    }
    else
    {
        cout <<"Result : Not Palindrome" <<endl;
        cout <<endl;
    }

    //Standard String Functions
    cout <<"--------------------------------------------" <<endl;
    cout <<"Standard String Functions" <<endl;
    cout <<"--------------------------------------------" <<endl;
    cout <<endl;

    //strlen()
    cout <<"Length" <<setw(5) <<":" <<strlen(paragraph) <<endl;
    cout <<endl;

    //strcpy()
    char copiedString[1000];
    strcpy(copiedString, paragraph);

    cout <<"String Copied Successfully" <<endl;
    cout <<endl;

    //strcmp()
    if(strcmp(paragraph, copiedString) == 0)
    {
        cout <<"Comparison Result : Equal" <<endl;
        cout <<endl;
    }
    else
    {
        cout <<"Comparison Result : Not Equal" <<endl;
        cout <<endl;
    }

    //strcat()
    char string1[1000] = "Hello ";
    char string2[100] = "World";

    strcat(string1, string2);

    cout <<"Concatenation : Successful" <<endl;
    cout <<endl;

    //strstr()
    if (strstr(paragraph, keyword) != NULL)
    {
        cout <<"Substring Search : Found" <<endl;
        cout <<endl;
    }
    else
    {
        cout <<"Substring Search : Not Found" <<endl;
        cout <<endl;
    }

    //toupper()
    char ch1 = 'a';
    ch1 = toupper(ch1);

    if (ch1 == 'A')
    {
        cout <<"toupper() : Successful" <<endl;
        cout <<endl;
    }

    //tolower()
    char ch2 = 'A';
    ch2 = tolower(ch2);

    if (ch2 == 'a')
    {
        cout <<"tolower() : Successful" <<endl;
        cout <<endl;
    }

    cout << "--------------------------------------------" <<endl;

    return 0;
}
