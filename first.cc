#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;
void printSpace(){
		system("clear");
	//code for space//////////////////////////////////////////////////////////////////////////////////////////////////
	for (int i = 0; i < 14; ++i)
	{
		for (int j = 0; j < 13; ++j)
		{
			cout<<". ";
		}
		cout<<endl;
	}
}
void printA(){
		system("clear");
		//code for A////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		int p=5,r=6;
		bool flagr=true;
		for (int i = 0; i < 14; ++i)
		{
			 if(i==7||i==6){
				cout<<". . . ";
				for (int j = 0; j < 7; ++j)cout<<"$ ";
				cout<<". . . ";
				}
			else
			for (int j = 0; j < 13; ++j)
			{
				if(i==2&&(j==6||j==5||j==7))
				{
					cout<<"$ ";
					continue;
				}
				if(i==3&&(j==5||j==7||j==4||j==8))
				{
					cout<<"$ ";
					continue;
				}
				
				if(i>=4&&i<=11&&(j==4||j==8||j==3||j==9))
				{
					cout<<"$ ";
					continue;
				}
				cout<<". ";
			}
			cout<<endl;
			flagr=true;
		}
}
void printB(){
		bool flag=true;
		int ii=0;
		system("clear");
//////////////////////////////////////////// code for B//////////////////////////////////////////////////////
		for (int i = 0; i < 14; ++i)
		{
			if(flag)
			for (int j = 0; j < 13; ++j)
			{
				if((ii==4||ii==2)&&j==0)
				{
					cout<<". . $ $ ";
					j=3;
					continue;
				}
				if ((ii==4||ii==2)&&j==9)
				{
					cout<<"$ $ . .";
					break;
				}
				cout<<". ";
				if(i%2)flag=false;
			}
			else{
				cout<<". . ";
				for (int j = 0; j < 9; ++j){
					if((i==2||i==11)&&j==8){
						cout<<". ";
						continue;
					}
					cout<<"$ ";
				}

				if(i%2)flag=true;
				cout<<". . ";
				 ii++;
			}
			cout<<endl;
		}
}
void printC(){
		bool flag=true;
		int ii=0;
		system("clear");
//code for C/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		for (int i = 0; i < 14; ++i)
		{
			if(flag)
			for (int j = 0; j < 13; ++j)
			{
				if((ii==4||ii==2)&&j==0)
				{
					cout<<". . $ $ ";
					j=3;
					continue;
				}
				cout<<". ";
				if(i%2)flag=false;
			}
			else{
				if(i==6||i==7){
				cout<<". . $ $ ";	
				for (int j = 0; j < 7; ++j)
				cout<<". ";	
				}
		else
			{
				cout<<". . ";
				for (int j = 0; j < 9; ++j){
					if(((i==3||i==10)&&j==8)||((i==2||i==11)&&j==0)){
						cout<<". ";
						continue;
					}
					cout<<"$ ";
				}
			}
				if(i%2)flag=true;
				cout<<". . ";
				 ii++;
		}
		cout<<endl;
	}
}
void printD(){
		bool flag=true;
		int ii=0;
		system("clear");
//code for D/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		for (int i = 0; i < 14; ++i)
		{
			if(flag)
			for (int j = 0; j < 13; ++j)
			{
				if((ii==4||ii==2)&&j==0)
				{
					cout<<". . $ $ ";
					j=3;
					continue;
				}
				if ((ii==4||ii==2)&&j==9)
				{
					cout<<"$ $ . .";
					break;
				}
				cout<<". ";
				if(i%2)flag=false;
			}
			else{
				if(i==6||i==7){
				cout<<". . $ $ ";	
				for (int j = 0; j < 5; ++j)
				cout<<". ";
				cout<<"$ $ ";	
				}
		else	{

				cout<<". . ";
				for (int j = 0; j < 9; ++j){
					if((i==2||i==11)&&j==8){
						cout<<". ";
						continue;
					}
					cout<<"$ ";
				}
			}
				if(i%2)flag=true;
				cout<<". . ";
				 ii++;
			}
			cout<<endl;
		}
}
void printE(){
		bool flag=true;
		int ii=0;
		system("clear");
	//code for E/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		for (int i = 0; i < 14; ++i)
		{
			if(flag)
			for (int j = 0; j < 13; ++j)
			{
				if((ii==2||ii==4)&&j==0)
				{
					cout<<". . $ $ ";
					j=3;
					continue;
				}
				cout<<". ";
				if(i%2)flag=false;
			}
			else{
				cout<<". . ";
				for (int j = 0; j < 9; ++j)cout<<"$ ";
				if(i%2)flag=true;
				cout<<". . ";
				 ii++;
			}
			cout<<endl;
	}
}
void printF(){	
		bool flag=true;
		int ii=0;
		system("clear");
	//code for F/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		for (int i = 0; i < 14; ++i)
		{
			if(flag)
			for (int j = 0; j < 13; ++j)
			{
				if((ii==2||ii==4)&&j==0)
				{
					cout<<". . $ $ ";
					j=3;
					continue;
				}
				cout<<". ";
				if(i%2)flag=false;
			}
			else{
				cout<<". . ";
				if(i==10||i==11)
				{
					cout<<"$ $ ";
				for (int j = 0; j < 7; ++j){
					cout<<". ";
				}
				}
			else{
				for (int j = 0; j < 9; ++j){
					if((i==6||i==7)&&j==6)
					{
						cout<<". . . ";
						j=9;
						continue;
					}
					cout<<"$ ";
				}
			}
				if(i%2)flag=true;
				cout<<". . ";
				 ii++;
			}
			cout<<endl;
	}
}
void printG(){
		bool flag=true;
		int ii=0;
		system("clear");
	//code for G/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		for (int i = 0; i < 14; ++i)
		{
			if(flag)
			for (int j = 0; j < 13; ++j)
			{
				if((ii==2||ii==4)&&j==0)
				{
					cout<<". . $ $ ";
					j=3;
					continue;
				}
				if (ii==4&&j==9)
				{
					cout<<"$ $ . .";
					break;
				}
				cout<<". ";
				if(i%2)flag=false;
			}
			else{
				cout<<". . ";
				for (int j = 0; j < 9; ++j){
					if(((i==2||i==11)&&(j==8||j==0))||((i==6&&(j==8||j==2||j==3))||(i==7)&&(j==2||j==3))) {
						cout<<". ";
						continue;
					}
					cout<<"$ ";
				}
				if(i%2)flag=true;
				cout<<". . ";
				 ii++;
			}
			cout<<endl;
		}	
}
void printH(){
		system("clear");
		//code for H////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		for (int i = 0; i < 14; ++i)
		{
			//cout<<i<<" ";
			 if(i==6||i==7){
				cout<<". . ";
				for (int j = 0; j < 9; ++j)cout<<"$ ";
				cout<<". . ";
				}
			else
			for (int j = 0; j < 13; ++j)
			{
				if(i>=2&&i<=11&&j==0)
				{
					cout<<". . $ $ ";
					j=3;
					continue;
				}
				if(i>=2&&i<=11&&j==9)
				{
					cout<<"$ $ . .";
					break;
				}
				cout<<". ";
			}
			cout<<endl;
		}
}

void printI(){
		system("clear");
		//code for I////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		for (int i = 0; i < 14; ++i)
		{
			//cout<<i<<" ";
			 if(i==2||i==11||i==3||i==10	){
				cout<<". . ";
				for (int j = 0; j < 9; ++j)cout<<"$ ";
				cout<<". . ";
				}
			else
			for (int j = 0; j < 13; ++j)
			{
				if(i>=2&&i<=11&&j==5)
				{
					cout<<" $ $  ";
					j=7;
					continue;
				}
				cout<<". ";
			}
			cout<<endl;
		}
}
void printJ(){
		system("clear");
	//code for J////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		for (int i = 0; i < 14; ++i)
		{
			//cout<<i<<" ";
			 if(i==10||i==11){
				cout<<". . ";
				for (int j = 0; j < 6; ++j){
					if(j==3){
						cout<<" ";
						continue;

					}
					if(i==11&&(j==5||j==0)){
						cout<<". ";
						continue;
					}

					cout<<"$ ";
				}
				cout<<"  . . . . . ";
				}
			else
			for (int j = 0; j < 13; ++j)
			{
				if(i>=2&&i<=11&&j==5)
				{
					if(i==11){
						cout<<" $ . ";
						j=7;
					continue;
					}
					cout<<" $ $  ";
					j=7;
					continue;
				}
				cout<<". ";
			}
			cout<<endl;
		}
}
void printK(){
		int k=5,q=6;
		bool flag=true;
		int ii=0;
		system("clear");
//code for k/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		for (int i = 0; i < 14; ++i)
		{
			if(flag)
			for (int j = 0; j < 13; ++j)
			{
				if((ii==4||ii==2)&&j==0)
				{
					cout<<". . $ $ ";
					j=3;
					continue;
				}
				if(ii==2&&j==q)
				{
					cout<<"$ $ ";
					q--;
					j++;
					continue;
				}
				if(ii==4&&j==k)
				{
					cout<<"$ $ ";
					k++;
					j++;
					continue;
				}
				cout<<". ";
				if(i%2)flag=false;
			}
			else{	
				cout<<". . $ $ ";
				for (int j = 0; j < 4; ++j){
					if((i==6||i==7)&&j==0){
						cout<<"$ . . . ";
						continue;
					}	
					cout<<". ";
				}
				if(i==10||i==3)cout<<"$ $ . ";
				else	if(i==11||i==2)
				cout<<". $ $ ";
			if(i%2)flag=true;
				cout<<". . ";
				 ii++;
			}
			cout<<endl;
		}
}
void printL(){
		system("clear");	
	//code for L////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		for (int i = 0; i < 14; ++i)
		{
			//cout<<i<<" ";
			 if(i==10||i==11){
				cout<<". . ";
				for (int j = 0; j < 9; ++j)cout<<"$ ";
				cout<<". . ";
				}
			else
			for (int j = 0; j < 13; ++j)
			{
				if(i>=2&&i<=9&&j==0)
				{
					cout<<". . $ $ ";
					j=3;
					continue;
				}
				cout<<". ";
			}
			cout<<endl;
		}sleep(1);
}	
void printM(){
		system("clear");
	//code for M////////////////////////////////////////////////////////////////////////////////////////////////////////
	int k=3,q=4,p=9,o=0;
	for (int i = 0; i < 14; ++i)
	{
		for (int j = 0; j < 13; ++j)
		{
			if((i>=2&&i<=11)&&j==0)
			{
				cout<<". $ $ ";
				j=2;
				continue;
			}
		           if((i>=3&&i<=8)&&j==k&&k<p)	
			{
				if(i==2)cout<<". ";else
				cout<<"$ ";
				if(i==8)cout<<"$ ";
				else
					cout<<". ";
				q++;
				if(q%2==0)k++;
				j++;
				continue;
			}
			if((i>=3&&i<=8)&&j==p&&p>k)	
			{
				if(i==2)cout<<". ";else
				cout<<"$ ";
				o++;
				if(o%2==0)p--;
				continue;
			}
			if((i>=2&&i<=11)&&j==10)
			{
				cout<<"$ $ . ";
				break;
			}
			cout<<". ";
		}
		cout<<endl;
	}
}
void printN(){
		system("clear");
	//code for N////////////////////////////////////////////////////////////////////////////////////////////////////////
	int k=4,q=4;
	for (int i = 0; i < 14; ++i)
	{
		for (int j = 0; j < 13; ++j)
		{
			if((i>=2&&i<=11)&&j==0)
			{
				cout<<". . $ $ ";
				j=3;
				continue;
			}
			if((i>=2&&i<=11)&&j==k)
			{
				cout<<"$ ";
				q++;
				if(q%2==0)k++;
				j++;
				continue;
			}
			if((i>=2&&i<=11)&&j==10)
			{
				cout<<"$ $ . .";
				break;
			}
			cout<<". ";
		}
		cout<<endl;
	}
}
void printO(){
			bool flag=true;
		int ii=0;
		system("clear");
//code for O/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		for (int i = 0; i < 14; ++i)
		{
			if(flag)
			for (int j = 0; j < 13; ++j)
			{
				if((ii==4||ii==2)&&j==0)
				{
					cout<<". . $ $ ";
					j=3;
					continue;
				}
				if((ii==4||ii==2)&&j==9)
				{
					cout<<"$ $ . . ";
					break;
				}
				cout<<". ";
				if(i%2)flag=false;
			}
			else{
				if(i==6||i==7){
				cout<<". . $ $ ";	
				for (int j = 0; j < 5; ++j)
				cout<<". ";
				cout<<"$ $ ";	
				}

		else
			{
				cout<<". . ";
				for (int j = 0; j < 9; ++j){
					if(((i==3||i==10)&&(j==8||j==0)) || ((i==2||i==11)&&(j==0||j==1||j==7||j==8))){
						cout<<". ";
						continue;
					}
					cout<<"$ ";
				}
			}
				if(i%2)flag=true;
				cout<<". . ";
				 ii++;
		}
		cout<<endl;
	}
}
void printP(){
		bool flag=true;
		int ii=0;
		system("clear");
//code for P/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		for (int i = 0; i < 14; ++i)
		{
			if(flag)
			for (int j = 0; j < 13; ++j)
			{
				if((ii==4||ii==2)&&j==0)
				{
					cout<<". . $ $ ";
					j=3;
					continue;
				}
				if (ii==2&&j==9)
				{
					cout<<"$ $ . .";
					break;
				}
				cout<<". ";
				if(i%2)flag=false;
			}
			else{
				if(i==10||i==11){
				cout<<". . $ $ ";	
				for (int j = 0; j < 7; ++j)
				cout<<". ";	
				}
		else	{

				cout<<". . ";
				for (int j = 0; j < 9; ++j){
					if((i==2||i==11)&&j==8){
						cout<<". ";
						continue;
					}
					cout<<"$ ";
				}
			}
				if(i%2)flag=true;
				cout<<". . ";
				 ii++;
			}
			cout<<endl;
		}
}
void printQ(){
		
		bool flag=true;
		int ii=0;
		system("clear");
//code for Q/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		int k=7;
		for (int i = 0; i < 14; ++i)
		{
			if(flag)
			for (int j = 0; j < 13; ++j)
			{
				if((ii==4||ii==2)&&j==0)
				{
					cout<<". . $ $ ";
					j=3;
					continue;
				}
				if((ii==4||ii==2)&&j==9)
				{
					cout<<"$ $ . . ";
					break;
				}
				if((i==12||i==13)&&j==k){
					cout<<"$ $ ";
					j++;
					k++;
					continue;
				}
				cout<<". ";
				if(i%2)flag=false;
			}
			else{
				if(i==6||i==7){
				cout<<". . $ $ ";	
				for (int j = 0; j < 5; ++j)
				cout<<". ";
				cout<<"$ $ ";	
				}

		else
			{
				cout<<". . ";
				for (int j = 0; j < 9; ++j){
					if(((i==3||i==10)&&(j==8||j==0)) || ((i==2||i==11)&&(j==0||j==1||j==7||j==8))){
						cout<<". ";
						continue;
					}
					cout<<"$ ";
				}
			}
				if(i%2)flag=true;
				cout<<". . ";
				 ii++;
		}
		cout<<endl;
	}
}
void printR(){
		int k=7;
		bool flag=true;
		int ii=0;
		system("clear");
//code for R/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		for (int i = 0; i < 14; ++i)
		{
			if(flag)
			for (int j = 0; j < 13; ++j)
			{
				if((ii==4||ii==2)&&j==0)
				{
					cout<<". . $ $ ";
					j=3;
					continue;
				}
				if(ii==4&&j==k)
				{
					cout<<"$ $ ";
					k++;
					j++;
					continue;
				}
				if (ii==2&&j==9)
				{
					cout<<"$ $ . .";
					break;
				}
				cout<<". ";
				if(i%2)flag=false;
			}
			else{
				if(i==10||i==11){
				cout<<". . $ $ ";	
				for (int j = 0; j < 5; ++j)
				cout<<". ";	
				cout<<"$ $ ";
				}
		else	{

				cout<<". . ";
				for (int j = 0; j < 9; ++j){
					if((i==2||i==11)&&j==8){
						cout<<". ";
						continue;
					}
					cout<<"$ ";
				}
			}
				if(i%2)flag=true;
				cout<<". . ";
				 ii++;
			}
			cout<<endl;
		}

}
void printS(){
		bool flag=true;
		int ii=0;
		system("clear");
	//code for S/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		for (int i = 0; i < 14; ++i)
		{
			if(flag)
			for (int j = 0; j < 13; ++j)
			{
				if(ii==2&&j==0)
				{
					cout<<". . $ $ ";
					j=3;
					continue;
				}
				if (ii==4&&j==9)
				{
					cout<<"$ $ . .";
					break;
				}
				cout<<". ";
				if(i%2)flag=false;
			}
			else{
				cout<<". . ";
				for (int j = 0; j < 9; ++j){
					if(((i==2||i==11)&&(j==8||j==0))||((i==6&&j==8)||(i==7)&&j==0)) {
						cout<<". ";
						continue;
					}
					cout<<"$ ";
				}
				if(i%2)flag=true;
				cout<<". . ";
				 ii++;
			}
			cout<<endl;
		}
}
void printT(){
system("clear");
	//code for T////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		for (int i = 0; i < 14; ++i)
		{
			//cout<<i<<" ";
			 if(i==2||i==3){
				cout<<". . ";
				for (int j = 0; j < 9; ++j)cout<<"$ ";
				cout<<". . ";
				}
			else
			for (int j = 0; j < 13; ++j)
			{
				if(i>=2&&i<=11&&j==5)
				{
					cout<<" $ $  ";
					j=7;
					continue;
				}
				cout<<". ";
			}
			cout<<endl;
		}
}
void printU(){
		bool flag=true;
		int ii=0;
		system("clear");
//code for U/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		for (int i = 0; i < 14; ++i)
		{
			if(flag)
			for (int j = 0; j < 13; ++j)
			{
				if((ii==4||ii==2)&&j==0)
				{
					cout<<". . $ $ ";
					j=3;
					continue;
				}
				if((ii==4||ii==2)&&j==9)
				{
					cout<<"$ $ . . ";
					break;
				}
				cout<<". ";
				if(i%2)flag=false;
			}
			else{
				if(i==6||i==7){
				cout<<". . $ $ ";	
				for (int j = 0; j < 5; ++j)
				cout<<". ";
				cout<<"$ $ ";	
				}

		else
		{
				cout<<". . ";
				if(i==2||i==3)
				{
					cout<<"$ $ ";
					for(int i=0;i<5;i++)cout<<". ";
					cout<<"$ $ ";
				}
				else
			{
				for (int j = 0; j < 9; ++j){
					if(i==10&&(j==8||j==0) || i==11&&(j==0||j==1||j==7||j==8)) {
						cout<<". ";
						continue;
					}
					cout<<"$ ";
				}
			}
		}
				if(i%2)flag=true;
				cout<<". . ";
				 ii++;
		}
		cout<<endl;
	}
}
void printV(){
	system("clear");
		//code for V////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		int p=5,r=6;
		bool flagr=true;
		for (int i = 0; i < 14; ++i)
		{
			for (int j = 0; j < 13; ++j)
			{
				if(i==11&&(j==6||j==5||j==7))
				{
					cout<<"$ ";
					continue;
				}
				if(i==10&&(j==5||j==7||j==4||j==8))
				{
					cout<<"$ ";
					continue;
				}
				
				if(i>=2&&i<=9&&(j==4||j==8||j==3||j==9))
				{
					cout<<"$ ";
					continue;
				}
				cout<<". ";
			}
			cout<<endl;
			flagr=true;
		}
}
void printW(){
	system("clear");
		//code for W////////////////////////////////////////////////////////////////////////////////////////////////////////
	int k=6,q=0,p=5,o=0;
	for (int i = 0; i < 14; ++i)
	{
		for (int j = 0; j < 13; ++j)
		{
			
			if((i>=2&&i<=11)&&j==0)
			{
				cout<<". $ $ ";
				j=2;
				continue;
			}
		           if((i>=7&&i<=11)&&j==k)	
			{
				cout<<"$ ";
				if(j!=8)cout<<". ";
				//cout<<". ";
				q++;
				if(q%2==0)k++;
				j++;
				if(j!=9)continue;
			}
			if((i>=7&&i<=11)&&j==p)	
			{
				if(i==2)cout<<". ";else
				cout<<"$ ";
				o++;
				if(o%2==0)p--;
				continue;
			}
			if((i>=2&&i<=11)&&j==9)
			{
				cout<<"$ $ . . ";
				break;
			}
			cout<<". ";
		}
		cout<<endl;
	}
}
void printX(){
system("clear");
	//code for X////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		int r=9,q=2;
		for (int i = 0; i < 14; ++i)
		{
			for (int j = 0; j < 13; ++j)
			{
			if((i>=3&&i<=10) &&j==q||(i>=3&&i<=10)&&j==r){
				if((i>=3&&i<=10)&&j==q)
				{
					if(i>6){j++;
						cout<<". $ $ ";
					}
					else
					cout<<"$ $ ";
					q+=1;
					j++;
				}
				if((i>=3&&i<=10)&&j==r)
				{
					if(i==6){
						cout<<"$ ";
					}
					else if(i==7){
						j++;
						cout<<"$ $ $ ";	
					}
					else
					cout<<"$ $ ";
					r-=1;
					j++;
				}
				continue;
			}
				cout<<". ";
			}
			cout<<endl;
		}
}
void printY(){
system("clear");
	//code for Y////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		int r=9,q=2;
		for (int i = 0; i < 14; ++i)
		{
			for (int j = 0; j < 13; ++j)
			{
			if((i>=3&&i<=5) &&j==q||(i>=3&&i<=5)&&j==r){
				if((i>=3&&i<=5)&&j==q)
				{
					cout<<"$ $ ";
					q+=1;
					j++;
				}
				if((i>=3&&i<=5)&&j==r)
				{
					cout<<"$ $ ";
					r-=1;
					j++;
				}
				continue;
										}
			if((i>=6&&i<=10)&&j==5)
				{
				 cout<<" $ $  ";
				 j+=2;
				 continue;
				}
				cout<<". ";
			}
			cout<<endl;
		}
}
void printZ(){		
system("clear");
		//code for Z////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		int k=8;
		for (int i = 0; i < 14; ++i)
		{
			//cout<<i<<" ";
			 if(i==2||i==11||i==3||i==10	){
				cout<<". . ";
				for (int j = 0; j < 9; ++j)cout<<"$ ";
				cout<<". . ";
				}
			else
			for (int j = 0; j < 13; ++j)
			{
				if(i>=4&&i<=9&&j==k)
				{
					cout<<"$ $ . ";
					j=k+2;
					k-=1;
					continue;
				}
				cout<<". ";
			}
			cout<<endl;
		}
}
