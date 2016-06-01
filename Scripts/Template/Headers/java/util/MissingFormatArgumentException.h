//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/MissingFormatArgumentException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilMissingFormatArgumentException")
#ifdef RESTRICT_JavaUtilMissingFormatArgumentException
#define INCLUDE_ALL_JavaUtilMissingFormatArgumentException 0
#else
#define INCLUDE_ALL_JavaUtilMissingFormatArgumentException 1
#endif
#undef RESTRICT_JavaUtilMissingFormatArgumentException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilMissingFormatArgumentException_) && (INCLUDE_ALL_JavaUtilMissingFormatArgumentException || defined(INCLUDE_JavaUtilMissingFormatArgumentException))
#define JavaUtilMissingFormatArgumentException_

#define RESTRICT_JavaUtilIllegalFormatException 1
#define INCLUDE_JavaUtilIllegalFormatException 1
#include "../../java/util/IllegalFormatException.h"

/*!
 @brief A <code>MissingFormatArgumentException</code> will be thrown if there is no
 corresponding argument with the specified conversion or an argument index
 that refers to a missing argument.
 - seealso: java.lang.RuntimeException
 */
@interface JavaUtilMissingFormatArgumentException : JavaUtilIllegalFormatException

#pragma mark Public

/*!
 @brief Constructs a new <code>MissingFormatArgumentException</code> with the
 specified conversion that lacks the argument.
 @param s
 the specified conversion that lacks the argument.
 */
- (instancetype)initWithNSString:(NSString *)s;

/*!
 @brief Returns the conversion associated with the exception.
 @return the conversion associated with the exception.
 */
- (NSString *)getFormatSpecifier;

- (NSString *)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilMissingFormatArgumentException)

FOUNDATION_EXPORT void JavaUtilMissingFormatArgumentException_initWithNSString_(JavaUtilMissingFormatArgumentException *self, NSString *s);

FOUNDATION_EXPORT JavaUtilMissingFormatArgumentException *new_JavaUtilMissingFormatArgumentException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilMissingFormatArgumentException *create_JavaUtilMissingFormatArgumentException_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilMissingFormatArgumentException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilMissingFormatArgumentException")
