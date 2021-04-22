#include <string>
#include <iostream>
using std::cout;
using std::string;
int countLine(string pName);
int countChar(string pName);
int main(int argc, char *argv[]){
	string a = "absdbasbdabsdasdybaybsdybasd";
	cout << countChar(a);
}

int countLine(string pName){
	int sum = 0;
	for (auto i = pName.begin(); i < pName.end(); i++){
		if (*i == '\n'){
			sum++;
		}
	}
	cout << sum << "Lines\n";
	return sum;
}
int countChar(string pName){
	int sum = 0;
	for (auto i = pName.begin(); i < pName.end(); i++){
		if ((int)*i > 32 && (int)*i < 127){
			sum++;
		}
	}
	cout << sum << "Characters\n";
	return sum;
}