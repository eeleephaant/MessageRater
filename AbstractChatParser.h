#pragma once

#include <string>
#include <vector>
#include "Message.h"

class AbstractChatParser
{
private:

protected:
    std::vector<std::string> _readed_data;
    
    std::string _predicate_name;
    std::string _path_to_file;

public:
    std::vector<Message> messages;
    virtual void rawDataToMessage() = 0;
    virtual void Parse() = 0;
    void SetPredicateName(std::string predicate);
    void SetPathToFile(std::string path);
    std::string GetPathToFile(std::string path);
};
