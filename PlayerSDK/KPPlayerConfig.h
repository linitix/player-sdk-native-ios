//
//  KPFlashvarObject.h
//  KALTURAPlayerSDK
//
//  Created by Nissim Pardo on 12/2/14.
//  Copyright (c) 2014 Kaltura. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/// KPPlayerConfig keys
static NSString *KPPlayerConfigNativeCallOutKey = @"nativeCallout";
static NSString *KPPlayerConfigChromecastKey = @"chromecast.plugin";
static NSString *KPPlayerConfigNativeAdIdKey = @"nativeAdId";




@interface KPPlayerConfig : NSObject

- (instancetype)initWithDomain:(NSString *)domain
                      uiConfID:(NSString *)uiConfId
                      partnerId:(NSString *)partnerId;

@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSString *partnerId;

@property (nonatomic, readonly) NSString *uiConfId;
@property (nonatomic, copy) NSString *entryId;
@property (nonatomic, copy) NSString *advertiserID;
@property (nonatomic) BOOL enableHover;


/// By setting the size of the cache the SDK will cache the data in the limit of the cacheSize value.
@property (nonatomic) float cacheSize;

/// Enables the SDK user to define interface orientation of the player
@property (nonatomic) UIInterfaceOrientationMask supportedInterfaceOrientations;

/** Adds flags for the video request
 *
 *  @param NSString The name of the flag
 *  @param NSString The value for the flag
 */
- (void)addConfigKey:(NSString *)key withValue:(NSString *)value;;

- (NSURL *)videoURL;

- (NSURL *)appendConfiguration:(NSURL *)videoURL;
@end
