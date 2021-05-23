#ifndef PLACE_H
#define PLACE_H
#define xlim 100
#define ylim 100

using namespace std;

class place
{
private:
	int x, y;
public:
	place();
	place(int x, int y);
	void setLocation(int, int);
	int getX() const;
	int getY() const;
};
#endif

