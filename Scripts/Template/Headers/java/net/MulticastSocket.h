//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/MulticastSocket.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetMulticastSocket")
#ifdef RESTRICT_JavaNetMulticastSocket
#define INCLUDE_ALL_JavaNetMulticastSocket 0
#else
#define INCLUDE_ALL_JavaNetMulticastSocket 1
#endif
#undef RESTRICT_JavaNetMulticastSocket

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNetMulticastSocket_) && (INCLUDE_ALL_JavaNetMulticastSocket || defined(INCLUDE_JavaNetMulticastSocket))
#define JavaNetMulticastSocket_

#define RESTRICT_JavaNetDatagramSocket 1
#define INCLUDE_JavaNetDatagramSocket 1
#include "../../java/net/DatagramSocket.h"

@class IOSObjectArray;
@class JavaNetDatagramPacket;
@class JavaNetInetAddress;
@class JavaNetNetworkInterface;
@class JavaNetSocketAddress;

/*!
 @brief This class implements a multicast socket for sending and receiving IP
 multicast datagram packets.
 - seealso: DatagramSocket
 */
@interface JavaNetMulticastSocket : JavaNetDatagramSocket

#pragma mark Public

/*!
 @brief Constructs a multicast socket, bound to any available port on the
 local host.
 @throws IOException if an error occurs.
 */
- (instancetype)init;

/*!
 @brief Constructs a multicast socket, bound to the specified <code>port</code> on the
 local host.
 @throws IOException if an error occurs.
 */
- (instancetype)initWithInt:(jint)port;

/*!
 @brief Constructs a <code>MulticastSocket</code> bound to the address and port specified by
 <code>localAddress</code>, or an unbound <code>MulticastSocket</code> if <code>localAddress == null</code>.
 @throws IllegalArgumentException if <code>localAddress</code> is not supported (because it's not
 an <code>InetSocketAddress</code>, say).
 @throws IOException if an error occurs.
 */
- (instancetype)initWithJavaNetSocketAddress:(JavaNetSocketAddress *)localAddress;

/*!
 @brief Returns an address of the outgoing network interface used by this socket.
 To avoid
 inherent unpredictability, new code should use <code>getNetworkInterface</code> instead.
 @throws SocketException if an error occurs.
 */
- (JavaNetInetAddress *)getInterface;

/*!
 @brief Returns true if multicast loopback is <i>disabled</i>.
 See <code>SocketOptions.IP_MULTICAST_LOOP</code>, and note that the sense of this is the
 opposite of the underlying Unix <code>IP_MULTICAST_LOOP</code>.
 @throws SocketException if an error occurs.
 */
- (jboolean)getLoopbackMode;

/*!
 @brief Returns the outgoing network interface used by this socket.
 @throws SocketException if an error occurs.
 */
- (JavaNetNetworkInterface *)getNetworkInterface;

/*!
 @brief Returns the time-to-live (TTL) for multicast packets sent on this socket.
 @throws IOException if an error occurs.
 */
- (jint)getTimeToLive;

/*!
 @brief Returns the time-to-live (TTL) for multicast packets sent on this socket.
 @throws IOException if an error occurs.
 */
- (jbyte)getTTL __attribute__((deprecated));

/*!
 @brief Adds this socket to the specified multicast group.
 A socket must join a
 group before data may be received. A socket may be a member of multiple
 groups but may join any group only once.
 @param groupAddr
 the multicast group to be joined.
 @throws IOException if an error occurs.
 */
- (void)joinGroupWithJavaNetInetAddress:(JavaNetInetAddress *)groupAddr;

/*!
 @brief Adds this socket to the specified multicast group.
 A socket must join a
 group before data may be received. A socket may be a member of multiple
 groups but may join any group only once.
 @param groupAddress
 the multicast group to be joined.
 @param netInterface
 the network interface on which the datagram packets will be
 received.
 @throws IOException
 if the specified address is not a multicast address.
 @throws IllegalArgumentException
 if no multicast group is specified.
 */
- (void)joinGroupWithJavaNetSocketAddress:(JavaNetSocketAddress *)groupAddress
              withJavaNetNetworkInterface:(JavaNetNetworkInterface *)netInterface;

/*!
 @brief Removes this socket from the specified multicast group.
 @param groupAddr
 the multicast group to be left.
 @throws NullPointerException
 if <code>groupAddr</code> is <code>null</code>.
 @throws IOException
 if the specified group address is not a multicast address.
 */
- (void)leaveGroupWithJavaNetInetAddress:(JavaNetInetAddress *)groupAddr;

/*!
 @brief Removes this socket from the specified multicast group.
 @param groupAddress
 the multicast group to be left.
 @param netInterface
 the network interface on which the addresses should be
 dropped.
 @throws IOException
 if the specified group address is not a multicast address.
 @throws IllegalArgumentException
 if <code>groupAddress</code> is <code>null</code>.
 */
- (void)leaveGroupWithJavaNetSocketAddress:(JavaNetSocketAddress *)groupAddress
               withJavaNetNetworkInterface:(JavaNetNetworkInterface *)netInterface;

/*!
 @brief Sends the given <code>packet</code> on this socket, using the given <code>ttl</code>.
 This method is
 deprecated because it modifies the TTL socket option for this socket twice on each call.
 @throws IOException if an error occurs.
 */
- (void)sendWithJavaNetDatagramPacket:(JavaNetDatagramPacket *)packet
                             withByte:(jbyte)ttl __attribute__((deprecated));

/*!
 @brief Sets the outgoing network interface used by this socket.
 The interface used is the first
 interface found to have the given <code>address</code>. To avoid inherent unpredictability,
 new code should use <code>getNetworkInterface</code> instead.
 @throws SocketException if an error occurs.
 */
- (void)setInterfaceWithJavaNetInetAddress:(JavaNetInetAddress *)address;

/*!
 @brief Disables multicast loopback if <code>disable == true</code>.
 See <code>SocketOptions.IP_MULTICAST_LOOP</code>, and note that the sense of this is the
 opposite of the underlying Unix <code>IP_MULTICAST_LOOP</code>: true means disabled, false
 means enabled.
 @throws SocketException if an error occurs.
 */
- (void)setLoopbackModeWithBoolean:(jboolean)disable;

/*!
 @brief Sets the outgoing network interface used by this socket to the given
 <code>networkInterface</code>.
 @throws SocketException if an error occurs.
 */
- (void)setNetworkInterfaceWithJavaNetNetworkInterface:(JavaNetNetworkInterface *)networkInterface;

/*!
 @brief Sets the time-to-live (TTL) for multicast packets sent on this socket.
 Valid TTL values are between 0 and 255 inclusive.
 @throws IOException if an error occurs.
 */
- (void)setTimeToLiveWithInt:(jint)ttl;

/*!
 @brief Sets the time-to-live (TTL) for multicast packets sent on this socket.
 Valid TTL values are between 0 and 255 inclusive.
 @throws IOException if an error occurs.
 */
- (void)setTTLWithByte:(jbyte)ttl __attribute__((deprecated));

#pragma mark Package-Private

- (void)createSocketWithInt:(jint)aPort
     withJavaNetInetAddress:(JavaNetInetAddress *)addr;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetMulticastSocket)

FOUNDATION_EXPORT void JavaNetMulticastSocket_init(JavaNetMulticastSocket *self);

FOUNDATION_EXPORT JavaNetMulticastSocket *new_JavaNetMulticastSocket_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetMulticastSocket *create_JavaNetMulticastSocket_init();

FOUNDATION_EXPORT void JavaNetMulticastSocket_initWithInt_(JavaNetMulticastSocket *self, jint port);

FOUNDATION_EXPORT JavaNetMulticastSocket *new_JavaNetMulticastSocket_initWithInt_(jint port) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetMulticastSocket *create_JavaNetMulticastSocket_initWithInt_(jint port);

FOUNDATION_EXPORT void JavaNetMulticastSocket_initWithJavaNetSocketAddress_(JavaNetMulticastSocket *self, JavaNetSocketAddress *localAddress);

FOUNDATION_EXPORT JavaNetMulticastSocket *new_JavaNetMulticastSocket_initWithJavaNetSocketAddress_(JavaNetSocketAddress *localAddress) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetMulticastSocket *create_JavaNetMulticastSocket_initWithJavaNetSocketAddress_(JavaNetSocketAddress *localAddress);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetMulticastSocket)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetMulticastSocket")
