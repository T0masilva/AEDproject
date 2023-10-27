//
// Created by vascocosta on 10/20/23.
//

#ifndef AEDPROJECT_UCCLASS_H
#define AEDPROJECT_UCCLASS_H

#include <string>
#include <list>
#include <vector>
#include "Lesson.h"

class UcClass {
private:
    std::string ucId_;
    std::string classId_;
    std::vector<Lesson> lessons_;

public:
    UcClass();
    UcClass(std::string& ucId, std::string& classId);
    const std::string getUcId() const;
    const std::string getClassId() const;
    const std::vector<Lesson> getLessons() const;
    void pushLesson(const Lesson& lesson);


};


#endif //AEDPROJECT_UCCLASS_H