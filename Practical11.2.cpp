#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    cout <<"********************************************" <<endl;
    cout <<"FILE ORGANIZATION &amp; FILE OPERATIONS UTILITY" <<endl;
    cout <<"********************************************" <<endl;
    cout <<endl;

    char text[200];

    //PART A - File Creation and Writing

    FILE *file = fopen("Document.txt", "w");

    if (file == NULL)
    {
        cout <<"Unable to Create File." <<endl;
        return 0;
    }

    cout <<"Document.txt Created Successfully" <<endl;
    cout <<"--------------------------------------------" <<endl;
    cout <<endl;

    cout <<"Enter File Contents" <<endl;

    cout <<"Enter blank line to stop writing." <<endl;

    while (true)
    {
        cin.getline(text, 200);

        if (strlen(text) == 0)
        {
            break;
        }

        fprintf(file, "%s\n", text);
    }

    fclose(file);

    cout <<"--------------------------------------------" <<endl;
    cout <<"Data Written Successfully" <<endl;
    cout <<"--------------------------------------------" <<endl;
    cout <<endl;
    //PART B - File Reading

    file = fopen("Document.txt", "r");

    if (file == NULL)
    {
        cout << "Unable to Open File." << endl;
        return 0;
    }

    cout <<"Reading Document.txt" <<endl;

    while (fgets(text, 200, file) != NULL)
    {
        cout <<text;
    }

    cout <<endl;
    cout <<"--------------------------------------------" <<endl;
    cout <<"End of File Reached Successfully" <<endl;

    fclose(file);

    //PART C - File Copying
    cout <<"--------------------------------------------" <<endl;
    cout <<endl;
    cout <<"Creating BackupDocument.txt" <<endl;

    FILE *source = fopen("Document.txt", "r");

    FILE *destination = fopen("BackupDocument.txt", "w");

    if (source == NULL || destination == NULL)
    {
        cout <<"Unable to Open File." <<endl;

        if (source != NULL)
            fclose(source);

        if (destination != NULL)
            fclose(destination);

        return 0;
    }

    char ch;

    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    cout <<"Contents Copied Successfully" <<endl;

    cout <<"Backup File Created Successfully" <<endl;
    cout <<endl;
    cout <<"--------------------------------------------" <<endl;

    //PART D - Random File Access

    file = fopen("Document.txt", "r");

    if (file == NULL)
    {
        cout <<"Unable to Open File." <<endl;
        return 0;
    }

    fseek(file, 0, SEEK_END);

    cout <<"Current File Position : " <<ftell(file) <<endl;

    cout <<"Moving File Pointer..." <<endl;

    // Move to the beginning of the file
    rewind(file);

    // Skip the first line
    fgets(text, 200, file);

    long position = ftell(file);

    cout <<"Displaying Contents after Repositioning" <<endl;

    fseek(file, position, SEEK_SET);

    fgets(text, 200, file);

    cout <<text;

    // Reset pointer to beginning
    cout <<"--------------------------------------------" <<endl;
    cout <<"Resetting File Pointer" <<endl;

    rewind(file);

    while (fgets(text, 200, file) != NULL)
    {
        cout << text;
    }

    fclose(file);

    cout <<endl;
    cout <<"--------------------------------------------" <<endl;
    cout <<"Program Executed Successfully" <<endl;
    cout <<"--------------------------------------------" <<endl;

    return 0;
}
