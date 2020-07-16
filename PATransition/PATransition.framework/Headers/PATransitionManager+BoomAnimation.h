//
//  PATransitionManager+BoomAnimation.h
//  PATransition
//
//  Created by AlanWang on 16/9/22.
//  Copyright © 2016年 王小树. All rights reserved.
//

#import "PATransitionManager.h"

@interface PATransitionManager (BoomAnimation)

-(void)boomPresentTransitionNextAnimation:(id<UIViewControllerContextTransitioning>)transitionContext;
-(void)boomPresentTransitionBackAnimation:(id<UIViewControllerContextTransitioning>)transitionContext;

@end
