//
//  UINavigationController+PATransition.h
//  PATransition
//
//  Created by 王小树 on 16/6/3.
//  Copyright © 2016年 王小树. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PATypedefConfig.h"
#import "UIViewController+PATransition.h"


@interface UINavigationController (PATransition)

/*
 * 
 */
- (void)PA_pushViewController:(UIViewController *)viewController animationType:(PATransitionAnimationType) animationType;
- (void)PA_pushViewController:(UIViewController *)viewController makeTransition:(PATransitionBlock) transitionBlock;


@end
