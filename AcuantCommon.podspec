Pod::Spec.new do |s|
  s.swift_versions = ['5.2']
  s.platform = :ios
  s.ios.deployment_target = '11.0'
  s.name         = "AcuantCommon"
  s.version      = "11.4.0"
  s.summary      = "Acuant's Common Library"
  s.description  = "Acuant's Common Library"
  s.homepage     = "https://github.com/jmoonacuant/TestCoco"
  s.license      = {
        :type => 'commercial',
        :text => <<-LICENSE
                Copyright 2019 Acuant, Inc. All Rights Reserved.
                LICENSE
  }
  s.author             = { "Acuant Inc" => "jmoon@acuantcorp.com" }
  s.source       = { :git => "https://github.com/jmoonacuant/TestCoco.git", :tag => "#{s.version}" }
end
