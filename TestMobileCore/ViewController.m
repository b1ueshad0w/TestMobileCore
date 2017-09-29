//
//  ViewController.m
//  TestMobileCore
//
//  Created by gogleyin on 06/07/2017.
//  Copyright © 2017 blueshadow. All rights reserved.
//

#import "ViewController.h"
#import "LSApplicationWorkspace.h"
#import "LSApplicationProxy.h"
#import "_LSInstallationManager.h"
#import "LSApplicationWorkspace.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

}

- (void)test
{
    // Do any additional setup after loading the view, typically from a nib.
    LSApplicationWorkspace *workspace = [LSApplicationWorkspace defaultWorkspace];
    //    NSArray<LSApplicationProxy *> *apps = [workspace allApplications];
    LSApplicationProxy *selfApp = [LSApplicationProxy applicationProxyForIdentifier:@"com.blueshadow.TestMobileCore"];
    //    for (LSApplicationProxy *app in apps) {
    //        NSLog(@"%@", app);
    //    }
    [workspace openApplicationWithBundleID:@"com.apple.mobilesafari"];
    NSDictionary *data = [selfApp valueForKeyPath:@"_infoDictionary.propertyList"];
    
    NSString *tempDir = NSTemporaryDirectory();
    NSString *filePath = [tempDir stringByAppendingPathComponent:@"QQ.app"];
    
    if ([[NSFileManager defaultManager] fileExistsAtPath:filePath]) {
        NSLog(@"File do exist.");
        NSError *error;
        [[LSApplicationWorkspace defaultWorkspace] installApplication:filePath withOptions:nil error:&error];
        if (error) {
            NSLog(@"%@", error);
        }
    }
    
    //    [[_LSInstallationManager manager] install:nil withError:nil];
    
    [[LSApplicationWorkspace defaultWorkspace] uninstallApplication:@"com.blueshadow.TestScroll" withOptions:nil];
    
    NSTemporaryDirectory();
}

- (IBAction)openSafari:(id)sender {
    [[LSApplicationWorkspace defaultWorkspace] openApplicationWithBundleID:@"com.apple.mobilesafari"];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
    
}


@end
