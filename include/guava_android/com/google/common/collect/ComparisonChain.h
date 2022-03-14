//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/collect/ComparisonChain.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectComparisonChain")
#ifdef RESTRICT_ComGoogleCommonCollectComparisonChain
#define INCLUDE_ALL_ComGoogleCommonCollectComparisonChain 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectComparisonChain 1
#endif
#undef RESTRICT_ComGoogleCommonCollectComparisonChain

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectComparisonChain_) && (INCLUDE_ALL_ComGoogleCommonCollectComparisonChain || defined(INCLUDE_ComGoogleCommonCollectComparisonChain))
#define ComGoogleCommonCollectComparisonChain_

@class JavaLangBoolean;
@protocol JavaLangComparable;
@protocol JavaUtilComparator;

/*!
 @brief A utility for performing a chained comparison statement.For example: 
 @code
 public int compareTo(Foo that) {
    return ComparisonChain.start()
        .compare(this.aString, that.aString)
        .compare(this.anInt, that.anInt)
        .compare(this.anEnum, that.anEnum, Ordering.natural().nullsLast())
        .result();
  } 
 
@endcode
  
 <p>The value of this expression will have the same sign as the <i>first nonzero</i> comparison
  result in the chain, or will be zero if every comparison result was zero.
 <p><b>Note:</b> <code>ComparisonChain</code> instances are <b>immutable</b>. For this utility to work
  correctly, calls must be chained as illustrated above. 
 <p>Performance note: Even though the <code>ComparisonChain</code> caller always invokes its <code>compare</code>
  methods unconditionally, the <code>ComparisonChain</code> implementation stops calling its
  inputs' <code>compareTo</code> and <code>compare</code> methods as
  soon as one of them returns a nonzero result. This optimization is typically important only in
  the presence of expensive <code>compareTo</code> and <code>compare</code> implementations. 
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/CommonObjectUtilitiesExplained#comparecompareto">
  <code>ComparisonChain</code>
 </a>.
 @author Mark Davis
 @author Kevin Bourrillion
 @since 2.0
 */
@interface ComGoogleCommonCollectComparisonChain : NSObject

#pragma mark Public

/*!
 @brief Discouraged synonym for <code>compareFalseFirst</code>.
 @since 19.0
 */
- (ComGoogleCommonCollectComparisonChain *)compareWithJavaLangBoolean:(JavaLangBoolean * __nonnull)left
                                                  withJavaLangBoolean:(JavaLangBoolean * __nonnull)right __attribute__((deprecated));

/*!
 @brief Compares two comparable objects as specified by <code>Comparable.compareTo</code>, <i>if</i> the
  result of this comparison chain has not already been determined.
 */
- (ComGoogleCommonCollectComparisonChain *)compareWithJavaLangComparable:(id<JavaLangComparable> __nonnull)left
                                                  withJavaLangComparable:(id<JavaLangComparable> __nonnull)right;

/*!
 @brief Compares two <code>double</code> values as specified by <code>Double.compare</code>, <i>if</i> the result
  of this comparison chain has not already been determined.
 */
- (ComGoogleCommonCollectComparisonChain *)compareWithDouble:(jdouble)left
                                                  withDouble:(jdouble)right;

/*!
 @brief Compares two <code>float</code> values as specified by <code>Float.compare</code>, <i>if</i> the result
  of this comparison chain has not already been determined.
 */
- (ComGoogleCommonCollectComparisonChain *)compareWithFloat:(jfloat)left
                                                  withFloat:(jfloat)right;

/*!
 @brief Compares two <code>int</code> values as specified by <code>Ints.compare</code>, <i>if</i> the result of
  this comparison chain has not already been determined.
 */
- (ComGoogleCommonCollectComparisonChain *)compareWithInt:(jint)left
                                                  withInt:(jint)right;

/*!
 @brief Compares two <code>long</code> values as specified by <code>Longs.compare</code>, <i>if</i> the result of
  this comparison chain has not already been determined.
 */
- (ComGoogleCommonCollectComparisonChain *)compareWithLong:(jlong)left
                                                  withLong:(jlong)right;

/*!
 @brief Compares two objects using a comparator, <i>if</i> the result of this comparison chain has not
  already been determined.
 */
- (ComGoogleCommonCollectComparisonChain *)compareWithId:(id __nullable)left
                                                  withId:(id __nullable)right
                                  withJavaUtilComparator:(id<JavaUtilComparator> __nonnull)comparator;

/*!
 @brief Compares two <code>boolean</code> values, considering <code>false</code> to be less than <code>true</code>,
  <i>if</i> the result of this comparison chain has not already been determined.
 @since 12.0 (present as <code>compare</code> since 2.0)
 */
- (ComGoogleCommonCollectComparisonChain *)compareFalseFirstWithBoolean:(jboolean)left
                                                            withBoolean:(jboolean)right;

/*!
 @brief Compares two <code>boolean</code> values, considering <code>true</code> to be less than <code>false</code>,
  <i>if</i> the result of this comparison chain has not already been determined.
 @since 12.0
 */
- (ComGoogleCommonCollectComparisonChain *)compareTrueFirstWithBoolean:(jboolean)left
                                                           withBoolean:(jboolean)right;

/*!
 @brief Ends this comparison chain and returns its result: a value having the same sign as the first
  nonzero comparison result in the chain, or zero if every result was zero.
 */
- (jint)result;

/*!
 @brief Begins a new chained comparison statement.See example in the class documentation.
 */
+ (ComGoogleCommonCollectComparisonChain *)start;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectComparisonChain)

FOUNDATION_EXPORT ComGoogleCommonCollectComparisonChain *ComGoogleCommonCollectComparisonChain_start(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectComparisonChain)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectComparisonChain")
