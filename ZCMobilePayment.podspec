#
# Be sure to run `pod lib lint ZCMobilePayment.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = "ZCMobilePayment"
  s.version          = "1.0.0"
  s.summary          = "ZCMobilePayment is An SDK FO PAY"

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
                       移动应用支付接口。
                       开发者不再需要编写冗长的代码，简单几步就可以使你的应用获得支付功能。
                       让你的移动应用接入支付像大厦接入电力一样简单，方便，和温暖。
                       支持微信支付，公众账号支付，支付宝钱包，百度钱包，银联手机支付
                       DESC

  s.homepage         = "https://github.com/Winter-Yang/ZCMobilePayment"
  s.license          = 'MIT'
  s.author           = { "Winter-Yang" => "362694311@qq.com" }
  s.source           = { :git => "https://github.com/Winter-Yang/ZCMobilePayment.git", :tag => s.version.to_s }
  s.ios.deployment_target = '8.0'
  s.frameworks = 'CFNetwork', 'SystemConfiguration', 'Security','PassKit','CoreGraphics','CoreText','QuartzCore','coreMotion','LocalAuthentication','UIKit','AddressBook','Foundation','Security'
  s.ios.library = 'c++', 'stdc++', 'z', 'sqite3'
 

  s.source_files = 'ZCMobilePayment/Classes/*'  
  s.public_header_files = 'ZCMobilePayment/Classes/*.h' 
  s.resources = 'ZCMobilePayment/Lib/*.bundle'
  s.vendored_libraries =  'ZCMobilePayment/Lib/*.a'
  s.vendored_frameworks = 'ZCMobilePayment/Lib/*.framework'



  #  s.subspec 'Lib' do |ss|
  #   ss.vendored_libraries = 'ZCMobilePayment/Lib/*.a'
  #   ss.resources = 'ZCMobilePayment/Lib/AlipaySDK.bundle','ZCMobilePayment/Lib/ZCPaySDK.bundle'
  #   ss.ios.vendored_frameworks = 'ZCMobilePayment/Lib/AlipaySDK.framework'
  # end 

  # s.subspec 'Classes' do |ss|
  #   ss.source_files = 'ZCMobilePayment/Classes/*.{h,m}'
  #   ss.public_header_files = 'ZCMobilePayment/Classes/*.h'
  # end 
end
