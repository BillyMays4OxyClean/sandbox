#include <QJsonDocument>
#include <QFile>
#include <QDebug>
#include "ObjectParser.h"
#include <iostream>

ObjectParser::ObjectParser(std::string fileName)
{
    QFile objectDoc;
    objectDoc.setFileName(fileName.c_str());
    objectDoc.open(QIODevice::ReadOnly | QIODevice::Text);
    QString docString(objectDoc.readAll());
    std::cout << docString.toStdString() << std::endl;
    primaryDocument = QJsonDocument::fromJson(docString.toUtf8());
}

ObjectParser::~ObjectParser()
{};

// Recipe ObjectParser::getRecipeFromDoc(std::string recipeName)
// {
    // QJsonObject obj = primaryDocument.object();
    // QJsonValue val = obj.value(recipeName.c_str());
    // qDebug() << val;
// }