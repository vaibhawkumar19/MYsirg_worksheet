/*3. Define a base class Animals having member function sound() . Define another
derived class from Animals class named Dogs. You need to override the sound
function of the base class in the derived class.*/
#include<iostream>
#include<string.h>
using namespace std;
class Animals
{
	protected:
		string sound;
	public:
		string Sound()
		{
			return sound;
		}
		void set_Sound(string sound)
		{
			this->sound=sound;
		}
};
class dog:public Animals
{
	private:
		string dog_sound;
	public:
		string Sound()
		{
			return dog_sound;
		}
		void set_sound(string sound)
		{
			this->dog_sound=sound;
		}
};
int main()
{
	Animals cat;
	cat.set_Sound("mayon");
	string sound=cat.Sound();
	cout<<"sound of cat"<<(sound)<<endl;
	dog pets;
	pets.set_Sound("bow");
	cout<<"sound of dog is "<<pets.Sound()<<endl;
	return 0;
}
