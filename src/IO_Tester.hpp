#ifndef IO_TESTER_H
#define IO_TESTER_H

#include "ErrorHandling.hpp"
#include <iostream>
#include <vector>

#define VERSION "1.1"

class Test
{
public:
    enum Status {PASS, CRASH, FAILED};

    std::string m_name;
    std::string m_cmd;
    std::string m_output;
    Status m_status;
    Test() {m_status = FAILED;};
    ~Test() = default;
};

class IOTester
{
private:
    int m_passed;
    int m_failed;
    int m_crashed;
    size_t m_position;
    bool m_details;
    std::vector<std::string> m_file;
public:
    static void Version();
    IOTester(int ac, char **av);
    ~IOTester() = default;
    Test getTestData();
    void comparator(Test t);
    void printFinalResults() const;
    void apply();
    void resetValues();
};

#endif