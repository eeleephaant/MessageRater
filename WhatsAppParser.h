#pragma once

#include "AbstractChatParser.h"
#include <regex>
#include <fstream>

class WhatsAppParser : AbstractChatParser
{
private:
    
public:
    WhatsAppParser(std::string path, std::string predicate);
    void Parse() override;
    void rawDataToMessage() override;
};


