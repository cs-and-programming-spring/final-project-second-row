
#include<string>
using namespace std;

class guest
{
private:
	string name;
	bool date;
	int age;
	String meal;
	String dateMeal;
	String giftToBuy;
	String hotel;
};
string guest::getName()
{
	return name;
}
void guest::setName(string newName) {
	name = newName;
}
bool guest::hasDate()
{
	return date;
}
void guest::setDate(bool newDate) {
	date = newDate;
}
int guest::getAge() {
	return age;
}
void guest::getAge() {
	return age;
}
string guest::getMeal() {
	return meal;
}
void guest::setMeal(string newMeal) {
	meal = newMeal;
}
string guest::getDateMeal() {
	return dateMeal;
}
void guest::setDateMeal(string newMeal) {
	dateMeal = newMeal;
}
string guest::getGiftToBuy() {
	return giftToBuy;
}
void guest::setGiftToBuy(string gift) {
	giftToBuy = gift;
}
string guest::getHotel() {
	return hotel;
}
void guest::setHotel(string newHotel) {
	hotel = newHotel;
}
