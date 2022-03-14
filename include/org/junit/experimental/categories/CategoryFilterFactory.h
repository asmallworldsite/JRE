//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/experimental/categories/CategoryFilterFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitExperimentalCategoriesCategoryFilterFactory")
#ifdef RESTRICT_OrgJunitExperimentalCategoriesCategoryFilterFactory
#define INCLUDE_ALL_OrgJunitExperimentalCategoriesCategoryFilterFactory 0
#else
#define INCLUDE_ALL_OrgJunitExperimentalCategoriesCategoryFilterFactory 1
#endif
#undef RESTRICT_OrgJunitExperimentalCategoriesCategoryFilterFactory

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitExperimentalCategoriesCategoryFilterFactory_) && (INCLUDE_ALL_OrgJunitExperimentalCategoriesCategoryFilterFactory || defined(INCLUDE_OrgJunitExperimentalCategoriesCategoryFilterFactory))
#define OrgJunitExperimentalCategoriesCategoryFilterFactory_

#define RESTRICT_OrgJunitRunnerFilterFactory 1
#define INCLUDE_OrgJunitRunnerFilterFactory 1
#include "org/junit/runner/FilterFactory.h"

@class OrgJunitRunnerFilterFactoryParams;
@class OrgJunitRunnerManipulationFilter;
@protocol JavaUtilList;

/*!
 @brief Implementation of FilterFactory for Category filtering.
 */
@interface OrgJunitExperimentalCategoriesCategoryFilterFactory : NSObject < OrgJunitRunnerFilterFactory >

#pragma mark Public

/*!
 @brief Creates a <code>org.junit.experimental.categories.Categories.CategoryFilter</code> given a 
 <code>FilterFactoryParams</code> argument.
 @param params Parameters needed to create the <code>Filter</code>
 */
- (OrgJunitRunnerManipulationFilter *)createFilterWithOrgJunitRunnerFilterFactoryParams:(OrgJunitRunnerFilterFactoryParams *)params;

#pragma mark Protected

/*!
 @brief Creates a <code>org.junit.experimental.categories.Categories.CategoryFilter</code> given an array of classes.
 @param categories Category classes.
 */
- (OrgJunitRunnerManipulationFilter *)createFilterWithJavaUtilList:(id<JavaUtilList>)categories;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalCategoriesCategoryFilterFactory)

FOUNDATION_EXPORT void OrgJunitExperimentalCategoriesCategoryFilterFactory_initPackagePrivate(OrgJunitExperimentalCategoriesCategoryFilterFactory *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalCategoriesCategoryFilterFactory)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitExperimentalCategoriesCategoryFilterFactory")
