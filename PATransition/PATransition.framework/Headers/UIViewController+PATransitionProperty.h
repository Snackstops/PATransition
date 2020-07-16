//
//  UIViewController+PATransitionProperty.h
//  PATransition
//
//  Created by AlanWang on 16/9/21.
//  Copyright © 2016年 王小树. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PATransitionProperty;


@interface UIViewController (PATransitionProperty)


typedef void(^PATransitionBlock)(PATransitionProperty *transition);

@property (nonatomic, copy  ) PATransitionBlock            PA_callBackTransition;
@property (nonatomic, assign) BOOL                          PA_delegateFlag;
@property (nonatomic, assign) BOOL                          PA_addTransitionFlag;
@property (nonatomic, assign) BOOL                          PA_backGestureEnable;

@property (nonatomic, weak  ) id                            PA_transitioningDelegate;
@property (nonatomic, weak  ) id                            PA_tempNavDelegate;


@end
