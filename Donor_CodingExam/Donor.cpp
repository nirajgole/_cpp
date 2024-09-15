#include"Donor.h"
using namespace std;
int Donor:: cnt = 100;
Donor::Donor()
{
	cnt++;
	donor_no = cnt;
	age=0;
	gender='\0';
	blood_group='\0';
}
Donor::Donor(const char*nm, int ag, const char*ad, char gen, char bg):name(nm),address(ad)
{
	cnt++;
	donor_no = cnt;
	age = ag;
	gender = gen;
	blood_group = bg;
}
void Donor::display()
{
	cout << "\nDonor No	: " << donor_no << "\nName		: ";
	name.display();
	cout << "\nAge		: " << age << "\nAddress		: ";
	address.display();
	cout << "\nGender(M/F)	: " << gender << "\nBlood Group :" << blood_group;
}
void Donor::display_info()
{	
	cout << "\nDonor No	: " << donor_no << "\nName		: ";
	name.display();
	cout<< "\nAddress		: ";
	address.display();
}
int Donor:: check_A_Donor()
{
	if (blood_group == 'A')
		return 1;
	else
		return 0;
}
int Donor::sort_age()
{	
	if (age >= 16 && age <= 30)
		return 1;
	else
		return 0;
}
int Donor::sort_gender_age_donor()
{	
	if (gender == 'F' && (age >= 20 && age <= 25) && check_A_Donor())
		return 1;
	else
		return 0;
}
//void Donor::sort_F_Donor_age();
void Donor::acceptData()
{
	cout << "\nDonor No : "<<donor_no;
	cout << "\nEnter Age : ";
	cin >> age;
	cout << "\nEnter Name : ";
	name.acceptStr();
	cout << "\nEnter Address : ";
	address.acceptStr();
	cout << "\nEnter Gender : ";
	cin >> gender;
	cout << "\nEnter Blood Group : ";
	cin >> blood_group;
}
//void Donor::setAge(int ag)
//{	
//	age = ag;
//}
//int Donor::getAge()
//{	
//	return age;
//}
//void Donor::setGender(char gen)
//{	
//	gender = gen;
//}
//char Donor::getGender()
//{	
//	return gender;
//}
//void Donor::setBlood_Group(char a)
//{	
//	blood_group = a;
//}
//char Donor::getBlood_Group()
//{	
//	return blood_group;
//}