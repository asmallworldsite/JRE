//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/concurrent/atomic/Striped64.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentAtomicStriped64")
#ifdef RESTRICT_JavaUtilConcurrentAtomicStriped64
#define INCLUDE_ALL_JavaUtilConcurrentAtomicStriped64 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentAtomicStriped64 1
#endif
#undef RESTRICT_JavaUtilConcurrentAtomicStriped64

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilConcurrentAtomicStriped64_) && (INCLUDE_ALL_JavaUtilConcurrentAtomicStriped64 || defined(INCLUDE_JavaUtilConcurrentAtomicStriped64))
#define JavaUtilConcurrentAtomicStriped64_

@class IOSObjectArray;
@protocol JavaUtilFunctionDoubleBinaryOperator;
@protocol JavaUtilFunctionLongBinaryOperator;

/*!
 @brief A package-local class holding common representation and mechanics
  for classes supporting dynamic striping on 64bit values.The class
  extends Number so that concrete subclasses must publicly do so.
 */
@interface JavaUtilConcurrentAtomicStriped64 : NSNumber {
 @public
  /*!
   @brief Table of cells.When non-null, size is a power of 2.
   */
  volatile_id cells_;
  /*!
   @brief Base value, used mainly when there is no contention, but also as
  a fallback during table initialization races.Updated via CAS.
   */
  volatile_jlong base_;
  /*!
   @brief Spinlock (locked via CAS) used when resizing and/or creating Cells.
   */
  volatile_jint cellsBusy_;
}
@property (readonly, class) jint NCPU NS_SWIFT_NAME(NCPU);

#pragma mark Public

- (NSUInteger)hash;

- (jboolean)isEqual:(id)obj;

#pragma mark Package-Private

/*!
 @brief Package-private default constructor.
 */
- (instancetype __nonnull)initPackagePrivate;

/*!
 @brief Pseudo-randomly advances and records the given probe value for the
  given thread.
 Duplicated from ThreadLocalRandom because of packaging restrictions.
 */
+ (jint)advanceProbeWithInt:(jint)probe;

/*!
 @brief CASes the base field.
 */
- (jboolean)casBaseWithLong:(jlong)cmp
                   withLong:(jlong)val;

/*!
 @brief CASes the cellsBusy field from 0 to 1 to acquire lock.
 */
- (jboolean)casCellsBusy;

/*!
 @brief Same as longAccumulate, but injecting long/double conversions
  in too many places to sensibly merge with long version, given
  the low-overhead requirements of this class.So must instead be
  maintained by copy/paste/adapt.
 */
- (void)doubleAccumulateWithDouble:(jdouble)x
withJavaUtilFunctionDoubleBinaryOperator:(id<JavaUtilFunctionDoubleBinaryOperator>)fn
                       withBoolean:(jboolean)wasUncontended;

/*!
 @brief Returns the probe value for the current thread.
 Duplicated from ThreadLocalRandom because of packaging restrictions.
 */
+ (jint)getProbe;

/*!
 @brief Handles cases of updates involving initialization, resizing,
  creating new Cells, and/or contention.See above for
  explanation.
 This method suffers the usual non-modularity
  problems of optimistic retry code, relying on rechecked sets of
  reads.
 @param x the value
 @param fn the update function, or null for add (this convention  avoids the need for an extra field or function in LongAdder).
 @param wasUncontended false if CAS failed before call
 */
- (void)longAccumulateWithLong:(jlong)x
withJavaUtilFunctionLongBinaryOperator:(id<JavaUtilFunctionLongBinaryOperator>)fn
                   withBoolean:(jboolean)wasUncontended;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaUtilConcurrentAtomicStriped64)

J2OBJC_VOLATILE_FIELD_SETTER(JavaUtilConcurrentAtomicStriped64, cells_, IOSObjectArray *)

/*!
 @brief Number of CPUS, to place bound on table size
 */
inline jint JavaUtilConcurrentAtomicStriped64_get_NCPU(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT jint JavaUtilConcurrentAtomicStriped64_NCPU;
J2OBJC_STATIC_FIELD_PRIMITIVE_FINAL(JavaUtilConcurrentAtomicStriped64, NCPU, jint)

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicStriped64_initPackagePrivate(JavaUtilConcurrentAtomicStriped64 *self);

FOUNDATION_EXPORT jint JavaUtilConcurrentAtomicStriped64_getProbe(void);

FOUNDATION_EXPORT jint JavaUtilConcurrentAtomicStriped64_advanceProbeWithInt_(jint probe);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentAtomicStriped64)

#endif

#if !defined (JavaUtilConcurrentAtomicStriped64_Cell_) && (INCLUDE_ALL_JavaUtilConcurrentAtomicStriped64 || defined(INCLUDE_JavaUtilConcurrentAtomicStriped64_Cell))
#define JavaUtilConcurrentAtomicStriped64_Cell_

/*!
 @brief Padded variant of AtomicLong supporting only raw accesses plus CAS.
 JVM intrinsics note: It would be possible to use a release-only
  form of CAS here, if it were provided.
 */
@interface JavaUtilConcurrentAtomicStriped64_Cell : NSObject {
 @public
  volatile_jlong value_;
}

#pragma mark Package-Private

- (instancetype __nonnull)initWithLong:(jlong)x;

- (jboolean)casWithLong:(jlong)cmp
               withLong:(jlong)val;

- (void)reset;

- (void)resetWithLong:(jlong)identity;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaUtilConcurrentAtomicStriped64_Cell)

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicStriped64_Cell_initWithLong_(JavaUtilConcurrentAtomicStriped64_Cell *self, jlong x);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicStriped64_Cell *new_JavaUtilConcurrentAtomicStriped64_Cell_initWithLong_(jlong x) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentAtomicStriped64_Cell *create_JavaUtilConcurrentAtomicStriped64_Cell_initWithLong_(jlong x);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentAtomicStriped64_Cell)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentAtomicStriped64")
