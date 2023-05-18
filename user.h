//TODO: make this abstract
class User {
    private:
        char *username;
        char *password;
        char *salt;
        char *firstName;
        char *lastName;
        
    public:
        //constructor
        User(char *username, char *password, char *firstName, char *lastName) {
            this->username = username;
            this->password = password;
            this->firstName = firstName;
            this->lastName = lastName;

        }

        //setters
        void setUsername(char *username) { this->username = username; }

        //TODO: add regex check for: captial, number and symbol in password
        //TODO: add salting and hashing BEFORE prod
        void setPassword(char *password) { this->password = password; }

        void setFirstName(char *firstName) { this->firstName = firstName; }

        void setLastName(char *lastName) { this->lastName = lastName; }

        //getters
        char *getUsername() { return username; }

        //char * getPassword() { return password; } maybe useless?

        char *getFirstName() { return firstName; }

        char *getLastName() { return lastName; }

};