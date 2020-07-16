//
//  PATransitionManager+FragmentAnimation.h
//  PATransition
//
//  Created by AlanWang on 16/9/20.
//  Copyright © 2016年 王小树. All rights reserved.
//

#import "PATransitionManager.h"

@interface PATransitionManager (FragmentAnimation)

-(void)fragmentShowNextType:(PATransitionAnimationType)type andContext:(id<UIViewControllerContextTransitioning>)transitionContext;
-(void)fragmentShowBackType:(PATransitionAnimationType)type andContext:(id<UIViewControllerContextTransitioning>)transitionContext;
-(void)fragmentHideNextType:(PATransitionAnimationType)type andContext:(id<UIViewControllerContextTransitioning>)transitionContext;
-(void)fragmentHideBackType:(PATransitionAnimationType)type andContext:(id<UIViewControllerContextTransitioning>)transitionContext;

@end
