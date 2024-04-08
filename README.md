# ONLINE-MOVIE-TICKET-BOOKING-SYSTEM
Online Movie Ticket Booking System’ is made using Object  Oriented Programming, which allows the user to Book a movie ticket  along with including food options too, if one wishes for.

Functionalities and its Overview-
1. push(int) :
This function uses ‘Stack approach’ to check whether the Food Cart has 
space or not while adding a food item, if it has space then the Food item 
is added to the Cart, otherwise proper error message is prompted, saying 
that the Cart is Full.

2. pop() :
This function uses ‘Stack approach’ to check whether the Food Cart is 
already empty or not while removing a food item, if it is not already 
empty then the previously added Food item is removed from the Cart 
and reduces the amount of that Food item from the Total Bill, otherwise 
proper error message is prompted, saying that the Cart is Empty.

3. menu() :
This function displays a menu card for the user to select from. It consists 
of the options namely, Movie Information, Food Options, Receive 
Ticket, To Cancel the Seat and the Exit the System.

4. seat():
This function displays the Seat Arrangement of the Theatre and the side 
to where the Screen is displayed using ‘for loops’ for the user to see the 
arrangement and select the seats from.

5. pay(int) :
This function asks the user to input the type of seat one wishes to select, 
after which it calculates the total price of the Movie Ticket and prompts 
a message for the Payment to be done.

6. display() :
This function uses a ‘Stack approach’ to check whether the Cart has 
items in it or not, if it does, it calculates the Total Bill of the Food Items 
else it prompts a message saying that the Cart is Item.

7. orderFood() :
This function allows the user to make changes to one’s Food Cart by 
providing options such as Add and Item to the Cart, Undo Item from 
Cart, Display the Total Bill of Food Items or the Return back to the 
Menu. If the user wishes to Add an Item to the Cart, certain Food Options are 
available to choose from along with the number of item one wants, 
further it calculates and displays the amount for each item added to the 
Cart.

8. bookTickets() :
This function asks to user to select the Date, Movie name and timing for 
the Movie selected. It also allots the Screen numbers for the specific 
movie selected. After which, it asks to user to enter one’s Details such as 
Name and Contact Number and Also asks for the number of seats the 
user would like to book and asks for the Seat numbers accordingly.

9. printTicket() :
This function Displays the Final Movie Ticket with details such as The 
Customers Name, Contact Number, Movie name, Seats Selected, Screen 
Number, Date, Timing and the Total Amount to be Paid which would 
include the amount of both, that is the Movie tickets and the Food Items.

10. continueQuestion() :
This function allows the user to go back to the Menu and select another 
option if required.

11. cancel() :
The function is used to cancel all the Bookings which were made by the 
user.

12. main() :The main function uses a ‘Switch Case’ and calls all the 
functions when required using ‘Objects’.
