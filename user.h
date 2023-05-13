#include <string>

#define MAXPERMS 3 //placeholder value

//TODO: make this abstract

class User {
    private:
        std::string username;
        std::string password;
        std::string firstName;
        std::string lastName;
        std::string permissions[MAXPERMS];

    public:
        //constructor
        User(std::string username, std::string password, std::string firstName, std::string lastName) {
            username = username;
            this->password = password;
            this->firstName = firstName;
            this->lastName = lastName;

        }

        //setters
        void setUsername(std::string username) { this->username = username; }

        void setPassword(std::string password) {
            this->password = password; //TODO: add regex check for: captial, number and symbol in password

        }

        void setFirstName(std::string firstName) { this->firstName = firstName; }

        void setLastName(std::string lastName) { this->lastName = lastName; }

        //getters
        std::string getUsername() { return username; }

        //std::string getPassword() { return password; } maybe useless?

        std::string getFirstName() { return firstName; }

        std::string getLastName() { return lastName; }

};