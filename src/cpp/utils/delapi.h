#ifndef DELAPI_H
#define DELAPI_H

#include <QtQml/qqml.h>

#include "delglobal.h"

QT_FORWARD_DECLARE_CLASS(QWindow)

class DELEGATEUI_EXPORT DelApi : public QObject
{
    Q_OBJECT
    QML_SINGLETON
    QML_NAMED_ELEMENT(DelApi)

public:
    ~DelApi();

    static DelApi *instance();
    static DelApi *create(QQmlEngine *, QJSEngine *);

    Q_INVOKABLE void setWindowStaysOnTopHint(QWindow *window, bool hint);

private:
    explicit DelApi(QObject *parent = nullptr);
};

#endif // DELAPI_H
