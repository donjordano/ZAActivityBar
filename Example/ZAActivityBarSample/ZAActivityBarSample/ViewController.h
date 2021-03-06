//
//  ViewController.h
//  ZAActivityBarSample
//
//  Created by Zac Altman on 10/12/12.
//  Copyright (c) 2012 Zac Altman. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITextFieldDelegate> {
    __weak IBOutlet UITextField *_textbox;
}

// Action Methods
- (IBAction) show:(id)sender;
- (IBAction) showSuccess:(id)sender;
- (IBAction) showError:(id)sender;
- (IBAction) dismiss:(id)sender;

@end
