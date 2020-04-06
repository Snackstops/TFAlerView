# TFAlerView
A very powerful iOS message notifications and AlertView extensions. It can be easily realized from the top of the screen, the bottom of the screen and the middle of the screen pops up a notification. You can easily customize the pop-up View.

# English instructions

## Requirements

- Requires iOS 9 or later
- Requires Automatic Reference Counting (ARC)

## Features

- Easy to use
- Can be easily customized

## Installation

### CocoaPods

To install FFToast using CocoaPods, please integrate it in your existing Podfile, or create a new Podfile:

```ruby
target 'MyApp' do
  pod 'TFAlerView'
end
```

#import "ViewController.h"
#import <TFAlerView/TFAlerView.h>
//#import "TFAlerView_AlertView.h"
//#import "TFAlerView_CAlertView.h"
//#import "TFAlerView_AlerView.h"
@interface ViewController ()

@property (nonatomic, strong) TFAlerView_AlertView   *tipV;
@end
//
NSString *kSuccessTitle = @"Congratulations";
NSString *kErrorTitle = @"Connection error";
NSString *kNoticeTitle = @"Notice";
NSString *kWarningTitle = @"Warning";
NSString *kInfoTitle = @"Info";
NSString *kSubtitle = @"You've just displayed this awesome Pop Up View";
NSString *kButtonTitle = @"Done";
NSString *kAttributeTitle = @"Attributed string operation successfully completed.";

@implementation ViewController

- (void)viewDidLoad {
  [super viewDidLoad];

}



-(void)touchesMoved:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{

    TFAlerView_CAlertView *alert = [[TFAlerView_CAlertView alloc] initWithNewWindow];

    TFAlerView_CButton *button = [alert addButton:@"First Button" target:self selector:@selector(firstButton)];

    button.buttonFormatBlock = ^NSDictionary* (void)
    {
        NSMutableDictionary *buttonConfig = [[NSMutableDictionary alloc] init];

        buttonConfig[@"backgroundColor"] = [UIColor whiteColor];
        buttonConfig[@"textColor"] = [UIColor blackColor];
        buttonConfig[@"borderWidth"] = @2.0f;
        buttonConfig[@"borderColor"] = [UIColor greenColor];

        return buttonConfig;
    };

    [alert addButton:@"Second Button" actionBlock:^(void) {
        NSLog(@"Second button tapped");
    }];

    alert.soundURL = [NSURL fileURLWithPath:[NSString stringWithFormat:@"%@/right_answer.mp3", [NSBundle mainBundle].resourcePath]];

    [alert showSuccess:kSuccessTitle subTitle:kSubtitle closeButtonTitle:kButtonTitle duration:0.0f];

}
- (void)firstButton
{
    NSLog(@"First button tapped");
}





