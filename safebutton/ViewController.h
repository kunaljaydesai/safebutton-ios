//
//  ViewController.h
//  safebutton
//
//  Created by Kunal Desai on 10/21/14.
//  Copyright (c) 2014 safebutton. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *username;
@property (strong, nonatomic) IBOutlet UITextField *password;
- (IBAction)validate:(id)sender;

@end

