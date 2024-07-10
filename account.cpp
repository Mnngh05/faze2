#include "account.h"
#include <iostream>
#include "content.cpp"
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

class AccountData : public QSharedData
{
    string accountId;
    string phoneNumber;
    string email;
    string coonection;
    string following;
    vector<Post>posts;
    vector<DirectMessage>messages;
public:

};

Account::Account() : data(new AccountData)
{

}

Account::Account(const Account &rhs) : data(rhs.data)
{

}

Account &Account::operator=(const Account &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

Account::~Account()
{

}

class Job
{
    string jobName;
    string companyName;
    string skillsRequired;
    string workPlaceType;
    string location;
    string type;
public:
    int salary;
    Job() {}
    void setJobName(string job) {
        jobName = job;
    }
    string JOBNAME() {
        return jobName;
    }
};

class person
{
    string lastName;
    string firstName;
    string skills;
public:
    person() {}
    void takeJob(Job JOB) {
        skills = JOB.JOBNAME();
    }
};

class company:Account
{
    vector<Job>companyJobs;
    string companyName;
    vector<person>employee;
    vector<string>followers;
public:
    company() {}
    Job creatJob(string job) {
        Job name;
        name.setJobName(job);
        companyJobs.push_back(name);
        int cnt = companyJobs.size();
        return companyJobs[cnt-1];
    }
};
