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
        
    account account_001;
    //account_001.name="Jaydip Patel"; // Error sue to private name variable
    account_001.add_name("Jaydip Patel");
    account_001.add_balance(1000);
    cout<<account_001.get_balance()<<endl;
    cout<<account_001.get_name()<<endl;
    
    return 0;
}