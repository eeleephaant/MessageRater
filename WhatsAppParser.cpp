#include "WhatsAppParser.h"

WhatsAppParser::WhatsAppParser(std::string path, std::string predicate)
{
    SetPathToFile(path);
    SetPredicateName(predicate);
}

void WhatsAppParser::Parse()
{
    std::ifstream chat;
    chat.open(_path_to_file);

    if (!chat.is_open()) { perror("file is not open"); exit(-13); }
    std::string temp;
    while (getline(chat, temp)) 
    {
        if (temp.find(_predicate_name) != std::string::npos)
        {
            _readed_data.push_back(temp);
        }
    }
}

void WhatsAppParser::rawDataToMessage()
{
    std::regex mess("(\\d+[.]\\d+[.]\\d+)[,] (\\d+[:]\\d+) - (.+)[:] (.+)");
    std::cmatch results;
    for (int i = 0; i < _readed_data.size(); i++)
    {
        regex_match(_readed_data[i].c_str(), results, mess);
    }
}