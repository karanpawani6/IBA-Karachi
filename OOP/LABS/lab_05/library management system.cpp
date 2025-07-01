#include <iostream>
using namespace std;
class publication {
protected:
	string title;
	string author;
	int year_publish;
public:
	publication(string t, string a, int y) {
		title = t;
		author = a;
		year_publish = y;
	}
	virtual void print() {
		cout << "Title: " << title << endl;
		cout << "Author: " << author << endl;
		cout << "publish year: " << year_publish << endl;
	}
};
class book : public publication {
private:
	string ISBN;
	int totalpages;
public:
	book(string t , string a , int y , string isbn, int pages) : publication(t,a,y), ISBN(isbn),totalpages(pages){}
	void print()override {
		publication::print();
		cout << "ISBN NO: " << ISBN << endl;
		cout << "Total pages: " << totalpages << endl;
	}
};
class researchpaper :public publication {
private:
	string journalname;
	double impact_factor;
public:
	researchpaper(string t, string a, int y, string jornnal, double factor) : publication(t, a, y), journalname(jornnal), impact_factor(factor) {}
	void print()override {
		publication::print();
		cout << "Jornal Name: " << journalname << endl;
		cout << "Impact Factor: " << impact_factor << endl;
	}
};
class digitalresources :public publication {
private:
	string URL;
	double FileSizeMB;
public:
	digitalresources(string t, string a, int y, string url, double mb) :publication(t, a, y), URL(url), FileSizeMB(mb) {}
	  void print() override{
		  publication::print();
		  cout << "URL: " << URL << endl;
		  cout << "File size is " << FileSizeMB << " MB" << endl;
	  }
};
int main() {
	book b1("Happiness", "karan kumar", 2000, "10", 200);
	book b2("calculus", "Ahmed Aktar", 1999,"20", 300);
	researchpaper r1("Discrete", "shoaib jamil", 2014, "maths", 400);
	researchpaper r2("History", "Moiz hassan", 2020, "history of pakistan", 500);
	digitalresources d1("English", "asra mariam", 2023, "http", 200);
	digitalresources d2("Physics", "shabana nisar", 2001, "http:/", 250);
	publication* library[] = { &b1, &b2,&r1,&r2,&d1,&d2 };
	for (int i = 0;i < 6;i++) {
		library[i]->print();
	}

}