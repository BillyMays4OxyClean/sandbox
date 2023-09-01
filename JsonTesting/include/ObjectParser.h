#ifndef OBJECTPARSER_H
#define OBJECTPARSER_H

#include <fstream>
#include <QJsonObject>
#include <QJsonDocument>

class ObjectParser
{
    public:
        ObjectParser(std::string fileName);
        ~ObjectParser();

        // Recipe getRecipeFromDoc(std::string recipeName);
        // AbstractComponent getComponentFromDoc(std::string componentName);

    private:
        std::string fileString;
        QJsonDocument primaryDocument;

};
#endif