//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MobileCoreServices/_LSDService.h>

__attribute__((visibility("hidden")))
@interface _LSDDeviceIdentifierService : _LSDService
{
}

+ (id)dispatchQueue;
+ (id)XPCInterface;
+ (Class)clientClass;
+ (unsigned short)connectionType;
+ (void)generateIdentifiersForInstallationWithContext:(struct LSContext *)arg1 bundleUnit:(unsigned int)arg2 bundleData:(const struct LSBundleData *)arg3;
+ (void)clearIdentifiersForUninstallationWithContext:(struct LSContext *)arg1 bundleUnit:(unsigned int)arg2 bundleData:(const struct LSBundleData *)arg3;
+ (id)vendorNameForDeviceIdentifiersWithContext:(struct LSContext *)arg1 bundleUnit:(unsigned int)arg2 bundleData:(const struct LSBundleData *)arg3;

@end

