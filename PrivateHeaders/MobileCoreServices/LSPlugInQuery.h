//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MobileCoreServices/_LSQuery.h>

@interface LSPlugInQuery : _LSQuery
{
}

+ (_Bool)supportsSecureCoding;
+ (id)pluginQueryWithURL:(id)arg1;
+ (id)pluginQueryWithUUID:(id)arg1;
+ (id)pluginQueryQithIdentifier:(id)arg1;
+ (id)pluginQueryWithQueryDictionary:(id)arg1 applyFilter:(CDUnknownBlockType)arg2;
+ (id)pluginQuery;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)_shouldCacheResolvedResults;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)_init;

@end

