//
//  RNVoipPushNotificationManager.h
//  RNVoipPushNotification
//
//  Created by Ian Yu-Hsun Lin on 4/18/16.
//  Copyright © 2016 ianyuhsunlin. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>

@interface RNVoipPushNotificationManager : RCTEventEmitter <RCTBridgeModule>

- (void)voipRegistration;
- (void)registerUserNotification:(NSDictionary *)permissions;
- (NSDictionary *)checkPermissions;
+ (void)didUpdatePushCredentials:(PKPushCredentials *)credentials forType:(NSString *)type;
+ (void)didReceiveIncomingPushWithPayload:(PKPushPayload *)payload forType:(NSString *)type;
+ (NSString *)getCurrentAppBackgroundState;

@end
