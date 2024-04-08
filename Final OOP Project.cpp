#include <iostream>
using namespace std;
int stack[10], MAX = 5, top = -1, A[10][10];
class ticket
{
 private:
string name;
long long int cno;
int sum;
int normal, gold, amt;
int choice, ans, total;
int option, quantity, price;
int movie_name, time, no_tickets, date, type;
string datee,timee,mov_name, screen, seats;
 public:
 void push(int);
 void pop();
 void menu();
 void display();
 void pay(int);
 void orderFood();
 void bookTickets();
 void seat();
 void printTicket();
 char continueQuestion();
 void cancel();
} t;


void ticket:: push(int value)
{
  if (top >= MAX - 1)
    cout << "Cart is Full" << endl;
  else
    {
    top++;
    stack[top] = value;
  }
}


void ticket:: pop()
{
  if (top == -1)
    cout << "Cart is Empty" << endl;
  else
    {
    cout << "Amount reduced is : " << stack[top] << endl;
    top--;
  }
}


void ticket::menu()
{
    cout << "\n\t\t      WELCOME TO ANDHERI PVR \n";
    cout << " ================================================================="
            "=\n";
    cout << "||             1- Movie Information                               "
            "||\n";
    cout << "||             2- Food options                                    "
            "||\n";
    cout << "||             3- Receive Ticket                                  "
            "||\n";
    cout << "||             4- To cancel the seat                              "
            "||\n";
    cout << "||             5- Exit system                                     "
            "||\n";
    cout << "||================================================================"
            "||\n\n\n";
    cout << "Enter Your Choice : ";
}


void ticket::seat()
{
    int r, c;
     for ( r = 0; r< 10; r++)
    {
        for (c = 0; c < 10; c++)

            A[r][c] = 0;
    }

    char col = 'A';

    cout<<"\n\n";
    for (r = 0; r < 10; r++)
    {
        for (c = 0; c < 10; c++)
        {
               cout <<"["<<col<< c <<"]"<<"  ";
        }

        cout << "\n ";
        col++;
    }
    cout<<"\n---------------------------SCREEN---------------------------"<<endl;

    cout<<"\n";
}


void ticket::pay(int a)
{
  cout << "\nPlease select the type of seating you would like: "<<endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout << "1.Normal Class[Rs.400]"<<endl;
  cout <<  "2.Gold Class[Rs.800]" << endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
  cout << "\nEnter your choice: ";
  int c;
  cin >> c;
  cout << "\n";
  if (c == 1)
    {
    cout << "\nYou have chosen a Normal Class Ticket\n";

    t.amt = (a * 400);
    cout << "\n"
         << "Payment to be Done: Rs." << t.amt << "\n";
  }
  else
  {
    cout << "\n\nYou have chosen the Gold Class Ticket\n";
    t.amt = (a * 800);

    cout << "\n"
         << "Payment to be Done: Rs." << t.amt << "\n";

  };

  cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<"Enter Payment Method:\n1.UPI\n2.Cash\n3.Card "<<endl;
  cin>>type;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~\n"<<endl;

}


void ticket::display()
{
  if (top >= 0)
    {
    cout << "\nTotal Bill: ";
    for (int i = top; i >= 0; i--)
    {
      t.sum += stack[i];
    }
    cout << t.sum;
    cout << endl;

  }
   else
   {
    cout << "\nCart is Empty \n";
   }
}


void ticket::orderFood()
{
    string opt;
    do
    {
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
  cout << "1.Add Item to Cart" << endl;
  cout << "2.Remove Last Item from Cart" << endl;
  cout << "3.Display Items" << endl;
  cout << "4.Return" << endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
  cout << "Enter choice: ";
  cin  >> choice;
  cout << "\n";
  switch (choice)
  {
    case 1:
        {
      cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
      cout << "1.Popcorn   [Rs 100]\n";
      cout << "2.Coke      [Rs 90 ]\n";
      cout << "3.Sandwich  [Rs 80 ]\n";
      cout << "4.Chocolate [Rs 70 ]\n";
      cout << "5.Hot-dog   [Rs 60 ]\n";
      cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
      cout << "\nEnter item number: ";
      cin >> option;
      cout << "Enter item quantity: ";
      cin >> quantity;
      switch (option)
      {
        case 1:
          price = quantity * 100;
          break;
        case 2:
          price = quantity * 90;
          break;
        case 3:
          price = quantity * 80;
          break;
        case 4:
          price = quantity * 70;
          break;
        case 5:
          price = quantity * 60;
          break;
      }
      t.total = price;
      push(t.total);
      cout<<"\n\nPayment to be Done: Rs." << t.total << "\n";
      break;
    }
    case 2:
    {
      pop();
      break;
    }
    case 3:
    {
      display();
      break;
    }
    case 4:
      break;
  }
  cout<<"Would you like to edit the food menu?[yes/no] :";
  cin>>opt;
}while (opt=="yes");
}


void ticket::bookTickets()
{
  cout<<  "\nSelect a Date"<<endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~";
  cout << "\n 1. 23/10/22[Friday]";
  cout << "\n 2. 24/10/22[Saturday]";
  cout << "\n 3. 25/10/22[Sunday]";
  cout << "\n 4. 26/10/22[Monday]";
  cout << "\n 5. 27/10/22[Tuesday]";
  cout << "\n 6. 28/10/22[Wednesday] \n";
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
  cout << "\nEnter Your Choice : ";
  cin>> date;
  if(date==1)
  {
      t.datee="23/10/22[Friday]";
  }
  else if(date==2)
  {
      t.datee="24/10/22[Saturday]";
  }
  else if(date==3)
  {
      t.datee="25/10/22[Sunday]";
  }
  else if(date==4)
  {
      t.datee="26/10/22[Monday]";
  }
  else if(date==5)
  {
      t.datee="27/10/22[Tuesday]";
  }
  else if(date==6)
  {
      t.datee="28/10/22[Wednesday]";
  }
  else
  {
      cout<<"Please Select a valid date";
  }

  cout<< "\n\nMovies Available: "<<endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~";
  cout << "\n1. Avengers: Infinity War";
  cout << "\n2. Antman And The Wasp";
  cout << "\n3. Deadpool 2";
  cout << "\n4. Venom";
  cout << "\n5. Captain Marvel"<<endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
  cout << "\nEnter Your Choice : ";
  cin >> movie_name;
  if(movie_name==1)
  {
      t.mov_name="Avengers: Infinity War";
      t.screen="Screen 1";
  }
  else if(movie_name==2)
  {
      t.mov_name="Antman And The Wasp";
      t.screen="Screen 2";
  }
  else if(movie_name==3)
  {
      t.mov_name="Deadpool 2";
      t.screen="Screen 3";
  }
  else if(movie_name==4)
  {
      t.mov_name="Venom";
      t.screen="Screen 4";
  }
  else if(movie_name==5)
  {
      t.mov_name="Captain Marvel";
      t.screen="Screen 5";
  }
  else
  {
      cout<<"Please Select a valid Movie";
  }



  cout << "\n\nThe Timings for the selected show are:"<<endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~";
  cout << "\n 1. 10 AM";
  cout << "\n 2. 1 PM";
  cout << "\n 3. 4 PM";
  cout << "\n 4. 7PM";
  cout << "\n 5. 10PM \n";
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
  cout << "Please select the timings: ";
  cin >> time;
  if(time==1)
  {
      t.timee="10 AM";
  }
  else if(time==2)
  {
      t.timee="1 PM";
  }
  else if(time==3)
  {
      t.timee="4PM";
  }
  else if(time==4)
  {
      t.timee="7 PM";
  }
  else if(time==5)
  {
      t.timee="10 PM";
  }
  else
  {
      cout<<"Please Select a Timing";
  }

  cout << "\n\n\n";
  cout << "Enter Details: "<<endl;
  cout << "------------------------------\n";
  cout << "Enter your name: ";
  cin >> t.name;
  cout << "Enter your contact number: ";
  cin >> t.cno;
  cout << "------------------------------";
  seat();
  cout << "\n\n\nEnter the number of tickets you want to Book: ";
  cin >> no_tickets;
  cout <<"Enter Seat: ";
  cin >> t.seats;
  cout << "\n";
  pay(no_tickets);
}



void ticket::printTicket()
{
  cout << "\n\n";
  cout << "||-----------------         TICKET     "
          "------------------------||\n";
  cout << "||============================================================"
          "=||\n";
  cout << "                  Customer Name  :   " << t.name
       << "                                             "<<endl;
  cout << "                  Contact Number :   " << t.cno
       << "                                             "<<endl;
  cout << "                  Movie Name :   "     << t.mov_name
       << "                                             "<<endl;
  cout << "                  Seats :   "          << t.seats
       << "                                             "<<endl;
  cout << "                  Screen Number :   "  << t.screen
       << "                                             "<<endl;
  cout << "                  Date: "              << t.datee
       << "                                             "<<endl;
  cout << "                  Timing: "            << t.timee
       << "                                             "<<endl;
  cout << "                  Total Amount Paid: " << (t.amt+t.sum)
       << "                                             "<<endl;
  cout << "||============================================================"
          "=||\n";
}


char ticket::continueQuestion()
{
  char ans;
  cout << "\n\nWould you like to go back to the Menu? (y/n)" << endl;
  cout << "Enter y for Yes and n for No: ";
  cin >> ans;
  cout << "\n\n";
  if (ans == 'n')
    {
    cout << "\n\nThank you for booking the tickets \nTo print out the tickets please go to the portal\n\n\n";
  }
  return ans;
}


void ticket::cancel()
{
    t.amt = 0;
        cout << "\nYour Booking has been canceled\n";
        cout << "Total Amount Payable: " << t.amt << "\n\n";
}


int main()
{
  char ans;
  ticket obj;
  do
    {
    int enter;
    obj.menu();
    cin >> enter;
    switch (enter)
    {
      case 1:
        obj.bookTickets();
        ans = obj.continueQuestion();
        if (ans == 'y') break;
        break;

      case 2:
        obj.orderFood();
        ans = obj.continueQuestion();
        if (ans == 'y') break;
        break;

      case 3:
        obj.printTicket();
        ans = obj.continueQuestion();
        if (ans == 'y') break;
        break;

      case 4:

        obj.cancel();
        ans = obj.continueQuestion();
        if (ans == 'y') break;
        break;

      case 5:
        ans = 'n';
        break;
    }
  } while (ans == 'y');
}
