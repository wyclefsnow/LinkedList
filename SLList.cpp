//#include <iostream>
#include "SLList.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	List test;
	test.erase(55);
	test.push_front(99);
	test.push_front(55);
	test.push_front(77);
	test.push_front(55);
	//test.display();
	test.push_front(55);
	test.display();
	cout<<"test size is "<<test.size()<<endl;
	test.pop_front();
	test.display();
	cout<<"test size is "<<test.size()<<endl;
	List test1, test2(test);
	test.erase(55);
	test.display();
	cout<<"test size is "<<test.size()<<endl;
	test2.display();
	cout<<"test2 size is "<<test2.size()<<endl;
	test1=test;
	test1.display();
	cout<<"test1 size is "<<test1.size()<<endl;
	//system("pause");
	//bool List::display_menu() const {
	int ch,n, l;
	while (1) {
		test.display();
		cout<<" \n ************************** MENU ********************** \n Press"<<endl;
		cout<<" \t 1. To insert element: "<<endl;
		cout<<" \t 2. To remove element:"<<endl;
		cout<<" \t 3. To Exit."<<endl;
		cin>>ch;
		switch (ch) {
			case 1:	cout<<" Please enter the Element (x) and its position."<<endl;
					cin>>n>>l;
					test.insert(n, l); break;
			case 2: cout<<" Please enter the element to be removed:"<<endl;
					cin>>n;
					cout<<" Removed Element: \n"<<test.remove(n)<<endl; break;
			case 3: test.display();
					return 0;

		}
	}
return 0;
}
