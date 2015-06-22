#define MAX_LINE 40
#include "line.h"
struct List{
private:
	int noline;
	Line storeline[MAX_LINE];
public:
	void set(int no);
	void display() const;
};