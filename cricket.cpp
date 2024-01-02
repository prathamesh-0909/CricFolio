#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

string t,type[20]={"Batsman","Batsman","Batsman","Batsman","Batsman","Allrounder","Bowler","Bowler","Batsman","Batsman","Bowler"};
int a;
int age[20]={31,32,33,26,23,32,26,23,24,24,32};
string n,name[20]={"KL Rahul","Rohit Sharma","Virat Kohli","SHREYAS IYER","RISHABH PANT","RAVINDRA JADEJA",
                "SHARDUL THAKUR","DEEPAK CHAHAR","JASPRIT BUMRAH","YUZI CHAHAL","MOHAMMAD SHAMI"};
int r,runs[20]={9459,18329,22156,7590,5690,3590,1590,1590,1390,956,970};
double s,strike[20]={0.00,87.5,92.36,89.24,87.2,92.13,86.24,90.45,91.24,86.45,85.9,94.2};
double e,economy[20]={0.0,0.0,0.0,0.0,0.0,6.50,5.0,6.74,7.0,5.23,6.23};



class  Player{
    public:
    Player(){
    }
    
    
    void single(){
        int k;
        ifstream in("info.txt");
        in.open("info.txt");
        ofstream out("info.txt");

        cout<<"*** Welcome ***"<<endl<<endl
	        	<<"============================="<<endl
				<< "1.KL_RAHUL" << endl
		        << "2.ROHIT_SHARMA" << endl
		        << "3.VIRAT_KOHLI" << endl
		        << "4.SHREYAS_IYER" << endl
		        << "5.RISHABH_PANT" << endl
		        << "6.RAVINDRA_JADEJA" << endl
		        << "7.SHARDUL_THAKUR" << endl
		        << "8.DEEPAK_CHAHAR" << endl
		        << "9.MOHAMMAD_SHAMI" << endl
		        << "10.JASPRIT_BUMRAH" << endl
		        << "11.YUZI_CHAHAL" << endl
                << "12.All Players" << endl
                << "13.Highest Runs" << endl
				<<"=============================";
	        cout << endl
		        << endl
		        << "Which Player Information do you want: " << endl;
	        cin >> k;

        switch(k){
            case 1:
            for(int i=0;i<1;i++){
            in>>name[i]>>runs[i]>>strike[i]>>economy[i];
            getline(in,name[i]);
            cout<<i+1<<"\t\t\t"<<name[i]<<"\t\t\t"<<age[i]<<"\t\t\t"<<runs[i]<<"\t\t\t"<<strike[i]<<"\t\t\t"<<economy[i]<<"\t\t\t"<<endl;
            }
            in.close();
            break;

            case 2:
            for(int i=1;i<2;i++){
            in>>name[i]>>runs[i]>>strike[i]>>economy[i];
            getline(in,name[i]);
            cout<<i+1<<"\t\t\t"<<name[i]<<"\t\t\t"<<age[i]<<"\t\t\t"<<runs[i]<<"\t\t\t"<<strike[i]<<"\t\t\t"<<economy[i]<<"\t\t\t"<<endl;
            }
            in.close();
            break;

            case 3:
            for(int i=2;i<3;i++){
            in>>name[i]>>runs[i]>>strike[i]>>economy[i];
            getline(in,name[i]);
            cout<<i+1<<"\t\t\t"<<name[i]<<"\t\t\t"<<age[i]<<"\t\t\t"<<runs[i]<<"\t\t\t"<<strike[i]<<"\t\t\t"<<economy[i]<<"\t\t\t"<<endl;
            }
            break;

            case 4:
            for(int i=3;i<4;i++){
            in>>name[i]>>runs[i]>>strike[i]>>economy[i];
            getline(in,name[i]);
            cout<<i+1<<"\t\t\t"<<name[i]<<"\t\t\t"<<age[i]<<"\t\t\t"<<runs[i]<<"\t\t\t"<<strike[i]<<"\t\t\t"<<economy[i]<<"\t\t\t"<<endl;
            }
            in.close();
            break;

            case 5:
            for(int i=4;i<5;i++){
            in>>name[i]>>runs[i]>>strike[i]>>economy[i];
            getline(in,name[i]);
            cout<<i+1<<"\t\t\t"<<name[i]<<"\t\t\t"<<age[i]<<"\t\t\t"<<runs[i]<<"\t\t\t"<<strike[i]<<"\t\t\t"<<economy[i]<<"\t\t\t"<<endl;
            }
            in.close();
            break;

            case 6:
            for(int i=5;i<6;i++){
            in>>name[i]>>runs[i]>>strike[i]>>economy[i];
            getline(in,name[i]);
            cout<<i+1<<"\t\t\t"<<name[i]<<"\t\t\t"<<age[i]<<"\t\t\t"<<runs[i]<<"\t\t\t"<<strike[i]<<"\t\t\t"<<economy[i]<<"\t\t\t"<<endl;
            }
            in.close();
            break;

            case 7:
            for(int i=6;i<7;i++){
            in>>name[i]>>runs[i]>>strike[i]>>economy[i];
            getline(in,name[i]);
            cout<<i+1<<"\t\t\t"<<name[i]<<"\t\t\t"<<age[i]<<"\t\t\t"<<runs[i]<<"\t\t\t"<<strike[i]<<"\t\t\t"<<economy[i]<<"\t\t\t"<<endl;
            }
            in.close();
            break;

            case 8:
            for(int i=7;i<8;i++){
            in>>name[i]>>runs[i]>>strike[i]>>economy[i];
            getline(in,name[i]);
            cout<<i+1<<"\t\t\t"<<name[i]<<"\t\t\t"<<age[i]<<"\t\t\t"<<runs[i]<<"\t\t\t"<<strike[i]<<"\t\t\t"<<economy[i]<<"\t\t\t"<<endl;
            }
            in.close();
            break;

            case 9:
            for(int i=8;i<9;i++){
            in>>name[i]>>runs[i]>>strike[i]>>economy[i];
            getline(in,name[i]);
            cout<<i+1<<"\t\t\t"<<name[i]<<"\t\t\t"<<age[i]<<"\t\t\t"<<runs[i]<<"\t\t\t"<<strike[i]<<"\t\t\t"<<economy[i]<<"\t\t\t"<<endl;
            }
            in.close();
            break;

            case 10:
            for(int i=9;i<10;i++){
            in>>name[i]>>runs[i]>>strike[i]>>economy[i];
            getline(in,name[i]);
            cout<<i+1<<"\t\t\t"<<name[i]<<"\t\t\t"<<age[i]<<"\t\t\t"<<runs[i]<<"\t\t\t"<<strike[i]<<"\t\t\t"<<economy[i]<<"\t\t\t"<<endl;
            }
            in.close();
            break;

            case 11:
            for(int i=10;i<11;i++){
            in>>name[i]>>runs[i]>>strike[i]>>economy[i];
            getline(in,name[i]);
            cout<<i+1<<"\t\t\t"<<name[i]<<"\t\t\t"<<age[i]<<"\t\t\t"<<runs[i]<<"\t\t\t"<<strike[i]<<"\t\t\t"<<economy[i]<<"\t\t\t"<<endl;
            }
            in.close();
            break;

            case 12:
            Info();
            break;

            case 13:
            High();
            break;

            default:
            cout<<"Enter a valid choice"<<endl;
            break;
        }
    }


    void Info(){
        
        ifstream in("info.txt");
        in.open("info.txt");
        ofstream out("info.txt");
        out<<"sr.no"<<"\t\t\t"<<"Name"<<"  \t\t\t     "<<"Age"<<"\t\t\t"<<"   Runs"<<"\t\t\t"<<"Strike"<<"\t\t\t"<<"Economy"<<"\t\t\t"<<endl;
        for(int i=0;i<11;i++){
            out<<i+1<<"\t\t\t"<<name[i]<<"\t\t\t"<<age[i]<<"\t\t\t"<<runs[i]<<"\t\t\t"<<"\t\t\t"<<strike[i]<<"\t\t\t"<<economy[i]<<"\t\t\t"<<endl;      
        }
        out.close(); 

        cout<<"sr.no"<<"\t\t\t"<<"Name"<<"  \t\t\t     "<<"Age"<<"\t\t\t"<<"   Runs"<<"\t\t\t"<<"Strike"<<"\t\t\t"<<"Economy"<<"\t\t\t"<<endl;
        for(int i=0;i<11;i++){
            in>>name[i]>>runs[i]>>strike[i]>>economy[i];
            getline(in,name[i]);
            cout<<i+1<<"\t\t\t"<<name[i]<<"\t\t\t"<<age[i]<<"\t\t\t"<<runs[i]<<"\t\t\t"<<strike[i]<<"\t\t\t"<<economy[i]<<"\t\t\t"<<endl;
            in.close();
        }
        cout<<endl<<endl;
    }

    void High(){
        int temp,i,index;
        temp=runs[0];
        ifstream in("info.txt");
        in.open("info.txt");
        in>>name[i]>>runs[i]>>strike[i]>>economy[i];
        getline(in,name[i]);

        for(i=0;i<=11;i++)
        {
            if(temp<runs[i]){
                temp=runs[i];
                if(temp=runs[i]){
                    index = i;
                }
            }
            
        }
        cout<<"=============================================="<<endl;
        cout<<name[index]<<" has the highest score of "<<runs[index]<<endl;
        cout<<"=============================================="<<endl;
        in.close();
    }
};


class admin:public Player{

    public: 
        admin(){
             string password;
		    cout <<endl<<"Password: ";
		    char ch;
		    ch=getch();
            while(ch != 13)
            {
                password.push_back(ch);
                cout << "*";
                ch=getch();
            }

		    if (password == "Karan@123")
		    {
			    int k,i;
			    cout <<endl<< "*** Welcome Admin ***" << endl <<endl;
                label:
                cout<<"1.Edit Info"<<endl<<"2.Get Info"<<endl;
                cin>>i;
                if(i==1){
                    edit();
                }else if(i==2){
                    single();
                }else{
                    cout<<"Enter a valid choice"<<endl;
                    goto label;
                }
                
                cout<<"Do you want to logout"<<endl;
                cout<<"1.No"<<endl<<"2.Yes"<<endl;
                cin>>k;
                if(k==1)
                {
            	    goto label;
			    }else{}
		    }
		    else
		    {
                    cout << "Invalid  password " << endl;
                    admin();
            }
        }

        void edit(){
        int sr,se;
        ifstream in("info.txt");
        in.open("info.txt");
        ofstream out("info.txt");
        cout<<"Enter serial number for player you want to edit: "<<endl;
        cout<<"sr.no"<<"\t\t\t"<<"Name"<<endl;
        for(int i=0;i<11;i++){
            in>>name[i]>>runs[i]>>strike[i]>>economy[i];
            getline(in,name[i]);
            cout<<i+1<<"\t\t\t"<<name[i]<<endl;
        }
        cin>>sr;
        cout<<"Which section you want to edit: "<<endl;
        label:
        cout<<"1.Name"<<endl<<"2.Age"<<endl<<"3.Runs"<<endl<<"4.Strike Rate"<<endl<<"5.Economy"<<endl<<"Enter your choice: ";
        cin>>se;
        if(se == 1){
            for(int i=sr-1;i<sr;i++){
                cout<<"Enter Name: ";
                cin>>n;
                name[i] = n;
                
            }
            out<<"sr.no"<<"\t\t\t"<<"Name"<<"  \t\t\t\t\t     "<<"Age"<<"\t\t\t"<<"   Runs"<<"\t\t\t"<<"Strike"<<"\t\t\t"<<"Economy"<<"\t\t\t"<<endl;
            for(int i=0;i<11;i++){
                out<<i+1<<"\t\t\t"<<name[i]<<"\t\t\t\t"<<age[i]<<"\t\t\t"<<runs[i]<<"\t\t\t"<<strike[i]<<"\t\t\t"<<economy[i]<<"\t\t\t"<<endl;
                in>>name[i]>>runs[i]>>strike[i]>>economy[i];
                getline(in,name[i]);
                cout<<i+1<<"\t\t\t"<<name[i]<<"\t\t\t"<<age[i]<<"\t\t\t"<<runs[i]<<"\t\t\t"<<strike[i]<<"\t\t\t"<<economy[i]<<"\t\t\t"<<endl;
            }
        }else if(se == 2){
            for(int i=sr-1;i<sr;i++){
                cout<<"Enter Age: ";
                cin>>a;
                age[i] = a;
                
            }
            out<<"sr.no"<<"\t\t\t"<<"Name"<<"  \t\t\t     "<<"Age"<<"\t\t\t"<<"   Runs"<<"\t\t\t"<<"Strike"<<"\t\t\t"<<"Economy"<<"\t\t\t"<<endl;
            for(int i=0;i<11;i++){
                out<<i+1<<"\t\t\t"<<name[i]<<"\t\t\t"<<age[i]<<"\t\t\t"<<runs[i]<<"\t\t\t"<<strike[i]<<"\t\t\t"<<economy[i]<<"\t\t\t"<<endl;
                in>>name[i]>>runs[i]>>strike[i]>>economy[i];
                getline(in,name[i]);
                cout<<i+1<<"\t\t\t"<<name[i]<<"\t\t\t"<<age[i]<<"\t\t\t"<<runs[i]<<"\t\t\t"<<strike[i]<<"\t\t\t"<<economy[i]<<"\t\t\t"<<endl;
            }
        }else if(se == 3){
            for(int i=sr-1;i<sr;i++){
                cout<<"Enter Runs: ";
                cin>>r;
                runs[i] = r;
                
            }
            out<<"sr.no"<<"\t\t\t"<<"Name"<<"  \t\t\t     "<<"Age"<<"\t\t\t"<<"   Runs"<<"\t\t\t"<<"Strike"<<"\t\t\t"<<"Economy"<<"\t\t\t"<<endl;
            for(int i=0;i<11;i++){
                out<<i+1<<"\t\t\t"<<name[i]<<"\t\t\t"<<age[i]<<"\t\t\t"<<runs[i]<<"\t\t\t"<<strike[i]<<"\t\t\t"<<economy[i]<<"\t\t\t"<<endl;
                in>>name[i]>>runs[i]>>strike[i]>>economy[i];
                getline(in,name[i]);
                cout<<i+1<<"\t\t\t"<<name[i]<<"\t\t\t"<<age[i]<<"\t\t\t"<<runs[i]<<"\t\t\t"<<strike[i]<<"\t\t\t"<<economy[i]<<"\t\t\t"<<endl;
            }
        }else if(se == 4){
            for(int i=sr-1;i<sr;i++){
                cout<<"Enter Strike: ";
                cin>>s;
                strike[i] = s;
            }
            out<<"sr.no"<<"\t\t\t"<<"Name"<<"  \t\t\t     "<<"Age"<<"\t\t\t"<<"   Runs"<<"\t\t\t"<<"Strike"<<"\t\t\t"<<"Economy"<<"\t\t\t"<<endl;
            for(int i=0;i<13;i++){
                out<<i+1<<"\t\t\t"<<name[i]<<"\t\t\t"<<age[i]<<"\t\t\t"<<runs[i]<<"\t\t\t"<<strike[i]<<"\t\t\t"<<economy[i]<<"\t\t\t"<<endl;
                in>>name[i]>>runs[i]>>strike[i]>>economy[i];
                getline(in,name[i]);
                cout<<i+1<<"\t\t\t"<<name[i]<<"\t\t\t"<<age[i]<<"\t\t\t"<<runs[i]<<"\t\t\t"<<strike[i]<<"\t\t\t"<<economy[i]<<"\t\t\t"<<endl;
            }
        }else if(se == 5){
            for(int i=sr-1;i<sr;i++){
                cout<<"Enter economy: ";
                cin>>e;
                economy[i] = e;
                
            }

            for(int i=0;i<13;i++){
                out<<i+1<<"\t\t\t"<<name[i]<<"\t\t\t"<<age[i]<<"\t\t\t"<<runs[i]<<"\t\t\t"<<strike[i]<<"\t\t\t"<<economy[i]<<"\t\t\t"<<endl;
                in>>name[i]>>runs[i]>>strike[i]>>economy[i];
                getline(in,name[i]);
                cout<<i+1<<"\t\t\t"<<name[i]<<"\t\t\t"<<age[i]<<"\t\t\t"<<runs[i]<<"\t\t\t"<<strike[i]<<"\t\t\t"<<economy[i]<<"\t\t\t"<<endl;
            }
        }else{
            cout<<"Enter a valid choice"<<endl;
            goto label;
        }
    }

};


int main(){

    Player p;
    int i,j,k,n;
        cout<<"Login as:"<<endl<<"1.Admin"<<endl<<"2.User"<<endl;
		cout<<"Enter your choice: ";
        cin>>n;
        

        if(n == 1)
        {
            admin ad;
        }else if(n==2){
            p.single();
        }else{
            cout<<"Enter a valid choice"<<endl;
            goto a;
        }
        
    
    cout<<"Do you want to continue"<<endl<<"1.Yes"<<endl<<"2.No"<<endl<<"Enter your choice: ";
    cin>>i;

    while(i == 1){
        a:
        cout<<"Login as:"<<endl<<"1.Admin"<<endl<<"2.User"<<endl;
		cout<<"Enter your choice: ";
        cin>>n;
        

        if(n == 1)
        {

            admin ad;
            cout<<"1.Edit Info"<<endl<<"2.Get Info"<<endl<<"Enter your choice: ";
            cin>>j;
            if(j==1)
            {
                ad.edit();
            }else if(j==2){
                p.Info();
            }else{
            cout<<"Enter a valid choice"<<endl;
            }
        }

        else if(n==2){
            p.single();
        }else{
            cout<<"Enter a valid choice"<<endl;
            goto a;
        }
    }
    return 0;
}