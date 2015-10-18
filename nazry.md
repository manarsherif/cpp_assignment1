Name :Manar Sherif Ismaiel 
B.N:33834
1.	A class is a template definition of the methods a variable s in a particular kind of object . Thus, an object is a specific instance of a class; it contains real values instead of variables.
2.	Abstraction is achieved by creating an abstract class and use it’s objects in an observable way for a certain functionality needed without getting into unnecessary complication.encapsulation is most often achieved through information hiding, which is the process of hiding all of the secrets of object that do not contribute to its essential characteristics which is done by having private, public and protected elements in the class 
3.	The object is an instance of the class 
4.	Class data functions are used to access the class private elements and do operations on them to provide a level of abstraction and certain functionality needed for the user of the class 
5.	Class BankAccount{
private:
 string name;
 string account_number;
 int  balance;
public:
BankAccount(){
name=none;
account_number=”0”;
balance=0;}
BankAccount(string n, string num, int b){
name=n;
account_number=num;
balance=b;}
void display(){
cout<<”Name: ”+name+”Account number: ”+account_number+”Balance: “+balance;}
}	
void deposit_money(int d){
	balance=balance+d;}
void withdraw_money(int w){
balance=balance-w;}
6.	when and object of the class is created athe constructor is called when an object of the class is created 
the class destructor is called whenever an object goes out of scope or is subjected to a delete

7.	BankAccount(){
name=none;
account_number=”0”;
balance=0;}
8.	A constructor that can be called with no arguments (this includes a constructor whose parameters all have default arguments)
It is called whenever an object is created without assigning a value to its parameters and the advantage id avoiding errors form garbage values that exists in the memory and  spare the programmer the effort of constructing any variable he or she creates
9.	
10.	This pointer is used to refer to the object that is using it 
