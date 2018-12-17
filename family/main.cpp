#include <iostream>
#include <stdlib.h>
using namespace std;
class person
{
public:
    char First_Name[20];
    char Last_Name[20];
    char First_Fname[20];
    char Last_Fname[20];
    person* father;
    char First_Mname[20];
    char Last_Mname[20];
    person *mother;
    char** First_Siblings;
    person**siblings;
    char First_Wname[20];
    char Last_Wname[20];
    person* wife;
    char** First_Children;
    person** children;
	int sibn;
	int child;
	int valuue;
	int index;
	bool check;
	//function
	person()
	{
	    check=false;
		wife=NULL;
		children=NULL;
		father=NULL;
		mother=NULL;
		siblings=NULL;
		First_Siblings=NULL;
		First_Children=NULL;
	}
	void takedata()
    {
        cout << "please enter your first name: ";
        cin.ignore();
        cin.getline(First_Name,20);
        cout << "enter your Last name: ";
        cin.ignore();
        cin.getline(Last_Name,20);
        cout << "enter your fathers first name: ";
        cin.ignore();
        cin.getline(First_Fname,20);
        cout << "enter your fathers last name: ";
        cin.ignore();
        cin.getline(Last_Fname,20);
        cout << "enter your mother's first name: ";
        cin.ignore();
        cin.getline(First_Mname,20);
        cout << "enter your mother's Last name: ";
        cin.ignore();
        cin.getline(Last_Mname,20);
        cout << "enter the number of siblings (excluding you): ";
        cin >> sibn;
		if(sibn>0)
		{
			First_Siblings=(char **)malloc(sibn*sizeof(char *));
			for(int i=0;i<sibn;i++)
			{
				First_Siblings[i]=(char *)malloc(20*sizeof(char));
				cout << "enter your siblings name: ";
				cin.ignore();
				cin.getline(First_Siblings[i],20);
			}
		}
        char checks;
        cout << "are you married: (y for yes and n for no):::  ";
        cin >> checks;
        if(checks=='y'||checks=='Y')
        {
            check=true;
        }
        else
        {
            check=false;
        }
        if(check)
        {
            cout << "enter you wife's first name: ";
            cin.ignore();
            cin.getline(First_Wname,20);
            cout << "enter your wife's last name: ";
            cin.ignore();
            cin.getline(Last_Wname,20);

            cout << "how many children do you have: ";
            cin >> child;
            if(child>0)
            {
                First_Children=(char **)malloc(child*sizeof(char *));
                for(int i=0;i<child;i++)
                {
                    First_Children[i]=(char *)malloc(20*sizeof(char ));
                    cout << "enter your child's name: ";
                    cin.ignore();
                    cin.getline(First_Children[i],20);
                }
            }
        }
		valuue=0;
		int i=0;
		while(Last_Name[i]!='\0')
		{
			valuue+=int(Last_Name[i])-97;
			i++;
		}
		index=int(Last_Name[0])-97;

    }
    ~person()
    {
		delete First_Siblings;
		delete First_Children;
    }
    void editingdat()
    {
    }
    void viewdata()
    {
		cout <<endl<<"your name is :"<<First_Name<<" "<<Last_Name;
		cout <<endl<<"your father's name is :"<<First_Fname<<" "<<Last_Fname;
		cout <<endl<<"your mother's name is :"<<First_Mname<<" "<<Last_Mname;
		for(int i=0;i<sibn;i++)
		{
			cout <<endl<<"your sibling name is :"<<First_Siblings[i]<<" "<<Last_Name;
		}
		if (check)
		{
            cout <<endl<<"your Wife's name is :"<<First_Wname<<" "<<Last_Wname;
            for(int i=0;i<child;i++)
            {
                cout <<endl<<"your children name is :"<<First_Children[i]<<" "<<Last_Name;
            }
		}
    }
    int lastNum()
    {
		int sum=0;
		for(int i=0;Last_Name[i]!='\0';i++)
		{
			sum=sum+int(Last_Name[i]);
		}
		return sum;
    }
    char LastNC()
    {
        return Last_Name[0];
    }
	int values()
	{
		return valuue;
	}
	int ind()
	{
		return index;
	}
	bool operator!=(person human)
	{
		if((First_Name==human.First_Name)&&(First_Fname==human.First_Fname)&&(First_Mname==human.First_Mname)&&(First_Wname==human.First_Wname))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void humandata(person temp)
	{
		//person name
		for(int i=0;temp.First_Name[i-1]!='\0';i++)
		{
			First_Name[i]=temp.First_Name[i];
		}
		for(int i=0;temp.Last_Name[i-1]!='\0';i++)
		{
			Last_Name[i]=temp.Last_Name[i];
		}
		//father name
		for(int i=0;temp.First_Fname[i-1]!='\0';i++)
		{
			First_Fname[i]=temp.First_Fname[i];
		}
		for(int i=0;temp.Last_Fname[i-1]!='\0';i++)
		{
			Last_Fname[i]=temp.Last_Fname[i];
		}
		//mother name
		for(int i=0;temp.First_Mname[i-1]!='\0';i++)
		{
			First_Mname[i]=temp.First_Mname[i];
		}
		for(int i=0;temp.Last_Mname[i-1]!='\0';i++)
		{
			Last_Mname[i]=temp.Last_Mname[i];
		}
		//siblings
		sibn=temp.sibn;
		First_Siblings=(char **)malloc(sibn*sizeof(char *));
        for(int i=0;i<sibn;i++)
        {
            First_Siblings[i]=(char *)malloc(20*sizeof(char));
			for(int j=0;temp.First_Siblings[i][j]!='\0';j++)
			{
				First_Siblings[i][j]=temp.First_Siblings[i][j];
			}
        }
		//wife
		for(int i=0;temp.First_Wname[i-1]!='\0';i++)
		{
			First_Wname[i]=temp.First_Wname[i];
		}
		for(int i=0;temp.Last_Wname[i-1]!='\0';i++)
		{
			Last_Wname[i]=temp.Last_Wname[i];
		}
		//children
		First_Children=(char **)malloc(child*sizeof(char *));
		for(int i=0;i<sibn;i++)
        {
            First_Children[i]=(char *)malloc(20*sizeof(char));
			for(int j=0;temp.First_Children[i][j]!='\0';j++)
			{
				First_Children[i][j]=temp.First_Children[i][j];
			}
        }
	}
};
class datadtruck
{
public:
    datadtruck *prevperson;
	datadtruck *equalperson;
	int inddd;
	int valuee;
    person human;
    datadtruck *nextperson;
	datadtruck()
    {
        prevperson=NULL;
		equalperson=NULL;
        nextperson=NULL;
    }
    datadtruck(person dataa)
    {

		equalperson=NULL;
		prevperson=NULL;

        nextperson=NULL;

		human=dataa;
		cout <<"hi"<<endl;
		inddd=human.ind();
		valuee=human.values();
		cout <<"hi2"<<endl;
    }
    char LastFC()
    {
        return human.LastNC();
    }
    void delet()
    {
		if(equalperson!=NULL)
		{
			human=equalperson->human;
			equalperson->delet();
		}
		else
		{
			if(nextperson!=NULL)
			{
				human=nextperson->human;
				nextperson->delet();
			}
			else
			{
				if(prevperson!=NULL)
				{
					human=prevperson->human;
					prevperson->delet();
				}
				else
				{
					delete this;
				}
			}
		}
    }
	void newent(person newper)
	{
		int tnum = newper.values();
		if(tnum<valuee)
		{
			if(prevperson==NULL)
			{
				prevperson=new datadtruck(newper);
			}
			else
			{
				prevperson->newent(newper);
			}
		}
		else if(tnum>valuee)
		{
			if(nextperson==NULL)
			{
				nextperson=new datadtruck(newper);
			}
			else
			{
				nextperson->newent(newper);
			}
		}
		else
		{
			if(equalperson==NULL)
			{
				equalperson=new datadtruck(newper);
			}
			else
			{
				equalperson->newent(newper);
			}
		}
	}
	void disp()
	{
		human.viewdata();
	}
};
class data
{
public:
    datadtruck *alphabet[26];
	data()
	{
		for(int i=0;i<26;i++)
		{
			alphabet[i]=NULL;
		}
	}
	void insert(person newnt)
	{

		int index;
		index=int(newnt.LastNC())-97;

		if(alphabet[index]==NULL)
		{
			alphabet[index]=new datadtruck(newnt);

		}
		else
		{
			alphabet[index]->newent(newnt);
		}
	}
	datadtruck* findloc(person fid)
	{
		int index=fid.ind();
		int che=fid.values();
		datadtruck* temp=alphabet[index];
		while(temp->human!=fid)
		{
			if(che<temp->valuee)
			{
				temp=temp->prevperson;
			}
			else if(che>temp->valuee)
			{
				temp=temp->nextperson;
			}
			else
			{
				temp=temp->equalperson;
			}
		}
		return temp;
	}
	void delet(person goodbye)
	{
		datadtruck *temp;
		temp=findloc(goodbye);
		temp->delet();
	}
	void display(person human)
	{
		datadtruck* temp;
		temp=findloc(human);
		temp->disp();
	}

};
int main()
{
	person human;
	human.takedata();
	data list;
	list.insert(human);
	list.display(human);
    return 0;
}
