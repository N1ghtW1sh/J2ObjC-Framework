//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/OverlappingFileLockException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsOverlappingFileLockException")
#ifdef RESTRICT_JavaNioChannelsOverlappingFileLockException
#define INCLUDE_ALL_JavaNioChannelsOverlappingFileLockException 0
#else
#define INCLUDE_ALL_JavaNioChannelsOverlappingFileLockException 1
#endif
#undef RESTRICT_JavaNioChannelsOverlappingFileLockException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioChannelsOverlappingFileLockException_) && (INCLUDE_ALL_JavaNioChannelsOverlappingFileLockException || defined(INCLUDE_JavaNioChannelsOverlappingFileLockException))
#define JavaNioChannelsOverlappingFileLockException_

#define RESTRICT_JavaLangIllegalStateException 1
#define INCLUDE_JavaLangIllegalStateException 1
#include "../../../java/lang/IllegalStateException.h"

/*!
 @brief An <code>OverlappingFileLockException</code> is thrown when attempting to acquire
 a lock that overlaps an existing or pending lock held by this process.
 */
@interface JavaNioChannelsOverlappingFileLockException : JavaLangIllegalStateException

#pragma mark Public

/*!
 @brief Constructs a <code>OverlappingFileLockException</code>.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsOverlappingFileLockException)

FOUNDATION_EXPORT void JavaNioChannelsOverlappingFileLockException_init(JavaNioChannelsOverlappingFileLockException *self);

FOUNDATION_EXPORT JavaNioChannelsOverlappingFileLockException *new_JavaNioChannelsOverlappingFileLockException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioChannelsOverlappingFileLockException *create_JavaNioChannelsOverlappingFileLockException_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsOverlappingFileLockException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsOverlappingFileLockException")
