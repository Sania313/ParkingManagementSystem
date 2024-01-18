Overview

This C++ program implements a simple Parking Management System for Centaurus Mall Islamabad. It allows users to park their vehicles, leave the parking area, display information about currently parked vehicles, and calculate the total amount of fees for all parked vehicles.
Features

    Park Vehicles: Users can input details such as parking number, vehicle number, driver name, vehicle type, and parking duration for their vehicles.
    Leave Parking: Users can leave the parking area by entering their vehicle number, and the program calculates the parking fee based on the vehicle type and hours parked.
    Display Information: Users can view information about the currently parked vehicles.
    Calculate Total Fees: The program calculates the total fees for all currently parked vehicles, identifies the vehicle with the largest fee, and displays the corresponding driver name.

Usage

    Compile the code using a C++ compiler.
    Run the compiled executable.
    Follow the on-screen menu to perform actions such as parking a vehicle, leaving the parking area, displaying information, calculating total fees, and exiting the program.

Menu Options

    Press 'P' to park your vehicle.
    Press 'L' to leave the parking.
    Press 'D' to display information about currently parked vehicles.
    Press 'C' to calculate the total amount of fees for all currently parked vehicles.
    Press 'E' to exit the program.

Data Structure

The program uses a structure named parking to store information about each parked vehicle, including parking number, status, vehicle number, driver name, vehicle type, and parking hours.
Functions

    leave: Handles the process of a vehicle leaving the parking area, calculates the parking fee, and updates the parking status.
    fee: Calculates the total fees for all currently parked vehicles, identifies the vehicle with the largest fee, and displays relevant information.
    menu: Displays the main menu options for the user.

Note

    The program assumes a parking capacity of 100 vehicles.
    Vehicle types include car, taxi, bus, bike, and cycle.
    Fees are calculated based on the type of vehicle.