//
//  PATransitionManager+SystermAnimation.h
//  PATransition
//
//  Created by AlanWang on 16/9/22.
//  Copyright © 2016年 王小树. All rights reserved.
//

#import "PATransitionManager.h"

@interface  PATransitionManager (SystermAnimation)

-(void)sysTransitionNextAnimationWithType:(PATransitionAnimationType) type context:(id<UIViewControllerContextTransitioning>)transitionContext;
-(void)sysTransitionBackAnimationWithType:(PATransitionAnimationType) type context:(id<UIViewControllerContextTransitioning>)transitionContext;

@end
