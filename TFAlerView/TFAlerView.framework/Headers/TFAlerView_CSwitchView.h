//
//  TFAlerView_CSwitchView.h
//  PhotoBrowseDemo
//
//  Created by snackstops on 2020/4/1.
//  Copyright © 2020 TFAlerView. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TFAlerView_CSwitchView : UIView

@property (strong, nonatomic) UIColor *tintColor UI_APPEARANCE_SELECTOR;
@property (strong, nonatomic) UIColor *labelColor UI_APPEARANCE_SELECTOR;
@property (strong, nonatomic) UIFont *labelFont UI_APPEARANCE_SELECTOR;
@property (strong, nonatomic) NSString *labelText UI_APPEARANCE_SELECTOR;
@property (nonatomic, getter=isSelected) BOOL selected;

@end

NS_ASSUME_NONNULL_END
