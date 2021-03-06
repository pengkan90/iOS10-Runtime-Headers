/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICSearchResult : NSObject {
    unsigned long long  _cachedHash;
    NSString * _highlightString;
    <ICSearchIndexable> * _object;
    unsigned long long  _relevance;
    NSString * _searchString;
}

@property (nonatomic, readonly) NSString *highlightString;
@property (nonatomic, readonly) <ICSearchIndexable> *object;
@property (nonatomic, readonly) unsigned long long relevance;
@property (nonatomic, readonly, copy) NSString *searchString;

+ (id)attributedStringWithMatchHighlightedWithString:(id)arg1 withinString:(id)arg2 usingAttributes:(id)arg3 insideFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
+ (id)attributesByHighlightingAttributes:(id)arg1;
+ (id)authorNameToHighlightForNote:(id)arg1 fromSearchResult:(id)arg2 matchWordBoundaries:(bool)arg3;
+ (id)bestMatchOfString:(id)arg1 withinString:(id)arg2 matchWordBoundaries:(bool)arg3;
+ (id)bestMatchTokensForString:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectForAttributedString:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2;
+ (bool)canFitAttributedString:(id)arg1 ellipses:(id)arg2 shouldPrefixWithEllipses:(bool)arg3 insideFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
+ (id)firstMatchOfString:(id)arg1 withinString:(id)arg2 matchWordBoundaries:(bool)arg3;
+ (id)regularExpressionForSearchingWithString:(id)arg1 matchWordBoundaries:(bool)arg2;
+ (id)snippetWithMatchHighlightedForNote:(id)arg1 fromSearchResult:(id)arg2 usingAttributes:(id)arg3 insideFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
+ (id)stringMatchHighlightedForAttributedString:(id)arg1 fromSearchResult:(id)arg2;
+ (id)stringMatchHighlightedForString:(id)arg1 atributedString:(id)arg2 searchString:(id)arg3;
+ (id)stringMatchHighlightedForString:(id)arg1 fromSearchResult:(id)arg2;
+ (id)titleWithMatchHighlightedForNote:(id)arg1 fromSearchResult:(id)arg2 usingAttributes:(id)arg3 insideFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;

- (void).cxx_destruct;
- (id)bestMatchWithinString:(id)arg1;
- (id)bestMatchWithinString:(id)arg1 matchWordBoundaries:(bool)arg2;
- (long long)compareByModificationDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)highlightString;
- (id)initWithObject:(id)arg1 relevance:(unsigned long long)arg2 searchString:(id)arg3;
- (id)initWithObject:(id)arg1 relevance:(unsigned long long)arg2 searchString:(id)arg3 highlightString:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)object;
- (void)refetchObjectFromContext:(id)arg1;
- (unsigned long long)relevance;
- (id)searchResultByHighlightingWithString:(id)arg1;
- (id)searchString;

@end
