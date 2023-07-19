#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main(void) {
	list<int> mylist;
	list<int>::iterator it;
	for (int i = 1; i <= 5; ++i) mylist.push_back(i);

	it = mylist.begin(); ++it;
	mylist.insert(it, 10);//1 10 2 3 4 5
	mylist.insert(it, 2, 20);//1 10 20 20 2 3 4 5
	--it;
	vector<int> myvector(2, 30);
	mylist.insert(it, myvector.begin(), myvector.end());
	cout << "mylsit contains:";
	for (it = mylist.begin(); it != mylist.end(); ++it)
		cout << ' ' << *it;
	cout << "\n";
	return 0;
}
/*#include <iostream>
#include <list>
using namespace std;

int main(void) {
	int i = 0;
	list<int> MyList(5, 20);
	list<int>::iterator it;
	for (it = MyList.begin(); it != MyList.end(); ++it) {
		*it = *it * (i + 1);
		cout << ' ' << *it;
		i++;
	}
	cout << endl;
	cout << MyList.front() << endl;
	cout << *MyList.begin() << endl;
	cout << MyList.back() << endl;
	cout << *(--MyList.end()) << endl;
	return 0;
}*/