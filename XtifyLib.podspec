Pod::Spec.new do |s|
  s.name         = 'XtifyLib'
  s.version      = '2.57'
  s.summary      = 'Xtify library for iOS application with CocoaPods integration.'
  s.platform     = :ios, '6.0'
  s.author 		 = {
    'Xtify' => 'support@xtify.com'
  }
  s.license =  { :type => 'Apache License, Version 2.0', :file => 'license/LA_en.rtf' }
  s.homepage = 'http://developer.xtify.com/display/sdk/Download+the+IBM+Push+Notification+SDKs'
  s.source = { :git => 'https://github.com/rhodgkins/XtifyLib.git', :tag => s.version.to_s }

  s.source_files = 'XtifyLib/**/*.{h,m}',
  s.vendored_frameworks = 'XtifyLib/XtifyPush.framework'
  s.preserve_paths = 'XtifyLib/XtifyPush.framework/*'
  s.frameworks = 'Foundation', 'UIKit', 'CoreGraphics', 'SystemConfiguration', 'MapKit', 'CoreData', 'MessageUI', 'CoreLocation', 'CFNetwork', 'MobileCoreServices', 'CoreTelephony'
  s.library = 'xml2.2', 'z'
end