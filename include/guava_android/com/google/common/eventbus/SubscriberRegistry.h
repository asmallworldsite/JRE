//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/eventbus/SubscriberRegistry.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonEventbusSubscriberRegistry")
#ifdef RESTRICT_ComGoogleCommonEventbusSubscriberRegistry
#define INCLUDE_ALL_ComGoogleCommonEventbusSubscriberRegistry 0
#else
#define INCLUDE_ALL_ComGoogleCommonEventbusSubscriberRegistry 1
#endif
#undef RESTRICT_ComGoogleCommonEventbusSubscriberRegistry

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonEventbusSubscriberRegistry_) && (INCLUDE_ALL_ComGoogleCommonEventbusSubscriberRegistry || defined(INCLUDE_ComGoogleCommonEventbusSubscriberRegistry))
#define ComGoogleCommonEventbusSubscriberRegistry_

@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonEventbusEventBus;
@class IOSClass;
@protocol JavaUtilIterator;
@protocol JavaUtilSet;

/*!
 @brief Registry of subscribers to a single event bus.
 @author Colin Decker
 */
@interface ComGoogleCommonEventbusSubscriberRegistry : NSObject

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivateWithComGoogleCommonEventbusEventBus:(ComGoogleCommonEventbusEventBus * __nonnull)bus;

/*!
 @brief Flattens a class's type hierarchy into a set of <code>Class</code> objects including all
  superclasses (transitively) and all interfaces implemented by these superclasses.
 */
+ (ComGoogleCommonCollectImmutableSet *)flattenHierarchyWithIOSClass:(IOSClass * __nonnull)concreteClass;

/*!
 @brief Gets an iterator representing an immutable snapshot of all subscribers to the given event at
  the time this method is called.
 */
- (id<JavaUtilIterator>)getSubscribersWithId:(id __nonnull)event;

- (id<JavaUtilSet>)getSubscribersForTestingWithIOSClass:(IOSClass * __nonnull)eventType;

/*!
 @brief Registers all subscriber methods on the given listener object.
 */
- (void)register__WithId:(id __nonnull)listener;

/*!
 @brief Unregisters all subscribers on the given listener object.
 */
- (void)unregisterWithId:(id __nonnull)listener;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonEventbusSubscriberRegistry)

FOUNDATION_EXPORT void ComGoogleCommonEventbusSubscriberRegistry_initPackagePrivateWithComGoogleCommonEventbusEventBus_(ComGoogleCommonEventbusSubscriberRegistry *self, ComGoogleCommonEventbusEventBus *bus);

FOUNDATION_EXPORT ComGoogleCommonEventbusSubscriberRegistry *new_ComGoogleCommonEventbusSubscriberRegistry_initPackagePrivateWithComGoogleCommonEventbusEventBus_(ComGoogleCommonEventbusEventBus *bus) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonEventbusSubscriberRegistry *create_ComGoogleCommonEventbusSubscriberRegistry_initPackagePrivateWithComGoogleCommonEventbusEventBus_(ComGoogleCommonEventbusEventBus *bus);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSet *ComGoogleCommonEventbusSubscriberRegistry_flattenHierarchyWithIOSClass_(IOSClass *concreteClass);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEventbusSubscriberRegistry)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonEventbusSubscriberRegistry")
