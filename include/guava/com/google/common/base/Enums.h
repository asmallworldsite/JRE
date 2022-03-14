//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/base/Enums.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseEnums")
#ifdef RESTRICT_ComGoogleCommonBaseEnums
#define INCLUDE_ALL_ComGoogleCommonBaseEnums 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseEnums 1
#endif
#undef RESTRICT_ComGoogleCommonBaseEnums

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseEnums_) && (INCLUDE_ALL_ComGoogleCommonBaseEnums || defined(INCLUDE_ComGoogleCommonBaseEnums))
#define ComGoogleCommonBaseEnums_

@class ComGoogleCommonBaseConverter;
@class ComGoogleCommonBaseOptional;
@class IOSClass;
@class JavaLangEnum;
@class JavaLangReflectField;
@protocol JavaUtilMap;

/*!
 @brief Utility methods for working with <code>Enum</code> instances.
 @author Steve McKay
 @since 9.0
 */
@interface ComGoogleCommonBaseEnums : NSObject

#pragma mark Public

/*!
 @brief Returns the <code>Field</code> in which <code>enumValue</code> is defined.For example, to get the <code>Description</code>
  annotation on the <code>GOLF</code> constant of enum <code>Sport</code>, use <code>Enums.getField(Sport.GOLF).getAnnotation(Description.class)</code>
 .
 @since 12.0
 */
+ (JavaLangReflectField *)getFieldWithJavaLangEnum:(JavaLangEnum * __nonnull)enumValue;

/*!
 @brief Returns an optional enum constant for the given type, using <code>Enum.valueOf</code>.If the
  constant does not exist, <code>Optional.absent</code> is returned.
 A common use case is for parsing
  user input or falling back to a default enum constant. For example, <code>Enums.getIfPresent(Country.class, countryInput).or(Country.DEFAULT);</code>
 @since 12.0
 */
+ (ComGoogleCommonBaseOptional *)getIfPresentWithIOSClass:(IOSClass * __nonnull)enumClass
                                             withNSString:(NSString * __nonnull)value;

/*!
 @brief Returns a converter that converts between strings and <code>enum</code> values of type <code>enumClass</code>
  using <code>Enum.valueOf(Class, String)</code> and <code>Enum.name()</code>.The converter
  will throw an <code>IllegalArgumentException</code> if the argument is not the name of any enum
  constant in the specified enum.
 @since 16.0
 */
+ (ComGoogleCommonBaseConverter *)stringConverterWithIOSClass:(IOSClass * __nonnull)enumClass;

#pragma mark Package-Private

+ (id<JavaUtilMap>)getEnumConstantsWithIOSClass:(IOSClass * __nonnull)enumClass;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonBaseEnums)

FOUNDATION_EXPORT JavaLangReflectField *ComGoogleCommonBaseEnums_getFieldWithJavaLangEnum_(JavaLangEnum *enumValue);

FOUNDATION_EXPORT ComGoogleCommonBaseOptional *ComGoogleCommonBaseEnums_getIfPresentWithIOSClass_withNSString_(IOSClass *enumClass, NSString *value);

FOUNDATION_EXPORT id<JavaUtilMap> ComGoogleCommonBaseEnums_getEnumConstantsWithIOSClass_(IOSClass *enumClass);

FOUNDATION_EXPORT ComGoogleCommonBaseConverter *ComGoogleCommonBaseEnums_stringConverterWithIOSClass_(IOSClass *enumClass);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseEnums)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseEnums")
