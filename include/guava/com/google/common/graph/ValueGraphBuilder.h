//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/graph/ValueGraphBuilder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphValueGraphBuilder")
#ifdef RESTRICT_ComGoogleCommonGraphValueGraphBuilder
#define INCLUDE_ALL_ComGoogleCommonGraphValueGraphBuilder 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphValueGraphBuilder 1
#endif
#undef RESTRICT_ComGoogleCommonGraphValueGraphBuilder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphValueGraphBuilder_) && (INCLUDE_ALL_ComGoogleCommonGraphValueGraphBuilder || defined(INCLUDE_ComGoogleCommonGraphValueGraphBuilder))
#define ComGoogleCommonGraphValueGraphBuilder_

#define RESTRICT_ComGoogleCommonGraphAbstractGraphBuilder 1
#define INCLUDE_ComGoogleCommonGraphAbstractGraphBuilder 1
#include "com/google/common/graph/AbstractGraphBuilder.h"

@class ComGoogleCommonGraphElementOrder;
@class ComGoogleCommonGraphImmutableValueGraph_Builder;
@protocol ComGoogleCommonGraphMutableValueGraph;
@protocol ComGoogleCommonGraphValueGraph;

/*!
 @brief A builder for constructing instances of <code>MutableValueGraph</code> or <code>ImmutableValueGraph</code>
  with user-defined properties.
 <p>A graph built by this class will have the following properties by default: 
 <ul>
    <li>does not allow self-loops
    <li>orders <code>Graph.nodes()</code> in the order in which the elements were added 
 </ul>
  
 <p>Examples of use: 
 @code
 // Building a mutable value graph
  MutableValueGraph<String, Double> graph =
      ValueGraphBuilder.undirected().allowsSelfLoops(true).build();
  graph.putEdgeValue("San Francisco", "San Francisco", 0.0);
  graph.putEdgeValue("San Jose", "San Jose", 0.0);
  graph.putEdgeValue("San Francisco", "San Jose", 48.4);
  // Building an immutable value graph
  ImmutableValueGraph<String, Double> immutableGraph =
      ValueGraphBuilder.undirected()
          .allowsSelfLoops(true)
          .<String, Double>immutable()
          .putEdgeValue("San Francisco", "San Francisco", 0.0)
          .putEdgeValue("San Jose", "San Jose", 0.0)
          .putEdgeValue("San Francisco", "San Jose", 48.4)
          .build(); 
 
@endcode
 @author James Sexton
 @author Joshua O'Madadhain
 @since 20.0
 */
@interface ComGoogleCommonGraphValueGraphBuilder : ComGoogleCommonGraphAbstractGraphBuilder

#pragma mark Public

/*!
 @brief Specifies whether the graph will allow self-loops (edges that connect a node to itself).
 Attempting to add a self-loop to a graph that does not allow them will throw an <code>UnsupportedOperationException</code>
 .
  
 <p>The default value is <code>false</code>.
 */
- (ComGoogleCommonGraphValueGraphBuilder *)allowsSelfLoopsWithBoolean:(jboolean)allowsSelfLoops;

/*!
 @brief Returns an empty <code>MutableValueGraph</code> with the properties of this <code>ValueGraphBuilder</code>
 .
 */
- (id<ComGoogleCommonGraphMutableValueGraph>)build;

/*!
 @brief Returns a <code>ValueGraphBuilder</code> for building directed graphs.
 */
+ (ComGoogleCommonGraphValueGraphBuilder *)directed;

/*!
 @brief Specifies the expected number of nodes in the graph.
 @throw IllegalArgumentExceptionif <code>expectedNodeCount</code> is negative
 */
- (ComGoogleCommonGraphValueGraphBuilder *)expectedNodeCountWithInt:(jint)expectedNodeCount;

/*!
 @brief Returns a <code>ValueGraphBuilder</code> initialized with all properties queryable from <code>graph</code>
 .
 <p>The "queryable" properties are those that are exposed through the <code>ValueGraph</code>
  interface, such as <code>ValueGraph.isDirected()</code>. Other properties, such as <code>expectedNodeCount(int)</code>
 , are not set in the new builder.
 */
+ (ComGoogleCommonGraphValueGraphBuilder *)fromWithComGoogleCommonGraphValueGraph:(id<ComGoogleCommonGraphValueGraph> __nonnull)graph;

/*!
 @brief Returns an <code>ImmutableValueGraph.Builder</code> with the properties of this <code>ValueGraphBuilder</code>
 .
 <p>The returned builder can be used for populating an <code>ImmutableValueGraph</code>.
  
 <p>Note that the returned builder will always have <code>incidentEdgeOrder</code> set to <code>ElementOrder.stable()</code>
 , regardless of the value that was set in this builder.
 @since 28.0
 */
- (ComGoogleCommonGraphImmutableValueGraph_Builder *)immutable;

/*!
 @brief Specifies the order of iteration for the elements of <code>ValueGraph.edges()</code>, <code>ValueGraph.adjacentNodes(Object)</code>
 , <code>ValueGraph.predecessors(Object)</code>, <code>ValueGraph.successors(Object)</code>
  and <code>ValueGraph.incidentEdges(Object)</code>.
 <p>The default value is <code>unordered</code> for mutable graphs. For
  immutable graphs, this value is ignored; they always have a <code>stable</code>
  order.
 @throw IllegalArgumentExceptionif <code>incidentEdgeOrder</code> is not either <code>ElementOrder.unordered()</code>
  or <code>ElementOrder.stable()</code>.
 @since 29.0
 */
- (ComGoogleCommonGraphValueGraphBuilder *)incidentEdgeOrderWithComGoogleCommonGraphElementOrder:(ComGoogleCommonGraphElementOrder * __nonnull)incidentEdgeOrder;

/*!
 @brief Specifies the order of iteration for the elements of <code>Graph.nodes()</code>.
 <p>The default value is <code>insertion order</code>.
 */
- (ComGoogleCommonGraphValueGraphBuilder *)nodeOrderWithComGoogleCommonGraphElementOrder:(ComGoogleCommonGraphElementOrder * __nonnull)nodeOrder;

/*!
 @brief Returns a <code>ValueGraphBuilder</code> for building undirected graphs.
 */
+ (ComGoogleCommonGraphValueGraphBuilder *)undirected;

#pragma mark Package-Private

- (ComGoogleCommonGraphValueGraphBuilder *)copy__ OBJC_METHOD_FAMILY_NONE;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initPackagePrivateWithBoolean:(jboolean)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphValueGraphBuilder)

FOUNDATION_EXPORT ComGoogleCommonGraphValueGraphBuilder *ComGoogleCommonGraphValueGraphBuilder_directed(void);

FOUNDATION_EXPORT ComGoogleCommonGraphValueGraphBuilder *ComGoogleCommonGraphValueGraphBuilder_undirected(void);

FOUNDATION_EXPORT ComGoogleCommonGraphValueGraphBuilder *ComGoogleCommonGraphValueGraphBuilder_fromWithComGoogleCommonGraphValueGraph_(id<ComGoogleCommonGraphValueGraph> graph);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphValueGraphBuilder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphValueGraphBuilder")
