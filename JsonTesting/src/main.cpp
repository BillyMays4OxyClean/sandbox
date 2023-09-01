#include <QApplication>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QDebug>
#include <QFile>
#include <QByteArray>
#include <iostream>

#include "MainWindow.h"
// #include "ObjectParser.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // MainWindow w;
    // w.show();
    // w.setBrowserText("This is the default browser text!");

    const char* fileName = "forms/JsonTesting.json";
    QFile objectDoc;
    objectDoc.setFileName(fileName);
    objectDoc.open(QIODevice::ReadOnly | QIODevice::Text);
    QByteArray fileBody = objectDoc.readAll();
    qWarning() << fileBody;
    QString docString(fileBody);

    std::cout << "Document Body: " << std::endl;
    std::cout << docString.toStdString() << std::endl;
    std::cout << "____________________________" << std::endl;
    QJsonDocument primaryDocument = QJsonDocument::fromJson(docString.toUtf8());
    QJsonObject obj = primaryDocument.object();\

    if (obj.contains("Electronic Circuit"))
    {
        QJsonObject::const_iterator componentIt = obj.constFind("Electronic Circuit");
        QJsonObject component = componentIt.value().toObject();

        QJsonObject::const_iterator nameIt = component.constFind("Name");
        QJsonValue name = nameIt.value();
        
        std::cout << "Component name is: " << name.toString().toStdString() << std::endl;
    }

    return 0;
};