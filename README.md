# semester-project

###### Solo Group: Jazsmin Williams
###### Due Date: December 1, 2021

## Description
Here is a project I developed as a mini project for purchasing movie tickets at the AMC Classic Auburn 14 movie theater. The system will:

* Customer Access:
  * Output available movies to watch
  * Track availability of movie theater seats available
  * Purchase/book movie ticket(s)
  * Display the movie ticket upon purchasing including
    * Customer Name
    * Movie Name
    * Movie Date
    * Movie Time
    * Movie Format (2D / 3D / etc.)
    * Movie Price
    * Seat Number
* Employee/Admin Access:
  * Modify list of available movies to watch
  * Assign movies to specific theaters

Overall, this project is focused on movie ticket purchases and availability, so it is named the **“Movie Theater Ticketing System”**.

## Functions:
* **switchAccess():** This function will begin with the welcoming screen. It will allow the user to choose between customer access and employee/admin access
* **printMovieList():** This function will output a list of the available movies being played at the movie theater
* **bookMovieTicket():** This function will allow for the customer to book a movie ticket by selecting the movie they want to see and inputting their information to assign them to their movie ticket
* **checkSeats():** This function will check to see if there are available seats in the selected movie.
  * **isFull():** This function will check to see if all seats are purchased.
* **printMovieTicket():** This function will print out the purchased movie ticket with all of the necessary information for the customer to get to their theater and watch the movie.
* **checkID():** This function will check the credentials of the employee trying to get admin access to edit the movie list.
* **addMovie():** This function will add another movie into the movie list and allow the employee to input all of the necessary information describing the movie (movie title, genre, movie price, theater number, etc.)
* **deleteMovie():** This function will allow the employee to remove a movie from the movie list completely.
* **editMovie():** This function will allow the employee to select a movie that they want to modify and choose from a list to edit specific parts of the movie.

## Empathy Map

![image](https://user-images.githubusercontent.com/92323456/140095099-8583117d-15c5-41b4-ab15-94843525bc32.png)

Says
* What movie do I want to watch?  
* What time does the movie start? 

Thinks
* How much does it cost?
* How many tickets do I need to purchase?

Does
* Selects movie from list
* Purchases movie ticket(s)

Feels
* Overwhelmed by movie options
* Excited about purchasing a ticket
* Upset about soldout movie












