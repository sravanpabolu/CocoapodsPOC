//
//  ViewController.m
//  CocoaPodsDemo
//
//  Created by Sravan on 25/12/2014.
//  Copyright (c) 2014 Company. All rights reserved.
//

#import "ViewController.h"
#import "PSPDFAlertView.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    PSPDFAlertView *alertView = [[PSPDFAlertView alloc] initWithTitle:@"Hello"
                                                              message:@"This is simple  Cocoapods Example"
                                                             delegate:self
                                                    cancelButtonTitle:@"OK"
                                                    otherButtonTitles:nil, nil] ;
    [alertView show] ;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    if ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone) {
        return (interfaceOrientation != UIInterfaceOrientationPortraitUpsideDown);
    } else {
        return YES;
    }
}

@end
