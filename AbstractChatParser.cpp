#include "AbstractChatParser.h"

void AbstractChatParser::SetPredicateName(std::string predicate)
{
    this->_predicate_name = predicate;
}


void AbstractChatParser::SetPathToFile(std::string path)
{
    this->_path_to_file = path;
}

std::string AbstractChatParser::GetPathToFile(std::string path)
{
    return _path_to_file;
}