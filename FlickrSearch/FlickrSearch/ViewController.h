//
//  ViewController.h
//  FlickrSearch
//
//  Created by John Bogil on 12/30/14.
//  Copyright (c) 2014 John Bogil. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property(nonatomic, weak) IBOutlet UIToolbar *toolbar;
@property(nonatomic, weak) IBOutlet UIBarButtonItem *shareButton;
@property(nonatomic, weak) IBOutlet UITextField *textField;

- (IBAction)shareButtonTapped:(id)sender;



@end

