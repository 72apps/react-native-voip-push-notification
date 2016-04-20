//
//  RNVoipPushNotificationManager.h
//  RNVoipPushNotification
//
//  Created by Ian Yu-Hsun Lin on 4/18/16.
//  Copyright © 2016 ianyuhsunlin. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "RCTBridgeModule.h"

@interface RNVoipPushNotificationManager : NSObject <RCTBridgeModule>

- (void)voipRegistration;
- (void)registerUserNotification;
- (NSDictionary *)checkPermissions;
+ (void)didUpdatePushCredentials:(PKPushCredentials *)credentials forType:(NSString *)type;
+ (void)didReceiveIncomingPushWithPayload:(PKPushPayload *)payload forType:(NSString *)type;

@end
