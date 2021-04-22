#include <string>
#include <iostream>
using std::cout;
using std::string;
int countLine(string pName);
int main(int argc, char *argv[]){
	string a = "a\na\na\na\nr";
	cout << countLine(a);
}

int countLine(string pName){
	int sum = 0;
	for (auto i = pName.begin(); i < pName.end(); i++){
		if (*i == '\n'){
			sum++;
		}
	}
	return sum;
}
int countChar(string pName){

}