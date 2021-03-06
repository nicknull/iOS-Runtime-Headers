/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSString, UITextView;

@interface CalendarNotesCell : EKUIConstrainedFontsTableViewCell {
    NSString *_text;
    UITextView *_textView;
}

@property(retain) NSString * placeholder;
@property(copy) NSString * text;
@property(retain,readonly) UITextView * textView;

- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)placeholder;
- (void)setPlaceholder:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (id)textView;

@end
