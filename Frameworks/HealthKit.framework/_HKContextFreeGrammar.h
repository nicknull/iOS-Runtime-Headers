/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSCharacterSet, NSMutableSet, _HKCFGNonTerminal;

@interface _HKContextFreeGrammar : NSObject {
    id _emptyStringEvaluator;
    NSMutableSet *_nonTerminals;
    _HKCFGNonTerminal *_rootNonTerminal;
    NSCharacterSet *_terminalCharacters;
    NSMutableSet *_terminals;
}

@property(readonly) id emptyStringEvaluator;
@property(readonly) _HKCFGNonTerminal * rootNonTerminal;

+ (id)grammarWithRootNonTerminal:(id)arg1 emptyStringEvaluator:(id)arg2;
+ (id)grammarWithRootNonTerminal:(id)arg1;

- (void).cxx_destruct;
- (void)_gatherExpressions;
- (void)_gatherExpressionsStartingAt:(id)arg1;
- (id)emptyStringEvaluator;
- (id)initWithRootNonTerminal:(id)arg1 emptyStringEvaluator:(id)arg2;
- (void)invalidate;
- (id)parseTreeForString:(id)arg1;
- (id)rootNonTerminal;

@end
