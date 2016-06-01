//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/ByteOrder.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioByteOrder")
#ifdef RESTRICT_JavaNioByteOrder
#define INCLUDE_ALL_JavaNioByteOrder 0
#else
#define INCLUDE_ALL_JavaNioByteOrder 1
#endif
#undef RESTRICT_JavaNioByteOrder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioByteOrder_) && (INCLUDE_ALL_JavaNioByteOrder || defined(INCLUDE_JavaNioByteOrder))
#define JavaNioByteOrder_

/*!
 @brief Defines byte order constants.
 */
@interface JavaNioByteOrder : NSObject {
 @public
  /*!
   @brief This is the only thing that ByteOrder is really used for: to know whether we need to swap
 bytes to get this order, given bytes in native order.
   (That is, this is the opposite of
 the hypothetical "isNativeOrder".)
    - needed in libcore.io too.
   */
  jboolean needsSwap_;
}

+ (JavaNioByteOrder *)BIG_ENDIAN_;

+ (JavaNioByteOrder *)LITTLE_ENDIAN_;

#pragma mark Public

/*!
 @brief Returns the current platform byte order.
 @return the byte order object, which is either LITTLE_ENDIAN or
 BIG_ENDIAN.
 */
+ (JavaNioByteOrder *)nativeOrder;

/*!
 @brief Returns a string that describes this object.
 @return "BIG_ENDIAN" for <code>ByteOrder.BIG_ENDIAN</code>
 objects, "LITTLE_ENDIAN" for
 <code>ByteOrder.LITTLE_ENDIAN</code> objects.
 */
- (NSString *)description;

@end

J2OBJC_STATIC_INIT(JavaNioByteOrder)

/*!
 @brief This constant represents big endian.
 */
inline JavaNioByteOrder *JavaNioByteOrder_get_BIG_ENDIAN();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioByteOrder *JavaNioByteOrder_BIG_ENDIAN;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioByteOrder, BIG_ENDIAN, JavaNioByteOrder *)

/*!
 @brief This constant represents little endian.
 */
inline JavaNioByteOrder *JavaNioByteOrder_get_LITTLE_ENDIAN();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioByteOrder *JavaNioByteOrder_LITTLE_ENDIAN;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioByteOrder, LITTLE_ENDIAN, JavaNioByteOrder *)

FOUNDATION_EXPORT JavaNioByteOrder *JavaNioByteOrder_nativeOrder();

J2OBJC_TYPE_LITERAL_HEADER(JavaNioByteOrder)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioByteOrder")
