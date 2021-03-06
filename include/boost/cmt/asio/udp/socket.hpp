#ifndef _BOOST_CMT_ASIO_UDP_SOCKET_HPP_
#define _BOOST_CMT_ASIO_UDP_SOCKET_HPP_
#include <boost/asio.hpp>

namespace boost { namespace cmt { namespace asio { namespace udp {

    size_t receive_from( boost::asio::ip::udp::socket& s, char* data, size_t data_len, boost::asio::ip::udp::endpoint& ep );
    size_t send_to( boost::asio::ip::udp::socket& s, const char* data, size_t data_len, const boost::asio::ip::udp::endpoint& ep );

} } } } // namespace boost::cmt::asio::udp

#endif // _BOOST_CMT_ASIO_UDP_SOCKET_HPP_

