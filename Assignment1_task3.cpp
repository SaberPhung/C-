#include <iostream>

using namespace std;

void task3();

int main(){
    task3();
   
    return 0;
    
}

void task3(){
    struct student{
		char name[50];
        double attend;
        bool workdone;
        double score;
        unsigned status=1;
        int grade;
        }s[2];
        cout<< "Enter information of students: "<<endl;
        //store information
        for(int i=0; i<2;++i){
            cout<<"Name: ";
            cin >>s[i].name;
            
            cout<<"Attend: ";
            cin >>s[i].attend;
            
            cout<<"Workdone: ";
            cin >>s[i].workdone;
            
            cout<<"Score: ";
            cin >>s[i].score;
            
            cout <<endl;
            }
        for(int i=0;i<2;i++){
            if(s[i].score>=40 && s[i].workdone==1){
                s[i].status=1;
            }
            else{
                s[i].status=0;
            }
        }
        // total grade after pass
        for(int j=0;j<2;j++){
            if(s[j].status==1){
                for(int i=0; i<2;i++){
                    int bonus;
                    if(s[i].status==1){
                        s[i].grade=1;
                        if(s[i].score>40){
                            bonus=(s[i].score-40)/15;
                            s[i].grade=s[i].grade+bonus;
                            }
                    if(s[i].attend>0.5){
                        s[i].grade= s[i].grade+1;
                    }
                        
                    }
                    
                }
                if(s[j].grade>5) s[j].grade=5;
                
                
            }
            else s[j].grade=0;
            
        }
    // print cout
    cout << "Final result: ";
    for (int j=0;j<2;j++){
        cout <<" Student name: "<<s[j].name<<endl;
        cout << "Status: ";
        cout<< "Final grade: "<<s[j].grade<<endl<<endl;
    }
    
}




