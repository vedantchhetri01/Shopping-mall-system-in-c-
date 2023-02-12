#include<iostream>
using namespace std;
class welcome
{
public:
    string name;
    void wel()
    {
        cout << "enter your name : ";
        cin >> name;
    }
};
int i;
class Item

{   string namee[50];
    int itemcode[50];
  float itemprice[50];
  int count;
public:
  void init()
  {
    count=0;
  }
  void addItem();
  void removeItem();
  void displayTotal();
  void displayItem();

};
void Item::addItem()
{
  cout <<"enter name of the item ";
  cin >> namee[count];
  cout<<"Enter item code ";
  cin>>itemcode[count];
  cout<<"Enter item price ";
  cin>>itemprice[count];
  count++;
}
void Item::removeItem()
{
  int rem;
  cout<<"Enter item code ";
  cin>>rem;
  for(i=0;i<count;i++)
  if(itemcode[i]==rem)
  itemprice[i]=0;

}
void Item::displayTotal()
{
  int sum=0;
  cout<<"Your total bill is : ";
  for(i=0;i<count;i++)
  sum=sum+itemprice[i];
  cout<<" "<<sum;
}
void Item::displayItem()
{
  for(i=0;i<count;i++)
  {
      cout <<namee[i]<<" ";
    cout<<itemcode[i]<<" ";
    cout<<itemprice[i]<<"\n";
  }
}
int main()
{
  welcome we;
  we.wel();
  Item order1;
  order1.init();
  int a;
  do{
  cout<<endl << "Select one of the following: \n";
  cout<<"press 1 to add item\n";
  cout<<"press 2 to remove item\n";
  cout<<"press 3 to display total price of item\n";
  cout<<"press 4 to display all items\n";
  cout<<"press 5 to quit\n";
  cin>>a;
  switch(a)
  {
    case 1:
        order1.addItem();
        break;
    case 2:
      order1.removeItem();
      break;
    case 3:
      order1.displayTotal();
      break;
    case 4:
      order1.displayItem();
      break;
    case 5:
      break;
  }
}
while(a!=5);
return 0;
}
