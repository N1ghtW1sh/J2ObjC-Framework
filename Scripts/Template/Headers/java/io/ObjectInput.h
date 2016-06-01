//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/ObjectInput.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoObjectInput")
#ifdef RESTRICT_JavaIoObjectInput
#define INCLUDE_ALL_JavaIoObjectInput 0
#else
#define INCLUDE_ALL_JavaIoObjectInput 1
#endif
#undef RESTRICT_JavaIoObjectInput

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoObjectInput_) && (INCLUDE_ALL_JavaIoObjectInput || defined(INCLUDE_JavaIoObjectInput))
#define JavaIoObjectInput_

#define RESTRICT_JavaIoDataInput 1
#define INCLUDE_JavaIoDataInput 1
#include "../../java/io/DataInput.h"

#define RESTRICT_JavaLangAutoCloseable 1
#define INCLUDE_JavaLangAutoCloseable 1
#include "../../java/lang/AutoCloseable.h"

@class IOSByteArray;

/*!
 @brief Defines an interface for classes that allow reading serialized objects.
 - seealso: ObjectInputStream
 - seealso: ObjectOutput
 */
@protocol JavaIoObjectInput < JavaIoDataInput, JavaLangAutoCloseable, NSObject, JavaObject >

/*!
 @brief Indicates the number of bytes of primitive data that can be read without
 blocking.
 @return the number of bytes available.
 @throws IOException
 if an I/O error occurs.
 */
- (jint)available;

/*!
 @brief Closes this stream.
 Implementations of this method should free any
 resources used by the stream.
 @throws IOException
 if an I/O error occurs while closing the input stream.
 */
- (void)close;

/*!
 @brief Reads a single byte from this stream and returns it as an integer in the
 range from 0 to 255.
 Returns -1 if the end of this stream has been
 reached. Blocks if no input is available.
 @return the byte read or -1 if the end of this stream has been reached.
 @throws IOException
 if this stream is closed or another I/O error occurs.
 */
- (jint)read;

/*!
 @brief Reads bytes from this stream into the byte array <code>buffer</code>.
 Blocks
 while waiting for input.
 @param buffer
 the array in which to store the bytes read.
 @return the number of bytes read or -1 if the end of this stream has been
 reached.
 @throws IOException
 if this stream is closed or another I/O error occurs.
 */
- (jint)readWithByteArray:(IOSByteArray *)buffer;

/*!
 @brief Reads at most <code>count</code> bytes from this stream and stores them in
 byte array <code>buffer</code> starting at offset <code>count</code>.
 Blocks while
 waiting for input.
 @param buffer
 the array in which to store the bytes read.
 @param offset
 the initial position in <code>buffer</code> to store the bytes read
 from this stream.
 @param count
 the maximum number of bytes to store in <code>buffer</code>.
 @return the number of bytes read or -1 if the end of this stream has been
 reached.
 @throws IOException
 if this stream is closed or another I/O error occurs.
 */
- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)offset
                  withInt:(jint)count;

/*!
 @brief Reads the next object from this stream.
 @return the object read.
 @throws ClassNotFoundException
 if the object's class cannot be found.
 @throws IOException
 if this stream is closed or another I/O error occurs.
 */
- (id)readObject;

/*!
 @brief Skips <code>byteCount</code> bytes on this stream.
 Less than <code>byteCount</code> byte are
 skipped if the end of this stream is reached before the operation
 completes.
 @return the number of bytes actually skipped.
 @throws IOException
 if this stream is closed or another I/O error occurs.
 */
- (jlong)skipWithLong:(jlong)byteCount;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoObjectInput)

J2OBJC_TYPE_LITERAL_HEADER(JavaIoObjectInput)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoObjectInput")
