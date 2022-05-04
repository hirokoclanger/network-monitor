#include <boost/asio.hpp>
#include <boost/system/error_code.hpp>
#include <iostream>

using tcp = boost::asio::ip::tcp;

void Log(boost::system::error_code ec){
    std::cerr << (ec ? "Error: " : "OK")
              << (ec ? ec.message() : "")
              << std::endl;

}

int main()
    {
    // always start with a iocontext object
    boost::asio::io_context ioc {};

    // create an i/o object. every boost.asio io objetc api needs an io io_context
    // as first parameter
    // When you use an I/O object class like socket, you get access to a series of
    // APIs that are specific to the object interface. For example, the socket class
    // has a connect API. These APIs, under the hood, submit work to the I/O context
    // and receive a response back from it. The response is usually stored in
    // a variable of type boost::system::error_code:
    tcp::socket socket {ioc};
    // A 'falsey' error_code means "no error".
    boost::system::error_code ec {};
    // assign and connect address to the object and send it to the endpoint 80
    // connecct to the socket with give ip:port aka endpoint and return if error
    tcp::resolverIt
    if (ec) {
        Log(ec);
        return -1;
    }

    socket.connect(endpoint, ec);
    if (ec) {
        Log(ec);
        return -1;
    }
}
