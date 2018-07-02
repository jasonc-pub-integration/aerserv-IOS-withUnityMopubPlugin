# aerserv-IOS-withUnityMopubPlugin
This is an example project demonstrating how to add the AerServ SDK to an existing Unity Project utilizing the MoPub Unity Plugin

Note that this project DOES NOT RUN OUT OF THE BOX as Unity builds a very large file (libiPhone-lib.a) that is usually 1 GB.
You will need to include libiPhone-lib.a from your own project in order to run the example project.
This project is intended to be a reference on how to add the AerServ MoPub plugin to your own project.

Items of note include:
- Info.plist
- AerServCustomEvents

## Resources:

UNITY PLATFORM: https://unity3d.com/unity/whats-new/unity-2018.1.0
MOPUB UNITY PLATFORM PLUGIN: https://github.com/mopub/mopub-unity-sdk/
AERSERV PLUGIN FOR MOPUB: here(contains both the SDK library and adapter files)



## Requirements / Assumptions:

xCode 9+ (example here uses xCode 9.4)
Unity v2018.1+ (example here uses unity v2018.1.1f1)
AerServ MoPub plugin - latest SDK is v3.1.2.1
MoPub plugin (v5.10) 


## Integration instructions:

Open your project, and import the latest MoPub SDK. Follow MoPub’s instructions on how to import their platform plugin. For your convenience, I’ve listed the major items below.
Download the latest MoPub Unity plugin.
Import the MoPubUnityPlugin.unitypackage file.
Keep all files selected in the ‘Importing Package’ window and click Import.
Your code should already instantiate the MoPub plugin; verify that it does. If you’re using the older version of Unity, switch to the newer one.
Compile and ensure the project runs (without AerServ) on an iPhone. If this works, we can assume the MoPub integration by itself works fine. Once the project has been built with the MoPub SDK, we’re ready to move onto the next step. If you need more instructions on how to do this, consult the supplementary documentation below. At high level - you would go to File > Build Settings, select ‘IOS Platform’, ensure the correct scenes are selected, and then click ‘Build’.

At this step, you should have a working xCode project that is able to compile and run. Note that at this point, AerServ has not yet been included.
Add the AerServSDK.framework into the project. It is always found in our latest SDK package here: aerserv-ios-sdk-3.X.X.X/lib/AerServSDK.framework.
Recommended! Add it through XCode - right click on the ‘Frameworks’ folder, click ‘Add Files to ___’, and ensure ‘Copy items if needed’ is selected, and click ‘add’.

Under the General tab within your project's target, you'll need to add the following settings:
Add the following dependencies to Linked Frameworks and Libraries:
WebKit.framework
libxml2.2.tbd
Select all Device Orientation inside 'Deployment Info'.

Add the -ObjC flag to the target's Build Setting -> Linking -> Other Flag

Update info.plist with the below key/values. You can reference the existing info.plist in the example project as needed.
<key>NSLocationWhenInUseUsageDescription</key><string>Location is used to help target content to your general area</string>
<key>NSPhotoLibraryUsageDescription</key><string>Some ad content may require access to the photo library.</string>
<key>NSCameraUsageDescription</key><string>Some ad content may access camera to take picture.</string>
<key>NSAppTransportSecurity</key> <dict><key>NSAllowsArbitraryLoads</key><true/></dict>

Add the MoPub adapter files. These are found in aerserv-ios-sdk-3.X.X.X/network-support/MoPub/AerServCustomEvents
Copy all of these files into the same directory. These are all adapter files that will translate MoPub calls to AerServ calls.
Recommended! Add it through XCode - right click on the ‘Classes’ folder, click ‘Add Files to ___’, and ensure ‘Copy items if needed’ is selected, and click ‘add’. Ensure you are selecting ONLY the AerServCustomEvents folder and the contents of the folder.
**** Note that with this method, the AerServCustomEvent classes and headers cannot find the MoPub files by themselves! Modify each AerServCustomEvent file to use “#import <MoPubSDKFramework/MoPub.h>” instead of “#import "MoPub.h"

The entry point for the application is main.mm. Add the following items to that file complete the integration:
‘#import <AerServSDK/AerServSDK.h>’
[AerServSDK initializeWithAppID:@"1000473"]; // replace 1000473 with your AerServ app ID

Clean, and build the project. It should be a whopping success!


## Supplementary Documentation to Consult:

https://developers.mopub.com/docs/unity/getting-started/
https://unity3d.com/learn/tutorials/topics/mobile-touch/building-your-unity-game-ios-device-testing
https://docs.unity3d.com/Manual/StructureOfXcodeProject.html
https://support.aerserv.com/hc/en-us/articles/203458530

## FAQ / Common Issues known:

Why is the libiPhone-lib.a so large? Can I remove it?

The content of this file and the folder is refreshed with each build. Do not modify it. You can add this item to your .gitignore as this is usually very large (sometime 1 GB+)


I’m seeing a lexical issue with #import "MoPub.h"!

Modify each AerServCustomEvent file to use “#import <MoPubSDKFramework/MoPub.h>” instead of “#import "MoPub.h". You can do this for any lexical issue. If your project is having issues finding it still, ensure that the Plugins/IOS directory in XCode is not red. To fix that, left click the Plugins folder, and look on the right hand bar for “Identify and type” (the page symbol). In the ‘location’ section, click the folder and show XCode where the directory is.
