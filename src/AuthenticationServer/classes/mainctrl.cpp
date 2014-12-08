#include "mainctrl.h"

MainCtrl::MainCtrl(QObject *parent) :
    QObject(parent)
{
}

MainCtrl::~MainCtrl()
{

}

void MainCtrl::Initialize()
{
    server.Initialize(9958, 4096, 10);

    connect(&server, &QServerSocket::onClientConnected, this, &MainCtrl::onClientConnected);
    connect(&server, &QServerSocket::onClientDisconnected, this, &MainCtrl::onClientDisconnected);
    connect(&server, &QServerSocket::onClientReceived, this, &MainCtrl::onClientReceived);

    server.Start();
}

void MainCtrl::onClientConnected(QWinsockClient *client)
{

}

void MainCtrl::onClientDisconnected(QWinsockClient *client)
{

}

void MainCtrl::onClientReceived(QWinsockClient *client, unsigned char *Packet, int Size)
{

}
