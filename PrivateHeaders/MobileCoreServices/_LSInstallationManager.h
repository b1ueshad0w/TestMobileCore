//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface _LSInstallationManager : NSObject
{
    NSXPCConnection *_connection;
}

+ (id)manager;
@property(readonly) NSXPCConnection *connection; // @synthesize connection=_connection;
- (_Bool)install:(id)arg1 withError:(id *)arg2;
- (_Bool)uninstall:(id)arg1 withError:(id *)arg2;
- (_Bool)restoreSystemApplicationWithBundleIdentifier:(id)arg1;
- (_Bool)removeSystemApplicationWithBundleIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;

@end
