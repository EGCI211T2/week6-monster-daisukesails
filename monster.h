#ifndef monster_h
#define monster_h

class monster{
private:
	string name;
	int hp,potion;
public:
	void Attack(monster &);
	void attack(monster &);
    void heal();
	monster(string n = "Unknown", int h = 100, int p = 0);
    ~monster();
};

monster::~monster()
{
	cout<<name<< " is gone."<<endl;
}

monster::monster(string n,int h, int p)
{
	name=n;
	hp=h;
	potion=p;
	cout<<"Monster "<<name<<" is here"<<endl;
}
#endif
