//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/collect/BiMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectBiMap")
#ifdef RESTRICT_ComGoogleCommonCollectBiMap
#define INCLUDE_ALL_ComGoogleCommonCollectBiMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectBiMap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectBiMap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectBiMap_) && (INCLUDE_ALL_ComGoogleCommonCollectBiMap || defined(INCLUDE_ComGoogleCommonCollectBiMap))
#define ComGoogleCommonCollectBiMap_

#define RESTRICT_JavaUtilMap 1
#define INCLUDE_JavaUtilMap 1
#include "java/util/Map.h"

@protocol JavaUtilSet;

/*!
 @brief A bimap (or "bidirectional map") is a map that preserves the uniqueness of its values as well as
  that of its keys.This constraint enables bimaps to support an "inverse view", which is another
  bimap containing the same entries as this bimap but with reversed keys and values.
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/NewCollectionTypesExplained#bimap">
  <code>BiMap</code></a>.
 @author Kevin Bourrillion
 @since 2.0
 */
@protocol ComGoogleCommonCollectBiMap < JavaUtilMap, JavaObject >

/*!
 @throw IllegalArgumentExceptionif the given value is already bound to a different key in this
      bimap. The bimap will remain unmodified in this event. To avoid this exception, call <code>forcePut</code>
  instead.
 */
- (id __nullable)putWithId:(id __nullable)key
                    withId:(id __nullable)value;

/*!
 @brief An alternate form of <code>put</code> that silently removes any existing entry with the value <code>value</code>
  before proceeding with the <code>put</code> operation.If the bimap previously contained the
  provided key-value mapping, this method has no effect.
 <p>Note that a successful call to this method could cause the size of the bimap to increase by
  one, stay the same, or even decrease by one. 
 <p><b>Warning:</b> If an existing entry with this value is removed, the key for that entry is
  discarded and not returned.
 @param key the key with which the specified value is to be associated
 @param value the value to be associated with the specified key
 @return the value which was previously associated with the key, which may be <code>null</code>, or
      <code>null</code> if there was no previous entry
 */
- (id __nullable)forcePutWithId:(id __nullable)key
                         withId:(id __nullable)value;

/*!
 @brief <p><b>Warning:</b> the results of calling this method may vary depending on the iteration order of 
 <code>map</code>.
 @throw IllegalArgumentExceptionif an attempt to <code>put</code> any entry fails. Note that some
      map entries may have been added to the bimap before the exception was thrown.
 */
- (void)putAllWithJavaUtilMap:(id<JavaUtilMap> __nonnull)map;

/*!
 @brief <p>Because a bimap has unique values, this method returns a <code>Set</code>, instead of the <code>java.util.Collection</code>
  specified in the <code>Map</code> interface.
 */
- (id<JavaUtilSet>)values;

/*!
 @brief Returns the inverse view of this bimap, which maps each of this bimap's values to its
  associated key.The two bimaps are backed by the same data; any changes to one will appear in
  the other.
 <p><b>Note:</b>There is no guaranteed correspondence between the iteration order of a bimap and
  that of its inverse.
 @return the inverse view of this bimap
 */
- (id<ComGoogleCommonCollectBiMap>)inverse;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectBiMap)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectBiMap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectBiMap")
