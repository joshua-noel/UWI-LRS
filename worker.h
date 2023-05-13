#include <ctime>
#include <math.h>
#include "user.h"

class Worker: User {
    private:
        double hoursWorked; 
        bool clockedIn;
        time_t clockInTime, clockOutTime;

    public:
        //constructor
        Worker(std::string username, std::string password, std::string firstName, std::string lastName)
        : User(username, password, firstName, lastName) {
            hoursWorked = 0;
            clockedIn = false;

        }

        //helper methods
        void clockInOut() {
            if (!clockedIn) {
                time(&clockInTime);
                clockedIn = true;

            }

            time(&clockOutTime);
            clockedIn = false;

        }

        void computeHoursWorked() {
            if (clockedIn) {
                time_t temp;
                time(&temp);

            }

            hoursWorked = double(difftime(clockOutTime, clockInTime)); //typecast diff_t to double

        }

        //getters
        int getHoursWorked() { return floor(hoursWorked); } //returns rounded down hours worked
};