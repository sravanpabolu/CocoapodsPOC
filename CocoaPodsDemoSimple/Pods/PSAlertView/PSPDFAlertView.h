//
//  PSPDFAlertView.h
//
//  Copyright (c) 2011-2014 PSPDFKit GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>

/// Helper to add block features to `UIAlertView`.
/// @note After block has been executed, it is set to nil, breaking potential retain cycles.
@interface PSPDFAlertView : UIAlertView

/// @name Initialization

/// Default initializer.
- (id)initWithTitle:(NSString *)title;
- (id)initWithTitle:(NSString *)title message:(NSString *)message;

/// @name Adding Buttons

/// Add a cancel button. (use only once!)
- (NSInteger)setCancelButtonWithTitle:(NSString *)title block:(void (^)(NSInteger buttonIndex))block;

/// Add regular button.
- (NSInteger)addButtonWithTitle:(NSString *)title block:(void (^)(NSInteger buttonIndex))block;

/// Add block that is called after the alert view will be dismissed (before animation).
- (void)addWillDismissBlock:(void (^)(NSInteger buttonIndex))willDismissBlock;

/// Add block that is called after the alert view has been dismissed (after animation).
- (void)addDidDismissBlock:(void (^)(NSInteger buttonIndex))didDismissBlock;

@end

@interface PSPDFAlertView (PSPDFSuperclassBlock)

- (id)initWithTitle:(NSString *)title delegate:(id<UIActionSheetDelegate>)delegate cancelButtonTitle:(NSString *)cancelButtonTitle destructiveButtonTitle:(NSString *)destructiveButtonTitle otherButtonTitles:(NSString *)otherButtonTitles, ... __attribute__((unavailable("Please use initWithTitle:")));

@end
