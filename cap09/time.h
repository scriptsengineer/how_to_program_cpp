#ifndef TIME_H
#define TIME_H

class Time {
public:
	Time();
	void set_time(int, int, int);
	void print_universal();
	void print_standard();

private:
	int hour;
	int minute;
	int second;
};

#endif