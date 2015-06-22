#define MAX_cc 40
struct Line{
	int no;
	char maxstring [MAX_cc+1];
public :
	bool set (int n, const char* str);
	void display() const;
};