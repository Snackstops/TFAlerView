//
//  TFAlerView_CAlertView.h
//  PhotoBrowseDemo
//
//  Created by snackstops on 2020/4/1.
//  Copyright © 2020 TFAlerView. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TFAlerView_CButton.h"
#import "TFAlerView_CTextView.h"
#import "TFAlerView_CSwitchView.h"

NS_ASSUME_NONNULL_BEGIN

typedef NSAttributedString* _Nullable (^TFAlerView_CAttributedFormatBlock)(NSString *value);
typedef void (^TFAlerView_CDismissBlock)(void);
typedef void (^TFAlerView_CDismissAnimationCompletionBlock)(void);
typedef void (^TFAlerView_CShowAnimationCompletionBlock)(void);
typedef void (^TFAlerView_CForceHideBlock)(void);

@interface TFAlerView_CAlertView : UIViewController

/** Alert Styles
 *
 * Set TFAlerView_CAlertView Style
 */
typedef NS_ENUM(NSInteger, TFAlerView_CAlertViewStyle)
{
    TFAlerView_CAlertViewStyleSuccess,
    TFAlerView_CAlertViewStyleError,
    TFAlerView_CAlertViewStyleNotice,
    TFAlerView_CAlertViewStyleWarning,
    TFAlerView_CAlertViewStyleInfo,
    TFAlerView_CAlertViewStyleEdit,
    TFAlerView_CAlertViewStyleWaiting,
    TFAlerView_CAlertViewStyleQuestion,
    TFAlerView_CAlertViewStyleCustom
};

/** Alert hide animation styles
 *
 * Set TFAlerView_CAlertView hide animation type.
 */
typedef NS_ENUM(NSInteger, TFAlerView_CAlertViewHideAnimation)
{
    TFAlerView_CAlertViewHideAnimationFadeOut,
    TFAlerView_CAlertViewHideAnimationSlideOutToBottom,
    TFAlerView_CAlertViewHideAnimationSlideOutToTop,
    TFAlerView_CAlertViewHideAnimationSlideOutToLeft,
    TFAlerView_CAlertViewHideAnimationSlideOutToRight,
    TFAlerView_CAlertViewHideAnimationSlideOutToCenter,
    TFAlerView_CAlertViewHideAnimationSlideOutFromCenter,
    TFAlerView_CAlertViewHideAnimationSimplyDisappear
};

/** Alert show animation styles
 *
 * Set TFAlerView_CAlertView show animation type.
 */
typedef NS_ENUM(NSInteger, TFAlerView_CAlertViewShowAnimation)
{
    TFAlerView_CAlertViewShowAnimationFadeIn,
    TFAlerView_CAlertViewShowAnimationSlideInFromBottom,
    TFAlerView_CAlertViewShowAnimationSlideInFromTop,
    TFAlerView_CAlertViewShowAnimationSlideInFromLeft,
    TFAlerView_CAlertViewShowAnimationSlideInFromRight,
    TFAlerView_CAlertViewShowAnimationSlideInFromCenter,
    TFAlerView_CAlertViewShowAnimationSlideInToCenter,
    TFAlerView_CAlertViewShowAnimationSimplyAppear
};

/** Alert background styles
 *
 * Set TFAlerView_CAlertView background type.
 */
typedef NS_ENUM(NSInteger, TFAlerView_CAlertViewBackground)
{
    TFAlerView_CAlertViewBackgroundShadow,
    TFAlerView_CAlertViewBackgroundBlur,
    TFAlerView_CAlertViewBackgroundTransparent
};

/** Content view corner radius
 *
 * A float value that replaces the standard content viuew corner radius.
 */
@property CGFloat cornerRadius;

/** Tint top circle
 *
 * A boolean value that determines whether to tint the TFAlerView_CAlertView top circle.
 * (Default: YES)
 */
@property (assign, nonatomic) BOOL tintTopCircle;

/** Use larger icon
 *
 * A boolean value that determines whether to make the TFAlerView_CAlertView top circle icon larger.
 * (Default: NO)
 */
@property (assign, nonatomic) BOOL useLargerIcon;
    
/** Title Label
 *
 * The text displayed as title.
 */
@property (strong, nonatomic) UILabel *labelTitle;

/** Text view with the body message
 *
 * Holds the textview.
 */
@property (strong, nonatomic) UITextView *viewText;

/** Activity Indicator
 *
 * Holds the activityIndicator.
 */
@property (strong, nonatomic) UIActivityIndicatorView *activityIndicatorView;

/** Dismiss on tap outside
 *
 * A boolean value that determines whether to dismiss when tapping outside the TFAlerView_CAlertView.
 * (Default: NO)
 */
@property (assign, nonatomic) BOOL shouldDismissOnTapOutside;

/** Sound URL
 *
 * Holds the sound NSURL path.
 */
@property (strong, nonatomic) NSURL *soundURL;

/** Set text attributed format block
 *
 * Holds the attributed string.
 */
@property (copy, nonatomic) TFAlerView_CAttributedFormatBlock attributedFormatBlock;

/** Set Complete button format block.
 *
 * Holds the button format block.
 * Support keys : backgroundColor, borderWidth, borderColor, textColor
 */
@property (copy, nonatomic) CompleteButtonFormatBlock completeButtonFormatBlock;

/** Set button format block.
 *
 * Holds the button format block.
 * Support keys : backgroundColor, borderWidth, borderColor, textColor
 */
@property (copy, nonatomic) ButtonFormatBlock buttonFormatBlock;

/** Set force hide block.
 *
 * When set force hideview method invocation.
 */
@property (copy, nonatomic) TFAlerView_CForceHideBlock forceHideBlock;

/** Hide animation type
 *
 * Holds the hide animation type.
 * (Default: FadeOut)
 */
@property (nonatomic) TFAlerView_CAlertViewHideAnimation hideAnimationType;

/** Show animation type
 *
 * Holds the show animation type.
 * (Default: SlideInFromTop)
 */
@property (nonatomic) TFAlerView_CAlertViewShowAnimation showAnimationType;

/** Set TFAlerView_CAlertView background type.
 *
 * TFAlerView_CAlertView background type.
 * (Default: Shadow)
 */
@property (nonatomic) TFAlerView_CAlertViewBackground backgroundType;

/** Set custom color to TFAlerView_CAlertView.
 *
 * TFAlerView_CAlertView custom color.
 * (Buttons, top circle and borders)
 */
@property (strong, nonatomic) UIColor *customViewColor;

/** Set custom color to TFAlerView_CAlertView background.
 *
 * TFAlerView_CAlertView background custom color.
 */
@property (strong, nonatomic) UIColor *backgroundViewColor;

/** Set custom tint color for icon image.
 *
 * TFAlerView_CAlertView icon tint color
 */
@property (strong, nonatomic) UIColor *iconTintColor;

/** Set custom circle icon height.
 *
 * Circle icon height
 */
@property (nonatomic) CGFloat circleIconHeight;

/** Set TFAlerView_CAlertView extension bounds.
 *
 * Set new bounds (EXTENSION ONLY)
 */
@property (nonatomic) CGRect extensionBounds;

/** Set status bar hidden.
 *
 * Status bar hidden
 */
@property (nonatomic) BOOL statusBarHidden;

/** Set status bar style.
 *
 * Status bar style
 */
@property (nonatomic) UIStatusBarStyle statusBarStyle;

/** Set horizontal alignment for buttons
 *
 * Horizontal aligment instead of vertically if YES
 */
@property (nonatomic) BOOL horizontalButtons;

/** Initialize TFAlerView_CAlertView using a new window.
 *
 * Init with new window
 */
- (instancetype)initWithNewWindow;

/** Initialize TFAlerView_CAlertView using a new window.
 *
 * Init with new window with custom width
 */
- (instancetype)initWithNewWindowWidth:(CGFloat)windowWidth;

/** Warns that alerts is gone
 *
 * Warns that alerts is gone using block
 */
- (void)alertIsDismissed:(TFAlerView_CDismissBlock)dismissBlock;

/** Warns that alerts dismiss animation is completed
 *
 * Warns that alerts dismiss animation is completed
 */
- (void)alertDismissAnimationIsCompleted:(TFAlerView_CDismissAnimationCompletionBlock)dismissAnimationCompletionBlock;

/** Warns that alerts show animation is completed
 *
 * Warns that alerts show animation is completed
 */
- (void)alertShowAnimationIsCompleted:(TFAlerView_CShowAnimationCompletionBlock)showAnimationCompletionBlock;

/** Hide TFAlerView_CAlertView
 *
 * Hide TFAlerView_CAlertView using animation and removing from super view.
 */

- (void)hideView;

/** TFAlerView_CAlertView visibility
 *
 * Returns if the alert is visible or not.
 */
- (BOOL)isVisible;

/** Remove Top Circle
 *
 * Remove top circle from TFAlerView_CAlertView.
 */
- (void)removeTopCircle;

/** Add a custom UIView
 *
 * @param customView UIView object to be added above the first TFAlerView_CButton.
 */
- (UIView *)addCustomView:(UIView *)customView;

/** Add Text Field
 *
 * @param title The text displayed on the textfield.
 */
- (TFAlerView_CTextView *)addTextField:(NSString *)title;

/** Add a custom Text Field
 *
 * @param textField The custom textfield provided by the programmer.
 */
- (void)addCustomTextField:(UITextField *)textField;

/** Add a switch view
 *
 * @param label The label displayed for the switch.
 */
- (TFAlerView_CSwitchView *)addSwitchViewWithLabel:(NSString *)label;

/** Add Timer Display
 *
 * @param buttonIndex The index of the button to add the timer display to.
 * @param reverse Convert timer to countdown.
 */
- (void)addTimerToButtonIndex:(NSInteger)buttonIndex reverse:(BOOL)reverse;

/** Set Title font family and size
 *
 * @param titleFontFamily The family name used to displayed the title.
 * @param size Font size.
 */
- (void)setTitleFontFamily:(NSString *)titleFontFamily withSize:(CGFloat)size;

/** Set Text field font family and size
 *
 * @param bodyTextFontFamily The family name used to displayed the text field.
 * @param size Font size.
 */
- (void)setBodyTextFontFamily:(NSString *)bodyTextFontFamily withSize:(CGFloat)size;

/** Set Buttons font family and size
 *
 * @param buttonsFontFamily The family name used to displayed the buttons.
 * @param size Font size.
 */
- (void)setButtonsTextFontFamily:(NSString *)buttonsFontFamily withSize:(CGFloat)size;

/** Add a Button with a title and a block to handle when the button is pressed.
 *
 * @param title The text displayed on the button.
 * @param action A block of code to be executed when the button is pressed.
 */
- (TFAlerView_CButton *)addButton:(NSString *)title actionBlock:(TFAlerView_CActionBlock)action;

/** Add a Button with a title, a block to handle validation, and a block to handle when the button is pressed and validation succeeds.
 *
 * @param title The text displayed on the button.
 * @param validationBlock A block of code that will allow you to validate fields or do any other logic you may want to do to determine if the alert should be dismissed or not. Inside of this block, return a BOOL indicating whether or not the action block should be called and the alert dismissed.
 * @param action A block of code to be executed when the button is pressed and validation passes.
 */
- (TFAlerView_CButton *)addButton:(NSString *)title validationBlock:(TFAlerView_CValidationBlock)validationBlock actionBlock:(TFAlerView_CActionBlock)action;

/** Add a Button with a title, a target and a selector to handle when the button is pressed.
 *
 * @param title The text displayed on the button.
 * @param target Add target for particular event.
 * @param selector A method to be executed when the button is pressed.
 */
- (TFAlerView_CButton *)addButton:(NSString *)title target:(id)target selector:(SEL)selector;

/** Show Success TFAlerView_CAlertView
 *
 * @param vc The view controller the alert view will be displayed in.
 * @param title The text displayed on the button.
 * @param subTitle The subtitle text of the alert view.
 * @param closeButtonTitle The text for the close button.
 * @param duration The amount of time the alert will remain on screen until it is automatically dismissed. If automatic dismissal is not desired, set to 0.
 */
- (void)showSuccess:(UIViewController *)vc title:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;
- (void)showSuccess:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;

/** Show Error TFAlerView_CAlertView
 *
 * @param vc The view controller the alert view will be displayed in.
 * @param title The text displayed on the button.
 * @param subTitle The subtitle text of the alert view.
 * @param closeButtonTitle The text for the close button.
 * @param duration The amount of time the alert will remain on screen until it is automatically dismissed. If automatic dismissal is not desired, set to 0.
 */
- (void)showError:(UIViewController *)vc title:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;
- (void)showError:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;

/** Show Notice TFAlerView_CAlertView
 *
 * @param vc The view controller the alert view will be displayed in.
 * @param title The text displayed on the button.
 * @param subTitle The subtitle text of the alert view.
 * @param closeButtonTitle The text for the close button.
 * @param duration The amount of time the alert will remain on screen until it is automatically dismissed. If automatic dismissal is not desired, set to 0.
 */
- (void)showNotice:(UIViewController *)vc title:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;
- (void)showNotice:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;

/** Show Warning TFAlerView_CAlertView
 *
 * @param vc The view controller the alert view will be displayed in.
 * @param title The text displayed on the button.
 * @param subTitle The subtitle text of the alert view.
 * @param closeButtonTitle The text for the close button.
 * @param duration The amount of time the alert will remain on screen until it is automatically dismissed. If automatic dismissal is not desired, set to 0.
 */
- (void)showWarning:(UIViewController *)vc title:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;
- (void)showWarning:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;

/** Show Info TFAlerView_CAlertView
 *
 * @param vc The view controller the alert view will be displayed in.
 * @param title The text displayed on the button.
 * @param subTitle The subtitle text of the alert view.
 * @param closeButtonTitle The text for the close button.
 * @param duration The amount of time the alert will remain on screen until it is automatically dismissed. If automatic dismissal is not desired, set to 0.
 */
- (void)showInfo:(UIViewController *)vc title:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;
- (void)showInfo:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;

/** Show Edit TFAlerView_CAlertView
 *
 * @param vc The view controller the alert view will be displayed in.
 * @param title The text displayed on the button.
 * @param subTitle The subtitle text of the alert view.
 * @param closeButtonTitle The text for the close button.
 * @param duration The amount of time the alert will remain on screen until it is automatically dismissed. If automatic dismissal is not desired, set to 0.
 */
- (void)showEdit:(UIViewController *)vc title:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;
- (void)showEdit:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;

/** Show Title TFAlerView_CAlertView using a predefined type
 *
 * @param vc The view controller the alert view will be displayed in.
 * @param title The text displayed on the button.
 * @param subTitle The subtitle text of the alert view.
 * @param style One of predefined TFAlerView_CAlertView styles.
 * @param closeButtonTitle The text for the close button.
 * @param duration The amount of time the alert will remain on screen until it is automatically dismissed. If automatic dismissal is not desired, set to 0.
 */
- (void)showTitle:(UIViewController *)vc title:(NSString *)title subTitle:(NSString *)subTitle style:(TFAlerView_CAlertViewStyle)style closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;
- (void)showTitle:(NSString *)title subTitle:(NSString *)subTitle style:(TFAlerView_CAlertViewStyle)style closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;

/** Shows a custom TFAlerView_CAlertView without using a predefined type, allowing for a custom image and color to be specified.
 *
 * @param vc The view controller the alert view will be displayed in.
 * @param image A UIImage object to be used as the icon for the alert view.
 * @param color A UIColor object to be used to tint the background of the icon circle and the buttons.
 * @param title The title text of the alert view.
 * @param subTitle The subtitle text of the alert view.
 * @param closeButtonTitle The text for the close button.
 * @param duration The amount of time the alert will remain on screen until it is automatically dismissed. If automatic dismissal is not desired, set to 0.
 */
- (void)showCustom:(UIViewController *)vc image:(UIImage *)image color:(UIColor *)color title:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;
- (void)showCustom:(UIImage *)image color:(UIColor *)color title:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;

/** Show Waiting TFAlerView_CAlertView with UIActityIndicator.
 *
 * @param vc The view controller the alert view will be displayed in.
 * @param title The text displayed on the button.
 * @param subTitle The subtitle text of the alert view.
 * @param closeButtonTitle The text for the close button.
 * @param duration The amount of time the alert will remain on screen until it is automatically dismissed. If automatic dismissal is not desired, set to 0.
 */
- (void)showWaiting:(UIViewController *)vc title:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;
- (void)showWaiting:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;

/** Show Question TFAlerView_CAlertView
 *
 * @param vc The view controller the alert view will be displayed in.
 * @param title The text displayed on the button.
 * @param subTitle The subtitle text of the alert view.
 * @param closeButtonTitle The text for the close button.
 * @param duration The amount of time the alert will remain on screen until it is automatically dismissed. If automatic dismissal is not desired, set to 0.
 */
- (void)showQuestion:(UIViewController *)vc title:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;
- (void)showQuestion:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;

@end

@protocol TFAlerView_CItemsBuilder__Protocol__Fluent <NSObject>
- (void)setupFluent;
@end

@interface TFAlerView_CAlertViewBuilder__WithFluent: NSObject <TFAlerView_CItemsBuilder__Protocol__Fluent> @end

@interface TFAlerView_CAlertViewShowBuilder : TFAlerView_CAlertViewBuilder__WithFluent

@property(weak, nonatomic, readonly) UIViewController *parameterViewController;
@property(copy, nonatomic, readonly) UIImage *parameterImage;
@property(copy, nonatomic, readonly) UIColor *parameterColor;
@property(copy, nonatomic, readonly) NSString *parameterTitle;
@property(copy, nonatomic, readonly) NSString *parameterSubTitle;
@property(copy, nonatomic, readonly) NSString *parameterCompleteText;
@property(copy, nonatomic, readonly) NSString *parameterCloseButtonTitle;
@property(assign, nonatomic, readonly) TFAlerView_CAlertViewStyle parameterStyle;
@property(assign, nonatomic, readonly) NSTimeInterval parameterDuration;

#pragma mark - Setters
@property(copy, nonatomic, readonly) TFAlerView_CAlertViewShowBuilder *(^viewController)(UIViewController *viewController);
@property(copy, nonatomic, readonly) TFAlerView_CAlertViewShowBuilder *(^image)(UIImage *image);
@property(copy, nonatomic, readonly) TFAlerView_CAlertViewShowBuilder *(^color)(UIColor *color);
@property(copy, nonatomic, readonly) TFAlerView_CAlertViewShowBuilder *(^title)(NSString *title);
@property(copy, nonatomic, readonly) TFAlerView_CAlertViewShowBuilder *(^subTitle)(NSString *subTitle);
@property(copy, nonatomic, readonly) TFAlerView_CAlertViewShowBuilder *(^completeText)(NSString *completeText);
@property(copy, nonatomic, readonly) TFAlerView_CAlertViewShowBuilder *(^style)(TFAlerView_CAlertViewStyle style);
@property(copy, nonatomic, readonly) TFAlerView_CAlertViewShowBuilder *(^closeButtonTitle)(NSString *closeButtonTitle);
@property(copy, nonatomic, readonly) TFAlerView_CAlertViewShowBuilder *(^duration)(NSTimeInterval duration);

- (void)showAlertView:(TFAlerView_CAlertView *)alertView;
- (void)showAlertView:(TFAlerView_CAlertView *)alertView onViewController:(UIViewController *)controller;
@property(copy, nonatomic, readonly) void (^show)(TFAlerView_CAlertView *view, UIViewController *controller);
@end

@interface TFAlerView_CALertViewTextFieldBuilder : TFAlerView_CAlertViewBuilder__WithFluent

#pragma mark - Available later after adding
@property(weak, nonatomic, readonly) TFAlerView_CTextView *textField;

#pragma mark - Setters
@property(copy, nonatomic, readonly) TFAlerView_CALertViewTextFieldBuilder *(^title) (NSString *title);

@end

@interface TFAlerView_CALertViewButtonBuilder : TFAlerView_CAlertViewBuilder__WithFluent

#pragma mark - Available later after adding
@property(weak, nonatomic, readonly) TFAlerView_CButton *button;

#pragma mark - Setters
@property(copy, nonatomic, readonly) TFAlerView_CALertViewButtonBuilder *(^title) (NSString *title);
@property(copy, nonatomic, readonly) TFAlerView_CALertViewButtonBuilder *(^target) (id target);
@property(copy, nonatomic, readonly) TFAlerView_CALertViewButtonBuilder *(^selector) (SEL selector);
@property(copy, nonatomic, readonly) TFAlerView_CALertViewButtonBuilder *(^actionBlock) (void(^actionBlock)(void));
@property(copy, nonatomic, readonly) TFAlerView_CALertViewButtonBuilder *(^validationBlock) (BOOL(^validationBlock)(void));

@end

@interface TFAlerView_CAlertViewBuilder : TFAlerView_CAlertViewBuilder__WithFluent

#pragma mark - Parameters
@property (strong, nonatomic, readonly) TFAlerView_CAlertView *alertView;

#pragma mark - Init
- (instancetype)init;
- (instancetype)initWithNewWindow;
- (instancetype)initWithNewWindowWidth:(CGFloat)width;

#pragma mark - Properties
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^cornerRadius) (CGFloat cornerRadius);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^tintTopCircle) (BOOL tintTopCircle);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^useLargerIcon) (BOOL useLargerIcon);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^labelTitle) (UILabel *labelTitle);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^viewText) (UITextView *viewText);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^activityIndicatorView) (UIActivityIndicatorView *activityIndicatorView);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^shouldDismissOnTapOutside) (BOOL shouldDismissOnTapOutside);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^soundURL) (NSURL *soundURL);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^attributedFormatBlock) (TFAlerView_CAttributedFormatBlock attributedFormatBlock);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^completeButtonFormatBlock) (CompleteButtonFormatBlock completeButtonFormatBlock);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^buttonFormatBlock) (ButtonFormatBlock buttonFormatBlock);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^forceHideBlock) (TFAlerView_CForceHideBlock forceHideBlock);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^hideAnimationType) (TFAlerView_CAlertViewHideAnimation hideAnimationType);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^showAnimationType) (TFAlerView_CAlertViewShowAnimation showAnimationType);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^backgroundType) (TFAlerView_CAlertViewBackground backgroundType);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^customViewColor) (UIColor *customViewColor);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^backgroundViewColor) (UIColor *backgroundViewColor);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^iconTintColor) (UIColor *iconTintColor);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^circleIconHeight) (CGFloat circleIconHeight);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^extensionBounds) (CGRect extensionBounds);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^statusBarHidden) (BOOL statusBarHidden);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^statusBarStyle) (UIStatusBarStyle statusBarStyle);

#pragma mark - Custom Setters
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^alertIsDismissed) (TFAlerView_CDismissBlock dismissBlock);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^alertDismissAnimationIsCompleted) (TFAlerView_CDismissAnimationCompletionBlock dismissAnimationCompletionBlock);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^alertShowAnimationIsCompleted) (TFAlerView_CShowAnimationCompletionBlock showAnimationCompletionBlock);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^removeTopCircle)(void);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^addCustomView)(UIView *view);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^addTextField)(NSString *title);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^addCustomTextField)(UITextField *textField);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^addSwitchViewWithLabelTitle)(NSString *title);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^addTimerToButtonIndex)(NSInteger buttonIndex, BOOL reverse);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^setTitleFontFamily)(NSString *titleFontFamily, CGFloat size);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^setBodyTextFontFamily)(NSString *bodyTextFontFamily, CGFloat size);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^setButtonsTextFontFamily)(NSString *buttonsFontFamily, CGFloat size);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^addButtonWithActionBlock)(NSString *title, TFAlerView_CActionBlock action);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^addButtonWithValidationBlock)(NSString *title, TFAlerView_CValidationBlock validationBlock, TFAlerView_CActionBlock action);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^addButtonWithTarget)(NSString *title, id target, SEL selector);

#pragma mark - Builders
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^addButtonWithBuilder)(TFAlerView_CALertViewButtonBuilder *builder);
@property(copy, nonatomic) TFAlerView_CAlertViewBuilder *(^addTextFieldWithBuilder)(TFAlerView_CALertViewTextFieldBuilder *builder);

@end

NS_ASSUME_NONNULL_END
