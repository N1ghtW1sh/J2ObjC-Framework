//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/base/VerifyException.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonBaseVerifyException_INCLUDE_ALL")
#if ComGoogleCommonBaseVerifyException_RESTRICT
#define ComGoogleCommonBaseVerifyException_INCLUDE_ALL 0
#else
#define ComGoogleCommonBaseVerifyException_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonBaseVerifyException_RESTRICT

#if !defined (_ComGoogleCommonBaseVerifyException_) && (ComGoogleCommonBaseVerifyException_INCLUDE_ALL || ComGoogleCommonBaseVerifyException_INCLUDE)
#define _ComGoogleCommonBaseVerifyException_

#define JavaLangRuntimeException_RESTRICT 1
#define JavaLangRuntimeException_INCLUDE 1
#include <j2objc/java/lang/RuntimeException.h>

@interface ComGoogleCommonBaseVerifyException : JavaLangRuntimeException

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)message;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseVerifyException)

FOUNDATION_EXPORT void ComGoogleCommonBaseVerifyException_init(ComGoogleCommonBaseVerifyException *self);

FOUNDATION_EXPORT ComGoogleCommonBaseVerifyException *new_ComGoogleCommonBaseVerifyException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void ComGoogleCommonBaseVerifyException_initWithNSString_(ComGoogleCommonBaseVerifyException *self, NSString *message);

FOUNDATION_EXPORT ComGoogleCommonBaseVerifyException *new_ComGoogleCommonBaseVerifyException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseVerifyException)

#endif

#pragma pop_macro("ComGoogleCommonBaseVerifyException_INCLUDE_ALL")