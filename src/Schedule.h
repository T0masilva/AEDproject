//
// Created by vascocosta on 10/25/23.
//

#ifndef AEDPROJECT_SCHEDULE_H
#define AEDPROJECT_SCHEDULE_H


#include <list>
#include <vector>
#include "UcClass.h"
#include "Lesson.h"

class Schedule {
private:
    std::vector<UcClass> ucClasses_;
    std::vector<std::vector<Lesson>> lessons_;
public:
    Schedule();
    Schedule(const UcClass& ucClass);
//    Schedule(const Student& student);
    void pushLesson(const Lesson& lesson); // quero que automaticamente construa a partir dos vetores de liçao de uc e de student
    std::string dayWeek(int day) const;
    void printSchedule(const int type) const;
};


#endif //AEDPROJECT_SCHEDULE_H
