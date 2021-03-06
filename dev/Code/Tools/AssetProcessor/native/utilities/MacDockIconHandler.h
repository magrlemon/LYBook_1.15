#ifndef MACDOCKICONHANDLER_H
#define MACDOCKICONHANDLER_H

#include <QObject>

#ifdef __OBJC__
@class DockIconClickEventHandler;
#else
class DockIconClickEventHandler;
#endif

class MacDockIconHandler : public QObject
{
    Q_OBJECT
public:
    MacDockIconHandler(QObject* parent = nullptr);
    ~MacDockIconHandler();

Q_SIGNALS:
    void dockIconClicked();

private:

    DockIconClickEventHandler* m_dockIconClickEventHandler;
};

#endif // MACDOCKICONCLICKHANDLER_H
