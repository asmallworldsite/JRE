//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/rules/Timeout.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRulesTimeout")
#ifdef RESTRICT_OrgJunitRulesTimeout
#define INCLUDE_ALL_OrgJunitRulesTimeout 0
#else
#define INCLUDE_ALL_OrgJunitRulesTimeout 1
#endif
#undef RESTRICT_OrgJunitRulesTimeout

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitRulesTimeout_) && (INCLUDE_ALL_OrgJunitRulesTimeout || defined(INCLUDE_OrgJunitRulesTimeout))
#define OrgJunitRulesTimeout_

#define RESTRICT_OrgJunitRulesTestRule 1
#define INCLUDE_OrgJunitRulesTestRule 1
#include "org/junit/rules/TestRule.h"

@class JavaUtilConcurrentTimeUnit;
@class OrgJunitRulesTimeout_Builder;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnersModelStatement;

/*!
 @brief The Timeout Rule applies the same timeout to all test methods in a class:
 @code

  public static class HasGlobalLongTimeout {
    &#064;Rule
   public Timeout globalTimeout = Timeout.millis(20);  
  &#064;Test
   public void run1() throws InterruptedException {
       Thread.sleep(100);
   }  
  &#064;Test
   public void infiniteLoop() {
       while (true) {}
   }  }  
  
@endcode
  <p>
  Each test is run in a new thread.
 If the specified timeout elapses before
  the test completes, its execution is interrupted via <code>Thread.interrupt()</code>.
  This happens in interruptable I/O and locks, and methods in <code>Object</code>
  and <code>Thread</code> throwing <code>InterruptedException</code>.
  <p>
  A specified timeout of 0 will be interpreted as not set, however tests will
  still launch from separate threads. This can be useful for disabling timeouts
  in environments where they are dynamically set based on some property.
 @since 4.7
 */
@interface OrgJunitRulesTimeout : NSObject < OrgJunitRulesTestRule >

#pragma mark Public

/*!
 @brief Create a <code>Timeout</code> instance with the timeout specified
  in milliseconds.
 <p>
  This constructor is deprecated. 
 <p>
  Instead use <code>Timeout(long, java.util.concurrent.TimeUnit)</code>,
  <code>Timeout.millis(long)</code>, or <code>Timeout.seconds(long)</code>.
 @param millis the maximum time in milliseconds to allow the  test to run before it should timeout
 */
- (instancetype __nonnull)initWithInt:(jint)millis __attribute__((deprecated));

/*!
 @brief Create a <code>Timeout</code> instance with the timeout specified
  at the timeUnit of granularity of the provided <code>TimeUnit</code>.
 @param timeout the maximum time to allow the test to run  before it should timeout
 @param timeUnit the time unit for the <code>timeout</code>
 @since 4.12
 */
- (instancetype __nonnull)initWithLong:(jlong)timeout
        withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)timeUnit;

- (OrgJunitRunnersModelStatement *)applyWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)base
                                            withOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

/*!
 @brief Returns a new builder for building an instance.
 @since 4.12
 */
+ (OrgJunitRulesTimeout_Builder *)builder;

/*!
 @brief Creates a <code>Timeout</code> that will timeout a test after the
  given duration, in milliseconds.
 @since 4.12
 */
+ (OrgJunitRulesTimeout *)millisWithLong:(jlong)millis;

/*!
 @brief Creates a <code>Timeout</code> that will timeout a test after the
  given duration, in seconds.
 @since 4.12
 */
+ (OrgJunitRulesTimeout *)secondsWithLong:(jlong)seconds;

#pragma mark Protected

/*!
 @brief Create a <code>Timeout</code> instance initialized with values from
  a builder.
 @since 4.12
 */
- (instancetype __nonnull)initWithOrgJunitRulesTimeout_Builder:(OrgJunitRulesTimeout_Builder *)builder;

/*!
 @brief Creates a <code>Statement</code> that will run the given 
 <code>statement</code>, and timeout the operation based
  on the values configured in this rule.Subclasses
  can override this method for different behavior.
 @since 4.12
 */
- (OrgJunitRunnersModelStatement *)createFailOnTimeoutStatementWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)statement;

/*!
 @brief Gets whether this <code>Timeout</code> will look for a stuck thread
  when the test times out.
 @since 4.12
 */
- (jboolean)getLookingForStuckThread;

/*!
 @brief Gets the timeout configured for this rule, in the given units.
 @since 4.12
 */
- (jlong)getTimeoutWithJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRulesTimeout)

FOUNDATION_EXPORT OrgJunitRulesTimeout_Builder *OrgJunitRulesTimeout_builder(void);

FOUNDATION_EXPORT void OrgJunitRulesTimeout_initWithInt_(OrgJunitRulesTimeout *self, jint millis);

FOUNDATION_EXPORT OrgJunitRulesTimeout *new_OrgJunitRulesTimeout_initWithInt_(jint millis) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRulesTimeout *create_OrgJunitRulesTimeout_initWithInt_(jint millis);

FOUNDATION_EXPORT void OrgJunitRulesTimeout_initWithLong_withJavaUtilConcurrentTimeUnit_(OrgJunitRulesTimeout *self, jlong timeout, JavaUtilConcurrentTimeUnit *timeUnit);

FOUNDATION_EXPORT OrgJunitRulesTimeout *new_OrgJunitRulesTimeout_initWithLong_withJavaUtilConcurrentTimeUnit_(jlong timeout, JavaUtilConcurrentTimeUnit *timeUnit) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRulesTimeout *create_OrgJunitRulesTimeout_initWithLong_withJavaUtilConcurrentTimeUnit_(jlong timeout, JavaUtilConcurrentTimeUnit *timeUnit);

FOUNDATION_EXPORT void OrgJunitRulesTimeout_initWithOrgJunitRulesTimeout_Builder_(OrgJunitRulesTimeout *self, OrgJunitRulesTimeout_Builder *builder);

FOUNDATION_EXPORT OrgJunitRulesTimeout *new_OrgJunitRulesTimeout_initWithOrgJunitRulesTimeout_Builder_(OrgJunitRulesTimeout_Builder *builder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRulesTimeout *create_OrgJunitRulesTimeout_initWithOrgJunitRulesTimeout_Builder_(OrgJunitRulesTimeout_Builder *builder);

FOUNDATION_EXPORT OrgJunitRulesTimeout *OrgJunitRulesTimeout_millisWithLong_(jlong millis);

FOUNDATION_EXPORT OrgJunitRulesTimeout *OrgJunitRulesTimeout_secondsWithLong_(jlong seconds);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRulesTimeout)

#endif

#if !defined (OrgJunitRulesTimeout_Builder_) && (INCLUDE_ALL_OrgJunitRulesTimeout || defined(INCLUDE_OrgJunitRulesTimeout_Builder))
#define OrgJunitRulesTimeout_Builder_

@class JavaUtilConcurrentTimeUnit;
@class OrgJunitRulesTimeout;

/*!
 @brief Builder for <code>Timeout</code>.
 @since 4.12
 */
@interface OrgJunitRulesTimeout_Builder : NSObject

#pragma mark Public

/*!
 @brief Builds a <code>Timeout</code> instance using the values in this builder
 .,
 */
- (OrgJunitRulesTimeout *)build;

/*!
 @brief Specifies whether to look for a stuck thread.If a timeout occurs and this
  feature is enabled, the rule will look for a thread that appears to be stuck
  and dump its backtrace.
 This feature is experimental.  Behavior may change
  after the 4.12 release in response to feedback.
 @param enable<code>true</code>  to enable the feature
 @return <code>this</code> for method chaining.
 */
- (OrgJunitRulesTimeout_Builder *)withLookingForStuckThreadWithBoolean:(jboolean)enable;

/*!
 @brief Specifies the time to wait before timing out the test.
 <p>If this is not called, or is called with a 
 <code>timeout</code> of <code>0</code>, the returned <code>Timeout</code>
  rule instance will cause the tests to wait forever to
  complete, however the tests will still launch from a
  separate thread. This can be useful for disabling timeouts
  in environments where they are dynamically set based on
  some property.
 @param timeout the maximum time to wait
 @param unit the time unit of the <code>timeout</code>  argument
 @return <code>this</code> for method chaining.
 */
- (OrgJunitRulesTimeout_Builder *)withTimeoutWithLong:(jlong)timeout
                       withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

#pragma mark Protected

- (instancetype __nonnull)init;

- (jboolean)getLookingForStuckThread;

- (jlong)getTimeout;

- (JavaUtilConcurrentTimeUnit *)getTimeUnit;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRulesTimeout_Builder)

FOUNDATION_EXPORT void OrgJunitRulesTimeout_Builder_init(OrgJunitRulesTimeout_Builder *self);

FOUNDATION_EXPORT OrgJunitRulesTimeout_Builder *new_OrgJunitRulesTimeout_Builder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRulesTimeout_Builder *create_OrgJunitRulesTimeout_Builder_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRulesTimeout_Builder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRulesTimeout")
