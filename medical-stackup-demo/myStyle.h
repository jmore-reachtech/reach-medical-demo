#ifndef MyStyle_H
#define MyStyle_H

#include <QQmlPropertyMap>

class StyleValues: public QQmlPropertyMap
{
    Q_OBJECT
    public:
    StyleValues(QObject * parent = nullptr);

    Q_INVOKABLE void startEngine();

    QVariant doUpdate(const QString key, const QVariant input);

};

#endif // MyStyle_H
