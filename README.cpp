# cpp_assignment1
//1.class BankAccount 
Class BankAccount{
private:
 string name;
 string account_number;
 int  balance;
public:
BankAccount(){
name=none;
account_number="0";
balance=0;}
BankAccount(string n, string num, int b){
name=n;
account_number=num;
balance=b;}
void display(){
cout<<"Name: "+name+"Account number: "+account_number+"Balance: "+balance;}
}
void deposit_money(int d){
	balance=balance+d;}
void withdraw_money(int w){
balance=balance-w;}

//1.person class 
	class Person {
 private:
 static const LIMIT = 25;
 string lname; // Person’s last name 
char fname[LIMIT]; // Person’s first name 
public: 
Person() {
lname = "";
 fname[0] = '\0'; } // #1 
Person(const string & ln, const char * fn = "Heyyou"); // #2 
// the following methods display lname and fname 
void Show()  // firstname lastname format 
{
	cout<<fname+lname;
}
void FormalShow()  // lastname, firstname format
{
	cout<<lname+","+fname;
}
Person(){
	fname=" ";
lname=" ";
}
 Person(string s){
	lname=s;
} 
 Person(string s,string b) {
fname=s;
lname=b;
}
};
 //3.move class 
  class Move {
 private:
 double x;
 double y;
 public:
 Move(double a = 0, double b = 0);// sets x, y to a, b
{x=a;y=b;}
 showmove() c// shows current x, y values Move
{cout<<"x coord"+x+"y coord"+y;}
Move  add(const Move & m) c // this function adds x of m to x of invoking object to get new x, // adds y of m to y of invoking object to get new y, creates a new // move object initialized to new x, y values and returns it
{ x=x+m.x;
y=y+m.y;
Move new;
new.x=x;
new.y=y;
return new  ;
}
 reset(double a = 0, double b = 0){
 x=a;y=b;
 }};

