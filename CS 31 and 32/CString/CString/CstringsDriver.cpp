#include <iostream>
#include <string>

using namespace std;

// Note the bizzarro way that CStrings are passed to functions
void dump( char song1[], char song2[], char song3[], char song4[], char song5[], char song6[] = "\n" );
void sort( char song1[], char song2[], char song3[], char song4[], char song5[], char song6[] = "\n" );


int main() {
	// Let's play with strings
	char ManilowTitle1[ 6 ] = "Mandy";
	char ManilowTitle2[]    = "Could It Be Magic";
	char ManilowTitle3[]    = {'E', 'v', 'e', 'n', ' ', 'N', 'o', 'w', '\0'};

	char ManilowTitle4[ 9 ];
	strcpy_s( ManilowTitle4, "Daybreak" );

	char ManilowTitle5[ 16 ];
	strcpy_s( ManilowTitle5, "It's" );
	strcat_s( ManilowTitle5, " A " );
	strcat_s( ManilowTitle5, " Miracle" );

	cout << "Here is your Barry Manilow songlist" << endl;
	cout << "\t" << ManilowTitle1 << endl;
	cout << "\t" << ManilowTitle2 << endl;
	cout << "\t" << ManilowTitle3 << endl;
	cout << "\t" << ManilowTitle4 << endl;
	cout << "\t" << ManilowTitle5 << endl;

	// We can do this with a function call
	cout << "Here is your Barry Manilow songlist" << endl;
	dump( ManilowTitle1, ManilowTitle2, ManilowTitle3, ManilowTitle4, ManilowTitle5 );

	cout << "Here is your sorted songlist" << endl;
	sort( ManilowTitle1, ManilowTitle2, ManilowTitle3, ManilowTitle4, ManilowTitle5 );

	// Let's prompt for another song
	char ManilowTitle6[80];
	cout << "Here's your chance to add to the songlist!" << endl;
	cin.getline( ManilowTitle6, 80 );

	cout << "Here is your Barry Manilow songlist" << endl;
	dump( ManilowTitle1, ManilowTitle2, ManilowTitle3, ManilowTitle4, ManilowTitle5, ManilowTitle6 );

	cout << "Here is your sorted songlist" << endl;
	sort( ManilowTitle1, ManilowTitle2, ManilowTitle3, ManilowTitle4, ManilowTitle5, ManilowTitle6 );

	return( 0 );
}

void dump( char song1[], char song2[], char song3[], char song4[], char song5[], char song6[] ) {
	cout << "\t" << song1 << endl;
	cout << "\t" << song2 << endl;
	cout << "\t" << song3 << endl;
	cout << "\t" << song4 << endl;
	cout << "\t" << song5 << endl;
	if (strcmp( song6, "\n") != 0) 
		cout << "\t" << song6 << endl;
}

void sort( char song1[], char song2[], char song3[], char song4[], char song5[], char song6[] ) {
	// This is very wasteful, but CS52 knows no other way
	char songArray[6][30];
	bool sentSix = false;
	int  total = 5;
	strcpy_s( songArray[0], song1 );
	strcpy_s( songArray[1], song2 );
	strcpy_s( songArray[2], song3 );
	strcpy_s( songArray[3], song4 );
	strcpy_s( songArray[4], song5 );

	if (strcmp( song6, "\n") != 0) {
		strcpy_s( songArray[5], song6 );
		sentSix = true;
	}
	if (sentSix)
		total = 6;

	// sort the array
	for (int i = 0; i < total; i++) {
		for (int j = i; j < total; j++) {
			if (strcmp(songArray[j], songArray[i]) < 0) {
				char temp[30];
				strcpy_s( temp, songArray[j] );
				strcpy_s( songArray[j], songArray[i] );
				strcpy_s( songArray[i], temp );
			}
		}
	}

	for (int k = 0; k < total; k++)
		cout << "\t" << songArray[k] << endl;
}
