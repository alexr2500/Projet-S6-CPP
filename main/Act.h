# ifndef ACT_H
# define ACT_H

#include <iostream>
using namespace std;

class Act
{
private:
	string id;
	string displayMessage;
	int mercyImpact;

public :
	Act(string id, string displayMessage, int mercyImpact);

	void setId(string id);
	void setDisplayMessage(string displayMessage);
	void setMercyImpact(int mercyImpact);

	string getId() const;
	string getDisplayMessage() const;
	int getMercyImpact() const;
};
#endif