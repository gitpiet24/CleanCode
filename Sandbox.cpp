#include <iostream>
using namespace std;

//This program is supposed to greet people according to how well we know them
//It works, but we can't extend it without modifying it.
//This is against the "Open-Closed Principle" ("Classes should be open for extension, but closed for modification")


class Greeter {
public:
	virtual string greet() = 0;		
};



class FormalPesonality : public Greeter {
public: 
    string greet() override {
        return "Good evening, sir.";
    }
}

class CasualPesonality : public Greeter {
public: 
    string greet() override {
        return "Sup Bro?";
    }
}

class IntimatePersonality : public Greeter {
public:
	string greet() override {
		return "Hello Darling!";
	}
};

int main() {
    FormalPesonality fp;
    cout << fp.greet() << endl

	return 0;
}