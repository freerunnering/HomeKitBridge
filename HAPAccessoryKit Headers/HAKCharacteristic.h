/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/Foundation.h>
#import "HAKValueConstraints.h"

@class HAKService, HAKUUID, HAKValueConstraints, NSArray, NSHashTable, NSNumber,  NSString;

typedef NS_ENUM(NSUInteger, HAKCharacteristicFormat) {
	HAKCharacteristicFormatNone,
	HAKCharacteristicFormatBool,
	HAKCharacteristicFormatInt,
	HAKCharacteristicFormatUInt8,
	HAKCharacteristicFormatUInt16,
	HAKCharacteristicFormatUInt32,
	HAKCharacteristicFormatUInt64,
	HAKCharacteristicFormatFloat,
	HAKCharacteristicFormatString,
	HAKCharacteristicFormatDate,
	HAKCharacteristicFormatTLV8,
	HAKCharacteristicFormatData,
	HAKCharacteristicFormatArray,
	HAKCharacteristicFormatDictionary
};

typedef NS_ENUM(NSUInteger, HAKCharacteristicUnit) {
	HAKCharacteristicUnitNone,
	HAKCharacteristicUnitCelcius,
	HAKCharacteristicUnitPercentage,
	HAKCharacteristicUnitArcDegrees
};

typedef NS_OPTIONS(NSUInteger, HAKCharacteristicPermission) {
	HAKCharacteristicPermissionReadable = 1 << 0,
	HAKCharacteristicPermissionWritable = 1 << 1,
	HAKCharacteristicPermissionUpdatable = 1 << 2,
};



@interface HAKCharacteristic : NSObject <NSCoding, NSCopying>
{
    id _value;
//    id <HAKCharacteristicDelegate> _delegate;
    HAKService *_service;
    HAKUUID *_type;
    NSNumber *_instanceID;
    NSString *_manufacturerDescription;
    unsigned long long _properties;
    unsigned long long _permissions;
    unsigned long long _format;
    unsigned long long _unit;
    HAKValueConstraints *_constraints;
    dispatch_queue_t _workQueue;
    NSHashTable *_subscribedConnectionsTable;
}

+ (id)stringForUnit:(unsigned long long)arg1;
+ (id)stringForFormat:(unsigned long long)arg1;
@property(retain, nonatomic) NSHashTable *subscribedConnectionsTable; // @synthesize subscribedConnectionsTable=_subscribedConnectionsTable;
@property(retain, nonatomic) dispatch_queue_t workQueue; // @synthesize workQueue=_workQueue;
@property(copy, nonatomic) HAKValueConstraints *constraints; // @synthesize constraints=_constraints;
@property(nonatomic) HAKCharacteristicUnit unit; // @synthesize unit=_unit;
@property(readonly, nonatomic) HAKCharacteristicFormat format; // @synthesize format=_format;
@property(nonatomic) HAKCharacteristicPermission permissions; // @synthesize permissions=_permissions;
@property(readonly, nonatomic) unsigned long long properties; // @synthesize properties=_properties;
@property(copy, nonatomic) NSString *manufacturerDescription; // @synthesize manufacturerDescription=_manufacturerDescription;
@property(copy, nonatomic) NSNumber *instanceID; // @synthesize instanceID=_instanceID;
@property(retain, nonatomic) HAKUUID *type; // @synthesize type=_type;
@property(nonatomic) __weak HAKService *service; // @synthesize service=_service;
//@property(nonatomic) __weak id <HAKCharacteristicDelegate> delegate; // @synthesize delegate=_delegate;

@property(copy, nonatomic) id value; // @synthesize value=_value;
- (BOOL)_handleValueValidation:(id)arg1;
- (BOOL)validateValue:(id)arg1;

- (void)_handleNotifyingSubscribedConnectionsValueUpdate:(id)arg1 exceptConnection:(id)arg2;
- (void)_handleValueWrite:(id)arg1;
- (id)handleWriteRequest:(id)arg1;
- (id)handleReadRequest:(id)arg1;

- (BOOL)unsubscribeConnection:(id)arg1;
- (BOOL)subscribeConnection:(id)arg1;
- (id)_subscribedConnections;
@property(readonly, nonatomic) NSArray *subscribedConnections;
@property(readonly, nonatomic, getter=isNotifying) BOOL notifying;

- (id)initWithType:(id)arg1 properties:(unsigned long long)arg2 format:(unsigned long long)arg3;
- (id)initWithType:(id)arg1;

- (id)responseJSONObjectWithReadRequest:(id)arg1 status:(long long *)arg2;
- (id)responseJSONObjectWithMetadata:(BOOL)arg1 properties:(BOOL)arg2 type:(BOOL)arg3 events:(BOOL)arg4 cachedValue:(BOOL)arg5;
- (id)propertiesJSONObject;
- (id)JSONObject;

- (id)transformJSONValue:(id)arg1;
- (id)JSONTransformValue:(id)arg1;
- (id)JSONValue;

- (id)cbDecodeValue:(id)arg1;
- (id)cbEncodeValue:(id)arg1;
- (id)cbMutableCharacteristic;
- (id)cbUserDescriptor;

@end

