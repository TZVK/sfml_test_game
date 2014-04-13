#include <string> //string.h???

class Player{
private:	
string name;
char sign;
int playerID;

	Player(){
		this->name = "";
		this->sign = 0;
		this->playerID = 0;
	}

public:
	Player(string name, char sign, int playerID){
		this->name = name;
		this->sign = sing;
		this->playerID = playerID;
	}

	~Player(){
		this->name = "";
		this->sign = 0;	
	}

	string getName const (){
		return name;
	}

	char getSign const (){
		return sign;
	}

	int getChipPlacement const (){


		return 0;
	}
}
