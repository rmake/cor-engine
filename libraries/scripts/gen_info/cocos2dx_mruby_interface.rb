
COCOS2DX_MRUBY_INTERFACE_TAGET_CLASSES = [
    {
      :name => "cor::cocos2dx_converter::StepSizeScene",
      :value => :cocos_ptr,
    },
    {
      :name => "cor::cocos2dx_converter::Collision2dNodeRef",
      :value => :value,
    },
    {
      :name => "cor::cocos2dx_converter::Collision2dNode",
      :value => :shared_ptr,
      :create_function => "create",
    },
    {
      :name => "cor::cocos2dx_converter::EasyHttpClient",
      :value => :shared_ptr,
    },
    {
      :name => "cor::cocos2dx_converter::Cocos2dxExperimental",
      :value => :shared_ptr,
    },
    {
      :name => "cor::cocos2dx_converter::TexturedTriangleNode",
      :value => :cocos_ptr,
    },
    {
      :name => "cor::cocos2dx_converter::RtsObjectSensor",
      :value => :shared_ptr,
    },
    {
      :name => "cor::cocos2dx_converter::RtsObjectAction",
      :value => :shared_ptr,
    },
    {
      :name => "cor::cocos2dx_converter::RtsObject",
      :value => :shared_ptr,
    },
    {
      :name => "cor::cocos2dx_converter::RtsObjectGroup",
      :value => :shared_ptr,
      #:create_function => "create",
    },
    {
      :name => "cor::cocos2dx_converter::RtsObjectSystem",
      :value => :shared_ptr,
      #:create_function => "create",
    },
    {
      :name => "cor::cocos2dx_converter::RtsObjectCostGridSpace",
      :value => :shared_ptr,
      #:create_function => "create",
    },
    {
      :name => "cor::cocos2dx_converter::RtsObjectCostGridSpaceExperimental",
      :value => :shared_ptr,
      #:create_function => "create",
    },
    {
      :name => "cor::cocos2dx_converter::RtsObjectEffect",
      :value => :shared_ptr,
      #:create_function => "create",
    },
    {
      :name => "cor::cocos2dx_mruby_interface::CocosMrubyRef",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Ref",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Value",
      :value => :cocos_value,
      :create_function => "create",
    },
    {
      :name => "cocos2d::Color4F",
      :value => :value,
      :create_function => "create",
    },
    {
      :name => "cocos2d::Color4B",
      :value => :value,
      :create_function => "create",
    },
    {
      :name => "cocos2d::Color3B",
      :value => :value,
      :create_function => "create",
    },
    {
      :name => "cocos2d::Tex2F",
      :value => :value,
      :create_function => "create",
    },
    #{
    #  :name => "cocos2d::Point",
    #  :value => :value,
    #  :create_function => "create",
    #},
    {
      :name => "cocos2d::Vec2",
      :value => :value,
      :create_function => "create",
      :operator => [
        { :name => "*", :args => [
          {:ret => "cocos2d::Vec2", :arg => ["float"]},
        ]},
        { :name => "+", :args => [
          {:ret => "cocos2d::Vec2", :arg => ["cocos2d::Vec2"]},
        ]},
        { :name => "-", :args => [
          {:ret => "cocos2d::Vec2", :arg => ["cocos2d::Vec2"]},
        ]},
        { :name => "-@", :args => [
          {:ret => "cocos2d::Vec2", :arg => []},
        ]},
      ],
    },
    {
      :name => "cocos2d::Vec3",
      :value => :value,
      :create_function => "create",
      :operator => [
        { :name => "*", :args => [
          {:ret => "cocos2d::Vec3", :arg => ["float"]},
        ]},
        { :name => "+", :args => [
          {:ret => "cocos2d::Vec3", :arg => ["cocos2d::Vec3"]},
        ]},
        { :name => "-", :args => [
          {:ret => "cocos2d::Vec3", :arg => ["cocos2d::Vec3"]},
        ]},
        { :name => "-@", :args => [
          {:ret => "cocos2d::Vec3", :arg => []},
        ]},
      ],
    },
    {
      :name => "cocos2d::Vec4",
      :value => :value,
      :create_function => "create",
      :operator => [
        { :name => "*", :args => [
          {:ret => "cocos2d::Vec4", :arg => ["float"]},
        ]},
        { :name => "+", :args => [
          {:ret => "cocos2d::Vec4", :arg => ["cocos2d::Vec4"]},
        ]},
        { :name => "-", :args => [
          {:ret => "cocos2d::Vec4", :arg => ["cocos2d::Vec4"]},
        ]},
        { :name => "-@", :args => [
          {:ret => "cocos2d::Vec4", :arg => []},
        ]},
      ],
    },
    {
      :name => "cocos2d::Mat4",
      :value => :value,
      :create_function => "create",
      :operator => [
        { :name => "*", :args => [
          {:ret => "cocos2d::Mat4", :arg => ["cocos2d::Mat4"]},
          {:ret => "cocos2d::Vec3", :arg => ["cocos2d::Vec3"]},
          {:ret => "cocos2d::Vec4", :arg => ["cocos2d::Vec4"]},
        ]},
        { :name => "+", :args => [
          {:ret => "cocos2d::Mat4", :arg => ["cocos2d::Mat4"]},
        ]},
        { :name => "-", :args => [
          {:ret => "cocos2d::Mat4", :arg => ["cocos2d::Mat4"]},
        ]},
        { :name => "-@", :args => [
          {:ret => "cocos2d::Mat4", :arg => []},
        ]},
      ],
    },
    {
      :name => "cocos2d::Size",
      :value => :value,
      :create_function => "create",
    },
    {
      :name => "cocos2d::Rect",
      :value => :value,
      :create_function => "create",
    },
    {
      :name => "cocos2d::Data",
      :value => :value,
    },
    {
      :name => "cocos2d::FileUtils",
      :value => :pointer,
    },
    {
      :name => "cocos2d::Touch",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Event",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EventTouch",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EventKeyboard",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EventCustom",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EventListener",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EventListenerCustom",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EventListenerTouchOneByOne",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EventListenerTouchAllAtOnce",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EventListenerKeyboard",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EventDispatcher",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::TextureCache",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Image",
      :value => :cocos_ptr,
      :create_function => "create",
    },
    {
      :name => "cocos2d::Texture2D",
      :value => :cocos_ptr,
      :create_function => "create",
    },
    {
      :name => "cocos2d::Action",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::FiniteTimeAction",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Speed",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Follow",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::ActionCamera",
      :value => :cocos_ptr,
      :create_function => :create,
    },
    {
      :name => "cocos2d::OrbitCamera",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::PointArray",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::CardinalSplineTo",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::CardinalSplineBy",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::CatmullRomTo",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::CatmullRomBy",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::ActionEase",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseRateAction",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseIn",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseOut",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseInOut",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseExponentialIn",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseExponentialOut",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseExponentialInOut",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseSineIn",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseSineOut",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseSineInOut",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseElastic",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseElasticIn",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseElasticOut",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseElasticInOut",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseBounce",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseBounceIn",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseBounceOut",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseBounceInOut",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseBackIn",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseBackOut",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseBackInOut",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseBezierAction",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseQuadraticActionIn",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseQuadraticActionOut",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseQuadraticActionInOut",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseQuarticActionIn",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseQuarticActionOut",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseQuarticActionInOut",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseQuinticActionIn",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseQuinticActionOut",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseQuinticActionInOut",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseCircleActionIn",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseCircleActionOut",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseCircleActionInOut",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseCubicActionIn",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseCubicActionOut",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EaseCubicActionInOut",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::GridAction",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Grid3DAction",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::AccelDeccelAmplitude",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::AccelAmplitude",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::DeccelAmplitude",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::StopGrid",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::ReuseGrid",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Waves3D",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::FlipX3D",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::FlipY3D",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Lens3D",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Ripple3D",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Shaky3D",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Liquid",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Waves",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Twirl",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::ActionInstant",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Show",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Hide",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Hide",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::ToggleVisibility",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::RemoveSelf",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::FlipX",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::FlipY",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Place",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::CallFunc",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::CallFuncN",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::ActionInterval",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Sequence",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Repeat",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::RepeatForever",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Spawn",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::RotateTo",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::RotateBy",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::MoveBy",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::MoveTo",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::SkewTo",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::SkewBy",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::JumpBy",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::JumpTo",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::BezierBy",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::BezierTo",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::ScaleTo",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::ScaleBy",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Blink",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::FadeTo",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::FadeIn",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::FadeOut",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::TintTo",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::TintBy",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::DelayTime",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::ReverseTime",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Animate",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::TargetedAction",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::ActionManager",
      :value => :cocos_ptr,
      :create_function => "create",
    },
    {
      :name => "cocos2d::PageTurn3D",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::ProgressTo",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::ProgressFromTo",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::ShakyTiles3D",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::ShatteredTiles3D",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::ShuffleTiles",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::FadeOutTRTiles",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::FadeOutBLTiles",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::FadeOutUpTiles",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::FadeOutDownTiles",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::TurnOffTiles",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::WavesTiles3D",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::JumpTiles3D",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::SplitRows",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::SplitCols",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::ActionTween",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::AnimationFrame",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Animation",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Animation3D",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Animate3D",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::AnimationCache",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::SpriteFrame",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Node",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::AtlasNode",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Sprite",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Sprite3D",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Camera",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::BaseLight",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::AmbientLight",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::DirectionLight",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::DrawNode",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Director",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Scene",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Layer",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::LayerColor",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::PhysicsMaterial",
      :value => :value,
      :create_function => "create",
    },
    {
      :name => "cocos2d::PhysicsBody",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::PhysicsJoint",
      :value => :pointer,
    },
    {
      :name => "cocos2d::PhysicsJointFixed",
      :value => :pointer,
    },
    {
      :name => "cocos2d::PhysicsShape",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::PhysicsShapeCircle",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::PhysicsShapeBox",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::PhysicsShapePolygon",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::PhysicsShapeEdgeSegment",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::PhysicsShapeEdgeBox",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::PhysicsShapeEdgePolygon",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::PhysicsShapeEdgeChain",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::PhysicsRayCastInfo",
      :value => :value,
      :create_function => "create",
    },
    {
      :name => "cocos2d::PhysicsContactData",
      :value => :pointer,
    },
    {
      :name => "cocos2d::PhysicsContact",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::PhysicsContactPreSolve",
      :value => :pointer,
    },
    {
      :name => "cocos2d::PhysicsContactPostSolve",
      :value => :pointer,
    },
    {
      :name => "cocos2d::EventListenerPhysicsContact",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EventListenerPhysicsContactWithBodies",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EventListenerPhysicsContactWithShapes",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::EventListenerPhysicsContactWithGroup",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::PhysicsWorld",
      :value => :pointer,
    },
    {
      :name => "cocos2d::SpriteBatchNode",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::FontAtlas",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::Label",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::LabelAtlas",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::ui::Control",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::ui::ControlButton",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::ui::EditBox",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::ui::Scale9Sprite",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::TextFieldTTF",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::RenderTexture",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::ClippingNode",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::ParticleSystem",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::ParticleSystemQuad",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::TMXLayer",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::TMXObjectGroup",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::TMXObjectGroup",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::TMXTiledMap",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::MotionStreak",
      :value => :cocos_ptr,
    },
    {
      :name => "cocos2d::extension::ScrollView",
      :value => :cocos_ptr,
    },
    {
      :name => "CocosDenshion::SimpleAudioEngine",
      :value => :pointer,
    },
  ]
  
COCOS2DX_MRUBY_INTERFACE_TAGET_ENUMS = [
    {
      :enum_name => "cocos2d::MATRIX_STACK_TYPE",
      :mruby_module => "Cocos2d",
      :mruby_class => "MatrixStackType",
    },
    {
      :enum_name => "cocos2d::Texture2D::PixelFormat",
      :mruby_module => "Cocos2d",
      :mruby_class => "Texture2DPixelFormat",
    },
    {
      :enum_name => "cocos2d::extension::ScrollView::Direction",
      :mruby_module => "Cocos2d",
      :mruby_class => "ScrollViewDirection",
    },
  ]
    

