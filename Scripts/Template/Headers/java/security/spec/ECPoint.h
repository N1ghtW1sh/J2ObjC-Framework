//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/spec/ECPoint.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecuritySpecECPoint")
#ifdef RESTRICT_JavaSecuritySpecECPoint
#define INCLUDE_ALL_JavaSecuritySpecECPoint 0
#else
#define INCLUDE_ALL_JavaSecuritySpecECPoint 1
#endif
#undef RESTRICT_JavaSecuritySpecECPoint

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecuritySpecECPoint_) && (INCLUDE_ALL_JavaSecuritySpecECPoint || defined(INCLUDE_JavaSecuritySpecECPoint))
#define JavaSecuritySpecECPoint_

@class JavaMathBigInteger;

/*!
 @brief A Point on an Elliptic Curve in barycentric (or affine) coordinates.
 */
@interface JavaSecuritySpecECPoint : NSObject

+ (JavaSecuritySpecECPoint *)POINT_INFINITY;

#pragma mark Public

/*!
 @brief Creates a new point at the specified coordinates.
 @param affineX
 the x-coordinate.
 @param affineY
 the y-coordinate.
 */
- (instancetype)initWithJavaMathBigInteger:(JavaMathBigInteger *)affineX
                    withJavaMathBigInteger:(JavaMathBigInteger *)affineY;

/*!
 @brief Returns whether the specified object and this elliptic curve point are
 equal.
 @param other
 the object to compare.
 @return <code>true</code> if the specified object and this elliptic curve
 point are equal, otherwise <code>false</code>.
 */
- (jboolean)isEqual:(id)other;

/*!
 @brief Returns the x-coordinate.
 @return the x-coordinate, or <code>null</code> for the infinite point.
 */
- (JavaMathBigInteger *)getAffineX;

/*!
 @brief Returns the y-coordinate.
 @return the y-coordinate, or <code>null</code> fot the infinite point.
 */
- (JavaMathBigInteger *)getAffineY;

/*!
 @brief Returns the hashcode of this elliptic curve point.
 @return the hashcode of this elliptic curve point.
 */
- (NSUInteger)hash;

@end

J2OBJC_STATIC_INIT(JavaSecuritySpecECPoint)

/*!
 @brief The point on an Elliptic Curve at infinity.
 */
inline JavaSecuritySpecECPoint *JavaSecuritySpecECPoint_get_POINT_INFINITY();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaSecuritySpecECPoint *JavaSecuritySpecECPoint_POINT_INFINITY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaSecuritySpecECPoint, POINT_INFINITY, JavaSecuritySpecECPoint *)

FOUNDATION_EXPORT void JavaSecuritySpecECPoint_initWithJavaMathBigInteger_withJavaMathBigInteger_(JavaSecuritySpecECPoint *self, JavaMathBigInteger *affineX, JavaMathBigInteger *affineY);

FOUNDATION_EXPORT JavaSecuritySpecECPoint *new_JavaSecuritySpecECPoint_initWithJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *affineX, JavaMathBigInteger *affineY) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySpecECPoint *create_JavaSecuritySpecECPoint_initWithJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *affineX, JavaMathBigInteger *affineY);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecECPoint)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecuritySpecECPoint")
