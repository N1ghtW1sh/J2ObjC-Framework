//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/NoSuchFieldException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangNoSuchFieldException")
#ifdef RESTRICT_JavaLangNoSuchFieldException
#define INCLUDE_ALL_JavaLangNoSuchFieldException 0
#else
#define INCLUDE_ALL_JavaLangNoSuchFieldException 1
#endif
#undef RESTRICT_JavaLangNoSuchFieldException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangNoSuchFieldException_) && (INCLUDE_ALL_JavaLangNoSuchFieldException || defined(INCLUDE_JavaLangNoSuchFieldException))
#define JavaLangNoSuchFieldException_

#define RESTRICT_JavaLangReflectiveOperationException 1
#define INCLUDE_JavaLangReflectiveOperationException 1
#include "../../java/lang/ReflectiveOperationException.h"

/*!
 @brief Thrown when the VM notices that a program tries to reference,
 on a class or object, a field that does not exist.
 */
@interface JavaLangNoSuchFieldException : JavaLangReflectiveOperationException

#pragma mark Public

/*!
 @brief Constructs a new <code>NoSuchFieldException</code> that includes the current
 stack trace.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>NoSuchFieldException</code> with the current stack
 trace and the specified detail message.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangNoSuchFieldException)

FOUNDATION_EXPORT void JavaLangNoSuchFieldException_init(JavaLangNoSuchFieldException *self);

FOUNDATION_EXPORT JavaLangNoSuchFieldException *new_JavaLangNoSuchFieldException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangNoSuchFieldException *create_JavaLangNoSuchFieldException_init();

FOUNDATION_EXPORT void JavaLangNoSuchFieldException_initWithNSString_(JavaLangNoSuchFieldException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangNoSuchFieldException *new_JavaLangNoSuchFieldException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangNoSuchFieldException *create_JavaLangNoSuchFieldException_initWithNSString_(NSString *detailMessage);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangNoSuchFieldException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangNoSuchFieldException")
