//
//  LabelDemoViewController.h
//  CoconutKit-demo
//
//  Created by Joris Heuberger on 13.04.12.
//  Copyright (c) 2012 Hortis. All rights reserved.
//

@interface LabelDemoViewController : HLSViewController <UIPickerViewDataSource, UIPickerViewDelegate>

@property (nonatomic, retain) IBOutlet HLSLabel *label;
@property (nonatomic, retain) IBOutlet UILabel *standardLabel;
@property (nonatomic, retain) IBOutlet UIPickerView *textPickerView;
@property (nonatomic, retain) IBOutlet UIPickerView *fontPickerView;
@property (nonatomic, retain) IBOutlet UISegmentedControl *baselineAdjustmentSegmentedControl;
@property (nonatomic, retain) IBOutlet UISlider *numberOfLinesSlider;
@property (nonatomic, retain) IBOutlet UILabel *numberOfLinesLabel;
@property (nonatomic, retain) IBOutlet UISlider *fontSizeSlider;
@property (nonatomic, retain) IBOutlet UILabel *fontSizeLabel;
@property (nonatomic, retain) IBOutlet UISwitch *adjustsFontSizeToFitWidthSwitch;
@property (nonatomic, retain) IBOutlet UISlider *minFontSizeSlider;
@property (nonatomic, retain) IBOutlet UILabel *minFontSizeLabel;
@property (nonatomic, retain) IBOutlet UISegmentedControl *verticalAlignmentSegmentedControl;
@property (nonatomic, retain) IBOutlet UIPickerView *lineBreakModePickerView;

- (IBAction)updateLabels:(id)sender;

@end
