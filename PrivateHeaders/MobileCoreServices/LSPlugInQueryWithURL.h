//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MobileCoreServices/LSPlugInQuery.h>

@class NSURL;

@interface LSPlugInQueryWithURL : LSPlugInQuery
{
    NSURL *_bundleURL;
}

+ (_Bool)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)_shouldCacheResolvedResults;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_bundleURL;
- (void)dealloc;
- (id)_initWithURL:(id)arg1;

@end

