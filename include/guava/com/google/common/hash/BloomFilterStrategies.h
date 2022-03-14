//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/hash/BloomFilterStrategies.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonHashBloomFilterStrategies")
#ifdef RESTRICT_ComGoogleCommonHashBloomFilterStrategies
#define INCLUDE_ALL_ComGoogleCommonHashBloomFilterStrategies 0
#else
#define INCLUDE_ALL_ComGoogleCommonHashBloomFilterStrategies 1
#endif
#undef RESTRICT_ComGoogleCommonHashBloomFilterStrategies

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonHashBloomFilterStrategies_) && (INCLUDE_ALL_ComGoogleCommonHashBloomFilterStrategies || defined(INCLUDE_ComGoogleCommonHashBloomFilterStrategies))
#define ComGoogleCommonHashBloomFilterStrategies_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

#define RESTRICT_ComGoogleCommonHashBloomFilter 1
#define INCLUDE_ComGoogleCommonHashBloomFilter_Strategy 1
#include "com/google/common/hash/BloomFilter.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, ComGoogleCommonHashBloomFilterStrategies_Enum) {
  ComGoogleCommonHashBloomFilterStrategies_Enum_MURMUR128_MITZ_32 = 0,
  ComGoogleCommonHashBloomFilterStrategies_Enum_MURMUR128_MITZ_64 = 1,
};

/*!
 @brief Collections of strategies of generating the k * log(M) bits required for an element to be mapped
  to a BloomFilter of M bits and k hash functions.These strategies are part of the serialized form
  of the Bloom filters that use them, thus they must be preserved as is (no updates allowed, only
  introduction of new versions).
 <p>Important: the order of the constants cannot change, and they cannot be deleted - we depend on
  their ordinal for BloomFilter serialization.
 @author Dimitris Andreou
 @author Kurt Alfred Kluever
 */
@interface ComGoogleCommonHashBloomFilterStrategies : JavaLangEnum < ComGoogleCommonHashBloomFilter_Strategy >

@property (readonly, class, nonnull) ComGoogleCommonHashBloomFilterStrategies *MURMUR128_MITZ_32 NS_SWIFT_NAME(MURMUR128_MITZ_32);
@property (readonly, class, nonnull) ComGoogleCommonHashBloomFilterStrategies *MURMUR128_MITZ_64 NS_SWIFT_NAME(MURMUR128_MITZ_64);
#pragma mark Public

+ (ComGoogleCommonHashBloomFilterStrategies *)valueOfWithNSString:(NSString * __nonnull)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (ComGoogleCommonHashBloomFilterStrategies_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonHashBloomFilterStrategies)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonHashBloomFilterStrategies *ComGoogleCommonHashBloomFilterStrategies_values_[];

/*!
 @brief See "Less Hashing, Same Performance: Building a Better Bloom Filter" by Adam Kirsch and Michael
  Mitzenmacher.The paper argues that this trick doesn't significantly deteriorate the
  performance of a Bloom filter (yet only needs two 32bit hash functions).
 */
inline ComGoogleCommonHashBloomFilterStrategies *ComGoogleCommonHashBloomFilterStrategies_get_MURMUR128_MITZ_32(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonHashBloomFilterStrategies, MURMUR128_MITZ_32)

/*!
 @brief This strategy uses all 128 bits of <code>Hashing.murmur3_128</code> when hashing.It looks different
  than the implementation in MURMUR128_MITZ_32 because we're avoiding the multiplication in the
  loop and doing a (much simpler) += hash2.
 We're also changing the index to a positive number by
  AND'ing with Long.MAX_VALUE instead of flipping the bits.
 */
inline ComGoogleCommonHashBloomFilterStrategies *ComGoogleCommonHashBloomFilterStrategies_get_MURMUR128_MITZ_64(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonHashBloomFilterStrategies, MURMUR128_MITZ_64)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonHashBloomFilterStrategies_values(void);

FOUNDATION_EXPORT ComGoogleCommonHashBloomFilterStrategies *ComGoogleCommonHashBloomFilterStrategies_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonHashBloomFilterStrategies *ComGoogleCommonHashBloomFilterStrategies_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashBloomFilterStrategies)

#endif

#if !defined (ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray_) && (INCLUDE_ALL_ComGoogleCommonHashBloomFilterStrategies || defined(INCLUDE_ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray))
#define ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray_

@class IOSLongArray;
@class JavaUtilConcurrentAtomicAtomicLongArray;

/*!
 @brief Models a lock-free array of bits.
 <p>We use this instead of java.util.BitSet because we need access to the array of longs and we
  need compare-and-swap.
 */
@interface ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray : NSObject {
 @public
  JavaUtilConcurrentAtomicAtomicLongArray *data_;
}

#pragma mark Public

- (jboolean)isEqual:(id __nullable)o;

- (NSUInteger)hash;

/*!
 @brief Careful here: if threads are mutating the atomicLongArray while this method is executing, the
  final long[] will be a "rolling snapshot" of the state of the bit array.This is usually good
  enough, but should be kept in mind.
 */
+ (IOSLongArray *)toPlainArrayWithJavaUtilConcurrentAtomicAtomicLongArray:(JavaUtilConcurrentAtomicAtomicLongArray * __nonnull)atomicLongArray;

#pragma mark Package-Private

- (instancetype __nonnull)initWithLong:(jlong)bits;

- (instancetype __nonnull)initWithLongArray:(IOSLongArray * __nonnull)data;

/*!
 @brief Number of set bits (1s).
 <p>Note that because of concurrent set calls and uses of atomics, this bitCount is a (very)
  close *estimate* of the actual number of bits set. It's not possible to do better than an
  estimate without locking. Note that the number, if not exactly accurate, is *always*
  underestimating, never overestimating.
 */
- (jlong)bitCount;

/*!
 @brief Number of bits
 */
- (jlong)bitSize;

- (ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray *)copy__ OBJC_METHOD_FAMILY_NONE;

- (jboolean)getWithLong:(jlong)bitIndex;

/*!
 @brief Combines the two BitArrays using bitwise OR.
 <p>NOTE: Because of the use of atomics, if the other LockFreeBitArray is being mutated while
  this operation is executing, not all of those new 1's may be set in the final state of this
  LockFreeBitArray. The ONLY guarantee provided is that all the bits that were set in the other
  LockFreeBitArray at the start of this method will be set in this LockFreeBitArray at the end
  of this method.
 */
- (void)putAllWithComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray:(ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray * __nonnull)other;

/*!
 @brief Returns true if the bit changed value.
 */
- (jboolean)setWithLong:(jlong)bitIndex;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray)

J2OBJC_FIELD_SETTER(ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray, data_, JavaUtilConcurrentAtomicAtomicLongArray *)

FOUNDATION_EXPORT void ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray_initWithLong_(ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray *self, jlong bits);

FOUNDATION_EXPORT ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray *new_ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray_initWithLong_(jlong bits) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray *create_ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray_initWithLong_(jlong bits);

FOUNDATION_EXPORT void ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray_initWithLongArray_(ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray *self, IOSLongArray *data);

FOUNDATION_EXPORT ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray *new_ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray_initWithLongArray_(IOSLongArray *data) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray *create_ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray_initWithLongArray_(IOSLongArray *data);

FOUNDATION_EXPORT IOSLongArray *ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray_toPlainArrayWithJavaUtilConcurrentAtomicAtomicLongArray_(JavaUtilConcurrentAtomicAtomicLongArray *atomicLongArray);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonHashBloomFilterStrategies")
