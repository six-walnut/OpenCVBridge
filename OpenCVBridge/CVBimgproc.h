//
//  CVBimgproc.h
//  OpenCVBridge
//
//  Created by Cirno MainasuK on 2020-5-26.
//  Copyright © 2020 MainasuK. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Cocoa/Cocoa.h>
#import "CVBMat.h"

#import "CVBColorConversionCodes.h"
#import "CVBBorderTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface CVBimgproc : NSObject
+ (void)cvtColor:(CVBMat *)src to:(CVBMat *)dst code:(ColorConversionCodes)code dstCn:(int)dstCn;

+ (void)circle:(CVBMat *)img center:(CGPoint)center radius:(int)radius color:(NSColor *)color thickness:(int)thickness lineType:(int)lineType shift:(int)shift;

+ (void)cornerHarris:(CVBMat *)src to:(CVBMat *)dst blockSize:(int)blockSize ksize:(int)ksize k:(double)k borderType:(BorderTypes)borderType;
+ (NSArray<NSValue *> *)goodFeaturesToTrack:(CVBMat *)img maxCorners:(int)maxCorners qualityLevel:(double)qualityLevel minDistance:(double)minDistance;
@end

NS_ASSUME_NONNULL_END
