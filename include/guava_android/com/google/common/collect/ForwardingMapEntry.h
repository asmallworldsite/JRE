//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/collect/ForwardingMapEntry.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingMapEntry")
#ifdef RESTRICT_ComGoogleCommonCollectForwardingMapEntry
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingMapEntry 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingMapEntry 1
#endif
#undef RESTRICT_ComGoogleCommonCollectForwardingMapEntry

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectForwardingMapEntry_) && (INCLUDE_ALL_ComGoogleCommonCollectForwardingMapEntry || defined(INCLUDE_ComGoogleCommonCollectForwardingMapEntry))
#define ComGoogleCommonCollectForwardingMapEntry_

#define RESTRICT_ComGoogleCommonCollectForwardingObject 1
#define INCLUDE_ComGoogleCommonCollectForwardingObject 1
#include "com/google/common/collect/ForwardingObject.h"

#define RESTRICT_JavaUtilMap 1
#define INCLUDE_JavaUtilMap_Entry 1
#include "java/util/Map.h"

/*!
 @brief A map entry which forwards all its method calls to another map entry.Subclasses should override
  one or more methods to modify the behavior of the backing map entry as desired per the <a href="http://en.wikipedia.org/wiki/Decorator_pattern">
 decorator pattern</a>.
 <p><b>Warning:</b> The methods of <code>ForwardingMapEntry</code> forward <i>indiscriminately</i> to
  the methods of the delegate. For example, overriding <code>getValue</code> alone <i>will not</i>
  change the behavior of <code>equals</code>, which can lead to unexpected behavior. In this case, you
  should override <code>equals</code> as well, either providing your own implementation, or delegating
  to the provided <code>standardEquals</code> method. 
 <p>Each of the <code>standard</code> methods, where appropriate, use <code>Objects.equal</code> to test
  equality for both keys and values. This may not be the desired behavior for map implementations
  that use non-standard notions of key equality, such as the entry of a <code>SortedMap</code> whose
  comparator is not consistent with <code>equals</code>.
  
 <p>The <code>standard</code> methods are not guaranteed to be thread-safe, even when all of the
  methods that they depend on are thread-safe.
 @author Mike Bostock
 @author Louis Wasserman
 @since 2.0
 */
@interface ComGoogleCommonCollectForwardingMapEntry : ComGoogleCommonCollectForwardingObject < JavaUtilMap_Entry >

#pragma mark Public

- (jboolean)isEqual:(id __nullable)object;

- (id)getKey;

- (id)getValue;

- (NSUInteger)hash;

- (id)setValueWithId:(id __nonnull)value;

#pragma mark Protected

/*!
 @brief Constructor for use by subclasses.
 */
- (instancetype __nonnull)init;

- (id<JavaUtilMap_Entry>)delegate;

/*!
 @brief A sensible definition of <code>equals(Object)</code> in terms of <code>getKey()</code> and <code>getValue()</code>
 .If you override either of these methods, you may wish to override <code>equals(Object)</code>
  to forward to this implementation.
 @since 7.0
 */
- (jboolean)standardEqualsWithId:(id __nullable)object;

/*!
 @brief A sensible definition of <code>hashCode()</code> in terms of <code>getKey()</code> and <code>getValue()</code>
 .If you override either of these methods, you may wish to override <code>hashCode()</code>
  to forward to this implementation.
 @since 7.0
 */
- (jint)standardHashCode;

/*!
 @brief A sensible definition of <code>toString</code> in terms of <code>getKey</code> and <code>getValue</code>.
 If you override either of these methods, you may wish to override <code>equals</code> to forward to
  this implementation.
 @since 7.0
 */
- (NSString *)standardToString;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingMapEntry)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingMapEntry_init(ComGoogleCommonCollectForwardingMapEntry *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingMapEntry)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingMapEntry")
