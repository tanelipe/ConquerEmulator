#ifndef MAINCTRL_H
#define MAINCTRL_H

#include <QObject>
#include "network/qserversocket.h"
#include "network/qwinsockclient.h"

class MainCtrl : public QObject
{
    Q_OBJECT
private:
    QServerSocket server;
public:
    explicit MainCtrl(QObject *parent = 0);
    virtual ~MainCtrl();

    void Initialize();
signals:

public slots:
    void onClientConnected(QWinsockClient *client);
    void onClientDisconnected(QWinsockClient *client);
    void onClientReceived(QWinsockClient *client, unsigned char *packet, int length);
};

#endif // MAINCTRL_H
