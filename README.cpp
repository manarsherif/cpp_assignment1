//# cpp_assignment1
//1.class BankAccount 
# include "string"
using namespace std;
class BankAccount{
private:
 string name;
 string account_number;
 int  balance;
public:
	BankAccount(){
		name=" ";
		account_number="1000";
		balance=0;
	}
	BankAccount(string n, string num, int b){
		name=n;
		account_number=num;
		balance=b;
	}
	void display(){
		//char *intStr = itoa(balance);
        string str = to_string(balance);
		cout<<"Name: "+name+"Account number: "+account_number+"Balance: "+str;
	}
	void deposit_money(int d){
		balance=balance+d;}
	void withdraw_money(int w){
		if(balance >w)
	balance=balance-w;
		else 
	cout<<"error please the withdrawn amount is more than your balance please try again";}
};

//1.person class 
class Person {
 private:
	 static const int LIMIT = 25;
 string lname; // Person’s last name 
char fname[LIMIT]; // Person’s first name 
public: 
	Person() {
	lname = " ";
	fname[0] = '\0'; } // #1 
	Person(const string & ln, const char * fn = "Heyyou"){
		lname=ln;
		for(int i=0;i<sizeof(fn);i++){
		 fname[i]=fn[i];}
		fname[sizeof(fn)]='\0';

	}// #2 
// the following methods display lname and fname 
void Show()  // firstname lastname format 
{
	cout<<fname<<" "<<lname;
}
void FormalShow()  // lastname, firstname format
{
	cout<<lname+","+fname;
}

 Person(string s){
	lname=s;
} 
 
};
 //3.move class 
class Move {
 private:
	 double x;
	double y;
 public:
	Move(double a = 0, double b = 0)// sets x, y to a, b
	{
		x=a;y=b;
    }
	 void showmove() // shows current x, y values Move
	{
		cout<<"x coord"<<x<<"y coord"<<y<<endl;
	 }
Move  add(const Move & m)  // this function adds x of m to x of invoking object to get new x, // adds y of m to y of invoking object to get new y, creates a new // move object initialized to new x, y values and returns it
	{ 
		x=x+m.x;
		y=y+m.y;
		//Move new;
		//new.x=x;
		//new.y=y;
		return Move(x+m.x,y+m.y) ;
}
void reset(double a = 0, double b = 0)
 {
		 x=a;
		 y=b;
 }};
void main (){
Move a(3,2);
	a.showmove();
   a.reset(3,4);
   a.showmove();
system("pause");
}
