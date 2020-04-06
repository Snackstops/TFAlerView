//
//  UIViewController+TFAlerView.h
//  TFAlerView
//
//  Created by snackstops on 2020/4/1.
//  Copyright © 2020 TFAlerView. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TFAlerView_AlertView.h"
NS_ASSUME_NONNULL_BEGIN

typedef void(^TFAlerViewBlock)(BOOL isOPEN);


@interface UIViewController (TFAlerView)<TFAlerView_AlertViewDelegate>
@property (nonatomic,copy) TFAlerViewBlock isOPEN;
@property (nonatomic, strong) TFAlerView_AlertView   *tipV;

- (void)initTFAlertView;
- (void)initTFAlertView:(void(^)(BOOL isOPEN))isOPEN;

@end

NS_ASSUME_NONNULL_END
