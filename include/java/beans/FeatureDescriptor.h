//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/beans/src/main/java/java/beans/FeatureDescriptor.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaBeansFeatureDescriptor")
#ifdef RESTRICT_JavaBeansFeatureDescriptor
#define INCLUDE_ALL_JavaBeansFeatureDescriptor 0
#else
#define INCLUDE_ALL_JavaBeansFeatureDescriptor 1
#endif
#undef RESTRICT_JavaBeansFeatureDescriptor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaBeansFeatureDescriptor_) && (INCLUDE_ALL_JavaBeansFeatureDescriptor || defined(INCLUDE_JavaBeansFeatureDescriptor))
#define JavaBeansFeatureDescriptor_

@protocol JavaUtilEnumeration;

/*!
 @brief Common base class for Descriptors.
 */
@interface JavaBeansFeatureDescriptor : NSObject {
 @public
  jboolean preferred_;
  jboolean hidden_;
  jboolean expert_;
  NSString *shortDescription_;
  NSString *name_;
  NSString *displayName_;
}

#pragma mark Public

/*!
 @brief <p>
  Constructs an instance.
 </p>
 */
- (instancetype __nonnull)init;

/*!
 @brief <p>
  Enumerates the attribute names.
 </p>
 @return An instance of <code>Enumeration</code>.
 */
- (id<JavaUtilEnumeration>)attributeNames;

/*!
 @brief <p>
  Gets the display name or <code>getName()</code> if not set.
 </p>
 @return The display name.
 */
- (NSString *)getDisplayName;

/*!
 @brief <p>
  Gets the name.
 </p>
 @return The name.
 */
- (NSString *)getName;

/*!
 @brief <p>
  Gets the short description or <code>getDisplayName()</code> if not set.
 </p>
 @return The description.
 */
- (NSString *)getShortDescription;

/*!
 @brief <p>
  Gets the value associated with the named attribute.
 </p>
 @param attributeName The name of the attribute to get a value for.
 @return The attribute's value.
 */
- (id)getValueWithNSString:(NSString *)attributeName;

/*!
 @brief <p>
  Indicates if this feature is an expert feature.
 </p>
 @return <code>true</code> if hidden, <code>false</code> otherwise.
 */
- (jboolean)isExpert;

/*!
 @brief <p>
  Indicates if this feature is hidden.
 </p>
 @return <code>true</code> if hidden, <code>false</code> otherwise.
 */
- (jboolean)isHidden;

/*!
 @brief <p>
  Indicates if this feature is preferred.
 </p>
 @return <code>true</code> if preferred, <code>false</code> otherwise.
 */
- (jboolean)isPreferred;

/*!
 @brief <p>
  Sets the display name.
 </p>
 @param displayName The display name to set.
 */
- (void)setDisplayNameWithNSString:(NSString *)displayName;

/*!
 @brief <p>
  Sets the expert indicator.
 </p>
 @param expert <code>
  true </code>  if expert,  <code> false </code>  otherwise.
 */
- (void)setExpertWithBoolean:(jboolean)expert;

/*!
 @brief <p>
  Sets the hidden indicator.
 </p>
 @param hidden <code>
  true </code>  if hidden,  <code> false </code>  otherwise.
 */
- (void)setHiddenWithBoolean:(jboolean)hidden;

/*!
 @brief <p>
  Sets the name.
 </p>
 @param name The name to set.
 */
- (void)setNameWithNSString:(NSString *)name;

/*!
 @brief <p>
  Sets the preferred indicator.
 </p>
 @param preferred <code>
  true </code>  if preferred,  <code> false </code>             otherwise.
 */
- (void)setPreferredWithBoolean:(jboolean)preferred;

/*!
 @brief <p>
  Sets the short description.
 </p>
 @param text The description to set.
 */
- (void)setShortDescriptionWithNSString:(NSString *)text;

/*!
 @brief <p>
  Sets the value for the named attribute.
 </p>
 @param attributeName The name of the attribute to set a value with.
 @param value The value to set.
 */
- (void)setValueWithNSString:(NSString *)attributeName
                      withId:(id)value;

#pragma mark Package-Private

- (void)mergeWithJavaBeansFeatureDescriptor:(JavaBeansFeatureDescriptor *)feature;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaBeansFeatureDescriptor)

J2OBJC_FIELD_SETTER(JavaBeansFeatureDescriptor, shortDescription_, NSString *)
J2OBJC_FIELD_SETTER(JavaBeansFeatureDescriptor, name_, NSString *)
J2OBJC_FIELD_SETTER(JavaBeansFeatureDescriptor, displayName_, NSString *)

FOUNDATION_EXPORT void JavaBeansFeatureDescriptor_init(JavaBeansFeatureDescriptor *self);

FOUNDATION_EXPORT JavaBeansFeatureDescriptor *new_JavaBeansFeatureDescriptor_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaBeansFeatureDescriptor *create_JavaBeansFeatureDescriptor_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaBeansFeatureDescriptor)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaBeansFeatureDescriptor")
