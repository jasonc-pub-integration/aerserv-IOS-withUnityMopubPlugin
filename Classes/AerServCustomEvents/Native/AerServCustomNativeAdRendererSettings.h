//
//  AerServCustomNativeAdRendererSettings.h
//  ASMoPubSDKSampleApp
//
//  Created by Albert Zhu on 7/20/17.
//  Copyright © 2017 AerServ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MoPubSDKFramework/MoPub.h>



@interface AerServCustomNativeAdRendererSettings : NSObject <MPNativeAdRendererSettings>

@property (nonatomic, assign) Class renderingViewClass;
@property (nonatomic, readwrite, copy) MPNativeViewSizeHandler viewSizeHandler;

@end
