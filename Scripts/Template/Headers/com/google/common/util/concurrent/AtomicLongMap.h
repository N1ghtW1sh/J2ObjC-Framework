//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/util/concurrent/AtomicLongMap.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonUtilConcurrentAtomicLongMap_INCLUDE_ALL")
#if ComGoogleCommonUtilConcurrentAtomicLongMap_RESTRICT
#define ComGoogleCommonUtilConcurrentAtomicLongMap_INCLUDE_ALL 0
#else
#define ComGoogleCommonUtilConcurrentAtomicLongMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentAtomicLongMap_RESTRICT

#if !defined (_ComGoogleCommonUtilConcurrentAtomicLongMap_) && (ComGoogleCommonUtilConcurrentAtomicLongMap_INCLUDE_ALL || ComGoogleCommonUtilConcurrentAtomicLongMap_INCLUDE)
#define _ComGoogleCommonUtilConcurrentAtomicLongMap_

@protocol JavaUtilMap;

@interface ComGoogleCommonUtilConcurrentAtomicLongMap : NSObject

#pragma mark Public

- (jlong)addAndGetWithId:(id)key
                withLong:(jlong)delta;

- (id<JavaUtilMap>)asMap;

- (void)clear;

- (jboolean)containsKeyWithId:(id)key;

+ (ComGoogleCommonUtilConcurrentAtomicLongMap *)create;

+ (ComGoogleCommonUtilConcurrentAtomicLongMap *)createWithJavaUtilMap:(id<JavaUtilMap>)m;

- (jlong)decrementAndGetWithId:(id)key;

- (jlong)getWithId:(id)key;

- (jlong)getAndAddWithId:(id)key
                withLong:(jlong)delta;

- (jlong)getAndDecrementWithId:(id)key;

- (jlong)getAndIncrementWithId:(id)key;

- (jlong)incrementAndGetWithId:(id)key;

- (jboolean)isEmpty;

- (jlong)putWithId:(id)key
          withLong:(jlong)newValue;

- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)m;

- (jlong)removeWithId:(id)key;

- (void)removeAllZeros;

- (jint)size;

- (jlong)sum;

- (NSString *)description;

#pragma mark Package-Private

- (jlong)putIfAbsentWithId:(id)key
                  withLong:(jlong)newValue;

- (jboolean)removeWithId:(id)key
                withLong:(jlong)value;

- (jboolean)replaceWithId:(id)key
                 withLong:(jlong)expectedOldValue
                 withLong:(jlong)newValue;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAtomicLongMap)

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentAtomicLongMap *ComGoogleCommonUtilConcurrentAtomicLongMap_create();

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentAtomicLongMap *ComGoogleCommonUtilConcurrentAtomicLongMap_createWithJavaUtilMap_(id<JavaUtilMap> m);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAtomicLongMap)

#endif

#pragma pop_macro("ComGoogleCommonUtilConcurrentAtomicLongMap_INCLUDE_ALL")