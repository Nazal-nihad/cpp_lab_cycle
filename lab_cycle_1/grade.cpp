#include <iostream>
class grades 
{
    private:
    std::string name;
    int roll_no;
    int mark_a , mark_b , mark_c ;

    public:
    void get_info();
    void set_input(int a,int b,int c ,std::string name1,int roll)
    {
        mark_a = a;
        mark_b = b;
        mark_c = c;
        name = name1;
        roll_no = roll;
    }
    int calc()
    {
        return (mark_a+mark_b+mark_c)/3;
    }
    void display(void);
};

void grades::get_info()
    {

    int a,b,c,roll;
    std::string name1;
    
    std::cout<<"\n";
    
    std::cout<<"ente name : ";
    std::cin>>name1;

    std::cout<<"ente roll no : ";
    std::cin>>roll;


    std::cout<<"ente mak1 (out of 10) : ";
    std::cin>>a;

    std::cout<<"ente mak2 (out of 10) : ";
    std::cin>>b;

    std::cout<<"ente mak3 (out of 10) : ";
    std::cin>>c;

    set_input(a, b, c,name1,roll);
    }
    
void grades::display(void)
    {
        std::cout<<"\n --- Grade list --- \n";
        if (calc()>=8.5){
            std::cout<<"Name : "<<name<<"\n"<<"roll no : "<<roll_no <<"\n"<<"Grade : "<<"A" <<"\n";
        }
        else if (calc()>7){
            std::cout<<"Name : "<<name<<"\n"<<"roll no : "<<roll_no <<"\n"<<"Grade : "<<"B" <<"\n";
        }
        else if (calc()>5.5){
            std::cout<<"Name : "<<name<<"\n"<<"roll no : "<<roll_no <<"\n"<<"Grade : "<<"C" <<"\n";
        }
        else {
            std::cout<<"Name : "<<name<<"\n"<<"roll no : "<<roll_no <<"\n"<<"Grade : "<<"D" <<"\n";
        }
        std::cout<<"\n";
    }
int main()
{
grades std1;
grades std3;
std1.get_info();
std3.get_info();
std1.display();
std3.display();
return 0;
}