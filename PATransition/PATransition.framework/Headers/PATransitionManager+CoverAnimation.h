//
//  PATransitionManager+CoverAnimation.h
//  PATransition
//
//  Created by AlanWang on 16/9/22.
//  Copyright © 2016年 王小树. All rights reserved.
//

#import "PATransitionManager.h"

@interface PATransitionManager (CoverAnimation)


-(void)coverTransitionNextAnimationWithContext:(id<UIViewControllerContextTransitioning>)transitionContext;
-(void)coverTransitionBackAnimationWithContext:(id<UIViewControllerContextTransitioning>)transitionContext;


@end
