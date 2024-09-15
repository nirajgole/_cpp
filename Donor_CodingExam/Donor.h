#include<stdio.h>
#include<iostream>
#include"cString.h"
#include"string.h"
using namespace std;

class Donor
{
	int donor_no;
	static int cnt;
	cString name;
	int age;
	cString address;
	char gender;
	char blood_group;
public:
	
	Donor();
	Donor(const char*, int, const char*, char, char);
	int check_A_Donor();
	int sort_age();
	int sort_gender_age_donor();
	void display();
	void display_info();
	void acceptData();

	////age
	//void setAge(int);
	//int getAge();

	////gender
	//void setGender(char);
	//char getGender();

	////blood group
	//void setBlood_Group(char);
	//char getBlood_Group();

};
