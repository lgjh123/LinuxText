#pragma once
#include <boost/function.hpp>
#include <boost/shared_ptr.hpp>

//#include "datetime/Timestamp.h"

//客户端!!定义回调
class TcpConnection;
typedef boost::shared_ptr<TcpConnection> TcpConnectionPtr;

typedef boost::function<void(const TcpConnectionPtr&)> ConnectionCallback;
typedef boost::function<void(const TcpConnectionPtr&,
                             const char*data,
                             ssize_t len)> MessageCallback;

