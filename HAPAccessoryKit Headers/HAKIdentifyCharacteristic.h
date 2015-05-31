/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "HAKCharacteristic.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface HAKIdentifyCharacteristic : HAKCharacteristic
{
    double _routineDuration;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_source> *_routineDurationTimer;
}

@property(retain, nonatomic) NSObject<OS_dispatch_source> *routineDurationTimer; // @synthesize routineDurationTimer=_routineDurationTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) double routineDuration; // @synthesize routineDuration=_routineDuration;

- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)handleWriteRequest:(id)arg1;
- (id)initWithType:(id)arg1 properties:(unsigned long long)arg2 format:(unsigned long long)arg3;

@end

