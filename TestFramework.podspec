Pod::Spec.new do |spec|
spec.name         = 'TestFramework'
spec.version      = '1.0'
spec.license      = { :type => 'MIT' }
spec.homepage     = 'https://github.com/SmileCyan/TestFramework.git'
spec.authors      = { 'CyanSmile' => 'smile_cyan@163.com' }
spec.summary      = 'ARC and GCD Compatible Reachability Class for iOS and OS X.'
spec.source       = { :git => 'https://github.com/SmileCyan/TestFramework.git', :tag => '1.0' }
spec.source_files = 'TestFramework'
spec.framework    = 'Foundation'
end
