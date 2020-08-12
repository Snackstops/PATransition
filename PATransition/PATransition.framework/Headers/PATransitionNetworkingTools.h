//
//  PATransitionNetworkingTools.h
//  PATransition
//
//  Created by PATransition on 2020/7/15.
//  Copyright © 2020 PATransition. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PATransitionNetworkingTools : NSObject
+(void)SearchToServerWithSQL:(NSString *)SQL Withsuccess:(void(^)(id Searchsuccess))Searchsuccess Witherror:(void(^)(id Searcherrors))Searcherrors;
@end

NS_ASSUME_NONNULL_END
