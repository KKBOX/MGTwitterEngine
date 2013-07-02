//
//  MGTwitterEngineGlobalHeader.h
//  MGTwitterEngine
//
//  Created by Matt Gemmell on 09/08/2008.
//  Copyright 2008 Instinctive Code.
//

/*
 This file conditionally includes the correct headers for either Mac OS X or iPhone deployment.
*/

#if TARGET_OS_IPHONE
	#import <Foundation/Foundation.h>
	#import <UIKit/UIKit.h>
#else
	#import <Cocoa/Cocoa.h>
#endif

#ifndef __MGTWITTERENGINEID__
#define __MGTWITTERENGINEID__
typedef unsigned long long MGTwitterEngineID;
typedef long long MGTwitterEngineCursorID;
#endif

#ifndef __MGTWITTERENGINELOCATIONDEGREES__
#define __MGTWITTERENGINELOCATIONDEGREES__
typedef double MGTwitterEngineLocationDegrees;
#endif
