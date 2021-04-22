#include <string>
#include <iostream>
#include <fstream>
using std::ifstream;
using std::cout;
using std::string;
int countLine(string pName);
int countChar(string pName);
int main(int argc, char *argv[]){
	if (argc == 1){
		countLine("Ohio University");
		countChar("Athens");
	} else if (argc == 2){
		ifstream in_file;
		in_file.open(argv[1], std::ios_base::in);
		if (!in_file.is_open()){
			cout << "Not a valid file.\n";
			return;
		}
		string words_in_file = string((std::istreambuf_iterator<char>(in_file)), std::istreambuf_iterator<char>());
		countLine(words_in_file);
		countChar(words_in_file);
		in_file.close();
	}
}

int countLine(string pName){
	int sum = 0;
	for (auto i = pName.begin(); i < pName.end(); i++){
		if (*i == '\n'){
			sum++;
		}
	}
	cout << sum << " Lines\n";
	return sum;
}
int countChar(string pName){
	int sum = 0;
	for (auto i = pName.begin(); i < pName.end(); i++){
		if ((int)*i > 32 && (int)*i < 127){
			sum++;
		}
	}
	cout << sum << " Characters\n";
	return sum;
}