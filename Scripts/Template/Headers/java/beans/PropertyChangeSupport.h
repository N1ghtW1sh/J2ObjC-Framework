//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/beans/PropertyChangeSupport.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaBeansPropertyChangeSupport")
#ifdef RESTRICT_JavaBeansPropertyChangeSupport
#define INCLUDE_ALL_JavaBeansPropertyChangeSupport 0
#else
#define INCLUDE_ALL_JavaBeansPropertyChangeSupport 1
#endif
#undef RESTRICT_JavaBeansPropertyChangeSupport

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaBeansPropertyChangeSupport_) && (INCLUDE_ALL_JavaBeansPropertyChangeSupport || defined(INCLUDE_JavaBeansPropertyChangeSupport))
#define JavaBeansPropertyChangeSupport_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../java/io/Serializable.h"

@class IOSObjectArray;
@class JavaBeansPropertyChangeEvent;
@protocol JavaBeansPropertyChangeListener;

/*!
 @brief Manages a list of listeners to be notified when a property changes.
 Listeners
 subscribe to be notified of all property changes, or of changes to a single
 named property.
 <p>This class is thread safe. No locking is necessary when subscribing or
 unsubscribing listeners, or when publishing events. Callers should be careful
 when publishing events because listeners may not be thread safe.
 */
@interface JavaBeansPropertyChangeSupport : NSObject < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Creates a new instance that uses the source bean as source for any event.
 @param sourceBean
 the bean used as source for all events.
 */
- (instancetype)initWithId:(id)sourceBean;

/*!
 @brief Subscribes <code>listener</code> to change notifications for all properties.
 If the listener is already subscribed, it will receive an additional
 notification. If the listener is null, this method silently does nothing.
 */
- (void)addPropertyChangeListenerWithJavaBeansPropertyChangeListener:(id<JavaBeansPropertyChangeListener>)listener;

/*!
 @brief Subscribes <code>listener</code> to change notifications for the property
 named <code>propertyName</code>.
 If the listener is already subscribed, it
 will receive an additional notification when the property changes. If the
 property name or listener is null, this method silently does nothing.
 */
- (void)addPropertyChangeListenerWithNSString:(NSString *)propertyName
          withJavaBeansPropertyChangeListener:(id<JavaBeansPropertyChangeListener>)listener;

/*!
 @brief Fires a property change of a boolean property with the given name.
 If the
 old value and the new value are not null and equal the event will not be
 fired.
 @param propertyName
 the property name
 @param index
 the index of the changed property
 @param oldValue
 the old value
 @param newValue
 the new value
 */
- (void)fireIndexedPropertyChangeWithNSString:(NSString *)propertyName
                                      withInt:(jint)index
                                  withBoolean:(jboolean)oldValue
                                  withBoolean:(jboolean)newValue;

/*!
 @brief Fires a property change of an integer property with the given name.
 If
 the old value and the new value are not null and equal the event will not
 be fired.
 @param propertyName
 the property name
 @param index
 the index of the changed property
 @param oldValue
 the old value
 @param newValue
 the new value
 */
- (void)fireIndexedPropertyChangeWithNSString:(NSString *)propertyName
                                      withInt:(jint)index
                                      withInt:(jint)oldValue
                                      withInt:(jint)newValue;

/*!
 @brief Fires an <code>IndexedPropertyChangeEvent</code> with the given name, old
 value, new value and index.
 As source the bean used to initialize this
 instance is used. If the old value and the new value are not null and
 equal the event will not be fired.
 @param propertyName
 the name of the property
 @param index
 the index
 @param oldValue
 the old value of the property
 @param newValue
 the new value of the property
 */
- (void)fireIndexedPropertyChangeWithNSString:(NSString *)propertyName
                                      withInt:(jint)index
                                       withId:(id)oldValue
                                       withId:(id)newValue;

/*!
 @brief Publishes a property change event to all listeners of that property.
 If
 the event's old and new values are equal (but non-null), no event will be
 published.
 */
- (void)firePropertyChangeWithJavaBeansPropertyChangeEvent:(JavaBeansPropertyChangeEvent *)event;

/*!
 @brief Fires a property change of a boolean property with the given name.
 If the
 old value and the new value are not null and equal the event will not be
 fired.
 @param propertyName
 the property name
 @param oldValue
 the old value
 @param newValue
 the new value
 */
- (void)firePropertyChangeWithNSString:(NSString *)propertyName
                           withBoolean:(jboolean)oldValue
                           withBoolean:(jboolean)newValue;

/*!
 @brief Fires a property change of an integer property with the given name.
 If
 the old value and the new value are not null and equal the event will not
 be fired.
 @param propertyName
 the property name
 @param oldValue
 the old value
 @param newValue
 the new value
 */
- (void)firePropertyChangeWithNSString:(NSString *)propertyName
                               withInt:(jint)oldValue
                               withInt:(jint)newValue;

/*!
 @brief Fires a <code>PropertyChangeEvent</code> with the given name, old value and
 new value.
 As source the bean used to initialize this instance is used.
 If the old value and the new value are not null and equal the event will
 not be fired.
 @param propertyName
 the name of the property
 @param oldValue
 the old value of the property
 @param newValue
 the new value of the property
 */
- (void)firePropertyChangeWithNSString:(NSString *)propertyName
                                withId:(id)oldValue
                                withId:(id)newValue;

/*!
 @brief Returns all subscribers.
 This includes both listeners subscribed to all
 property changes and listeners subscribed to a single property.
 */
- (IOSObjectArray *)getPropertyChangeListeners;

/*!
 @brief Returns the subscribers to be notified when <code>propertyName</code> changes.
 This includes both listeners subscribed to all property changes and
 listeners subscribed to the named property only.
 */
- (IOSObjectArray *)getPropertyChangeListenersWithNSString:(NSString *)propertyName;

/*!
 @brief Returns true if there are listeners registered to the property with the
 given name.
 @param propertyName
 the name of the property
 @return true if there are listeners registered to that property, false
 otherwise.
 */
- (jboolean)hasListenersWithNSString:(NSString *)propertyName;

/*!
 @brief Unsubscribes <code>listener</code> from change notifications for all
 properties.
 If the listener has multiple subscriptions, it will receive
 one fewer notification when properties change. If the property name or
 listener is null or not subscribed, this method silently does nothing.
 */
- (void)removePropertyChangeListenerWithJavaBeansPropertyChangeListener:(id<JavaBeansPropertyChangeListener>)listener;

/*!
 @brief Unsubscribes <code>listener</code> from change notifications for the property
 named <code>propertyName</code>.
 If multiple subscriptions exist for <code>listener</code>
 , it will receive one fewer notifications when the property
 changes. If the property name or listener is null or not subscribed, this
 method silently does nothing.
 */
- (void)removePropertyChangeListenerWithNSString:(NSString *)propertyName
             withJavaBeansPropertyChangeListener:(id<JavaBeansPropertyChangeListener>)listener;

@end

J2OBJC_STATIC_INIT(JavaBeansPropertyChangeSupport)

FOUNDATION_EXPORT void JavaBeansPropertyChangeSupport_initWithId_(JavaBeansPropertyChangeSupport *self, id sourceBean);

FOUNDATION_EXPORT JavaBeansPropertyChangeSupport *new_JavaBeansPropertyChangeSupport_initWithId_(id sourceBean) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaBeansPropertyChangeSupport *create_JavaBeansPropertyChangeSupport_initWithId_(id sourceBean);

J2OBJC_TYPE_LITERAL_HEADER(JavaBeansPropertyChangeSupport)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaBeansPropertyChangeSupport")
