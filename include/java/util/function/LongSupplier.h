//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/function/LongSupplier.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFunctionLongSupplier")
#ifdef RESTRICT_JavaUtilFunctionLongSupplier
#define INCLUDE_ALL_JavaUtilFunctionLongSupplier 0
#else
#define INCLUDE_ALL_JavaUtilFunctionLongSupplier 1
#endif
#undef RESTRICT_JavaUtilFunctionLongSupplier

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilFunctionLongSupplier_) && (INCLUDE_ALL_JavaUtilFunctionLongSupplier || defined(INCLUDE_JavaUtilFunctionLongSupplier))
#define JavaUtilFunctionLongSupplier_

/*!
 @brief Represents a supplier of <code>long</code>-valued results.This is the 
 <code>long</code>-producing primitive specialization of <code>Supplier</code>.
 <p>There is no requirement that a distinct result be returned each
  time the supplier is invoked. 
 <p>This is a <a href="package-summary.html">functional interface</a>
  whose functional method is <code>getAsLong()</code>.
 - seealso: Supplier
 @since 1.8
 */
@protocol JavaUtilFunctionLongSupplier < JavaObject >

/*!
 @brief Gets a result.
 @return a result
 */
- (jlong)getAsLong;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFunctionLongSupplier)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFunctionLongSupplier)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilFunctionLongSupplier")
