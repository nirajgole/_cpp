#include"Donor.h"
void main()
{
	int ch = 0, n = 0;
	//*************************cString Class****************
	/*cString c1("neeraj");
	c1.display();
	cString c2 = c1;
	c2.display();*/


	//*************************Donor Class****************
	/*Donor d2("neeraja", 21, "pune", 'f', 'a');
	d2.display();*/


	Donor* d[4];
	
	for (int i = 0; i < 4; i++)
	{
		d[i] = new Donor;
		d[i]->acceptData();
	}

	do {
		cout << "\n\t1.Blood donors having the blood group A.\
				\n\t2.Blood donors in the age group between 16 to 30.\
				\n\t3.Female donors having blood group A in the age between 20 and 25.\
				\n\t0.EXIT";

		cout << "\nEnter Choice : ";
		cin >> ch;
		
		switch (ch)
		{
		default:cout << "Wrong Choice!!!";
			break;
		case 0: exit(0); break;
		case 1:
			cout << "\nBlood donors having the blood group A : \n";
			for (int i = 0; i < 4; i++)
			{
				n = d[i]->check_A_Donor();
				if (n == 1)
					d[i]->display();
			}
			break;
		case 2:
			cout << "\nBlood donors in the age group between 16 to 30 \n";
			for (int i = 0; i < 4; i++)
			{
				n = d[i]->sort_age();
				if (n == 1)
					d[i]->display_info();
			}
			break;
		case 3:
			cout << "\n3.Female donors having blood group A in the age between 20 and 25.\n";
			for (int i = 0; i < 4; i++)
			{
					n = d[i]->sort_gender_age_donor();
					if (n == 1)
						d[i]->display_info();
			}
			break;
		}
	} while (ch!=0);
}