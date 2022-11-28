#pragma once
#include <boost/multi_index_container.hpp>
#include <boost/multi_index/hashed_index.hpp>
#include <boost/multi_index/member.hpp>
#include <boost/fusion/container.hpp>
#include <boost/fusion/sequence.hpp>
#include <iostream>
#include <vector>
#include "Contact.h"

using namespace boost::multi_index;
using namespace std;

typedef multi_index_container<Contact, indexed_by<
    hashed_non_unique<member<Contact, string, &Contact::name>>,
    hashed_non_unique<member<Contact, string, &Contact::surname>>,
    hashed_non_unique<member<Contact, int, &Contact::age>>,
    hashed_unique<member<Contact, int, &Contact::phoneNumber>>,
    hashed_non_unique<member<Contact, string, &Contact::street>>
    >>contact_multi;

typedef contact_multi::nth_index<0>::type name_type;
typedef contact_multi::nth_index<1>::type surname_type;
typedef contact_multi::nth_index<2>::type age_type;
typedef contact_multi::nth_index<3>::type phoneNumber_type;
typedef contact_multi::nth_index<4>::type street_type;


class Contacts {
public:
    contact_multi contacts;

    void addContact(string name, string surname, int age, int phoneNumber, string street) {
        int temp = 0;
        for (phoneNumber_type::iterator i = contacts.get<3>().begin(); i != contacts.get<3>().end(); i++) {
            if (i->phoneNumber == phoneNumber) {
                temp++;
            }
       }
        if (temp == 0) {
            contacts.insert({name, surname, age, phoneNumber, street});   //({ name, surname, age, phoneNumber, street });
        }
    }
};