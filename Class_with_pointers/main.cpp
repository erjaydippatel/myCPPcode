#include <iostream>
using namespace std;
int main()
{
    class account 
    {
        // attibutes // Data variable
        private:
            string name;
            double balance;
        public:
        // Methods   // Functions
            int add_balance (double balance){
              this->balance= balance; 
              return true;
            }
            
            int add_name (string name){
                this->name=name;
                return true;
            }
            
            int get_balance(void){
                return this->balance;
            }
            
            string get_name(void){
                return this->name;
            } 
            
    };
        
    account *account_001 = new account;
    
    (*account_001).add_balance(12345); // using .
    account_001->add_balance(12345);   // uaing ->
    account_001->add_name("Jaydip Patel");
    
    cout<< account_001->get_balance() <<endl;
    cout<< account_001->get_name()    <<endl;
    
    delete account_001;
    
    

    
    return 0;
}