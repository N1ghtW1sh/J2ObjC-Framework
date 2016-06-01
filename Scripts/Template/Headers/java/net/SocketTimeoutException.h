//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/SocketTimeoutException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetSocketTimeoutException")
#ifdef RESTRICT_JavaNetSocketTimeoutException
#define INCLUDE_ALL_JavaNetSocketTimeoutException 0
#else
#define INCLUDE_ALL_JavaNetSocketTimeoutException 1
#endif
#undef RESTRICT_JavaNetSocketTimeoutException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNetSocketTimeoutException_) && (INCLUDE_ALL_JavaNetSocketTimeoutException || defined(INCLUDE_JavaNetSocketTimeoutException))
#define JavaNetSocketTimeoutException_

#define RESTRICT_JavaIoInterruptedIOException 1
#define INCLUDE_JavaIoInterruptedIOException 1
#include "../../java/io/InterruptedIOException.h"

/*!
 @brief This exception is thrown when a timeout expired on a socket <code>read</code> or
 <code>accept</code> operation.
 */
@interface JavaNetSocketTimeoutException : JavaIoInterruptedIOException

#pragma mark Public

/*!
 @brief Constructs a new instance.
 */
- (instancetype)init;

/*!
 @brief Constructs a new instance with the given detail message.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

/*!
 @brief Constructs a new instance with given detail message and cause.
  internal use only
 */
- (instancetype)initWithNSString:(NSString *)detailMessage
                 withNSException:(NSException *)cause;

/*!
 @brief Constructs a new instance with given cause.
  internal use only
 */
- (instancetype)initWithNSException:(NSException *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetSocketTimeoutException)

FOUNDATION_EXPORT void JavaNetSocketTimeoutException_init(JavaNetSocketTimeoutException *self);

FOUNDATION_EXPORT JavaNetSocketTimeoutException *new_JavaNetSocketTimeoutException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetSocketTimeoutException *create_JavaNetSocketTimeoutException_init();

FOUNDATION_EXPORT void JavaNetSocketTimeoutException_initWithNSString_(JavaNetSocketTimeoutException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaNetSocketTimeoutException *new_JavaNetSocketTimeoutException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetSocketTimeoutException *create_JavaNetSocketTimeoutException_initWithNSString_(NSString *detailMessage);

FOUNDATION_EXPORT void JavaNetSocketTimeoutException_initWithNSException_(JavaNetSocketTimeoutException *self, NSException *cause);

FOUNDATION_EXPORT JavaNetSocketTimeoutException *new_JavaNetSocketTimeoutException_initWithNSException_(NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetSocketTimeoutException *create_JavaNetSocketTimeoutException_initWithNSException_(NSException *cause);

FOUNDATION_EXPORT void JavaNetSocketTimeoutException_initWithNSString_withNSException_(JavaNetSocketTimeoutException *self, NSString *detailMessage, NSException *cause);

FOUNDATION_EXPORT JavaNetSocketTimeoutException *new_JavaNetSocketTimeoutException_initWithNSString_withNSException_(NSString *detailMessage, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetSocketTimeoutException *create_JavaNetSocketTimeoutException_initWithNSString_withNSException_(NSString *detailMessage, NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetSocketTimeoutException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetSocketTimeoutException")
