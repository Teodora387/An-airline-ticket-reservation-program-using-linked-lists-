#ifndef PERSON_H
#define PERSON_H
#include <list>

class Person
{
    public:
        Person();
        virtual ~Person();
        void reservation(); // book flight for each customer (Menu Option Νο 6)
        void reservationFromQueue(int num); // book flight for the oldest customer in
					// (call ONLY when a reservation is cancelled)
        void cancel(); //cancel a reservation (Menu Option Νο 7)

	/* --SHOW PASSENGER'S INFO-- */
        static bool displyPerson(int id);

	/* --CHECHKER FOR UNIQUE PASSPORT-- */
        static bool uniqueID(int id);

	/* --GETTERS-- */
        int getID() { return this->CNP; }
        string getfName() { return this->fName; }
        string getlName() { return this->lName; }
    protected:

    private:
        int CNP, tel;
        list<int> flights;
        string fName, lName, address;
};

#endif // PERSON_H
