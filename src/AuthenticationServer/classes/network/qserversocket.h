#ifndef QSERVERSOCKET_H
#define QSERVERSOCKET_H

#include <QObject>
#include "qwinsockclient.h"
class QServerSocket : public QObject
{
    Q_OBJECT
public:
    explicit QServerSocket(QObject *parent = 0);
    virtual ~QServerSocket();

    void Initialize(unsigned short port, int bufferSize, int backlog);
    void Start();
signals:
    void onClientConnected(QWinsockClient *client);
    void onClientDisconnected(QWinsockClient *client);
    void onClientReceived(QWinsockClient *client, unsigned char *packet, int length);
public slots:

};

#endif // QSERVERSOCKET_H
