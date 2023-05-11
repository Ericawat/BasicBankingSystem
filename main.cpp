#include <iostream>

void showBalance(double balance){
    std::cout<<"your balance is $"<<balance<<std::endl;
}
double  withdraw( double balance){
    double amount =0;

    std::cout<<"how much do you want to withdraw ?"<<std::endl;
    std::cin>>amount;

    if (amount > balance){
        std::cout<<"insufficient funds !!"<<std::endl;
        return 0;
    } else if (amount < 0){
        std::cout<<"invalid funds withdrawal :"<<std::endl;

        return 0;
    } else{
        std::cout<<"withdrawn :"<<"$"<<amount <<std::endl;
        return amount;
    }
}
double deposite(){
    double amount = 0;

    std::cout<<"enter amount for deposit :"<<std::endl;
    std::cin>>amount;

    if (amount > 0){
        return amount;
    }
    else{
        std::cout<<"enter a valid amount you beef!"<<std::endl;
        return 0;
    }

}

int main() {

    double balance = 0;
    int choice;

    do{
        std::cout<<" Choose what to start with :"<<std::endl;

        std::cout<<"1) show account balance :"<<std::endl;
        std::cout<<"2) withdraw money from account :"<<std::endl;
        std::cout<<"3) deposite money into account :"<<std::endl;
        std::cout<<"4) exit :"<<std::endl;
        std::cin>>choice;

        std::cin.clear();
        fflush(stdin);

        switch (choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 3:
                balance += deposite();
                showBalance(balance);
                break;
            case 4: std::cout<<"Exited : and thanks for using our service :"<<std::endl;
                break;

            default: std::cout<<"enter a valid choice! "<<std::endl;

        }

    } while (choice != 4);





    return 0;
}
