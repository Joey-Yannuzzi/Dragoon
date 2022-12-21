#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// Attack
struct Attack_t2F0CF0A8114E4EFF1BF51894AD55F40B8849CD14;
// AttackSequenceAnimation
struct AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD;
// AttackSequenceUI
struct AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// ColorSwap_HeroKnight
struct ColorSwap_HeroKnight_t363754B0FC89BDDD3D6D00E5D4E1FC6484639BA7;
// CommandControl
struct CommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Controller
struct Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// CursorSet
struct CursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E;
// EnemyControl
struct EnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PlayerControl
struct PlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// RandomNumberGenerator
struct RandomNumberGenerator_tD88337DD8ABCBC5650BBB20FF9F8730F979F9FD8;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// StartButton
struct StartButton_tF8F6A56061EF51B26F82FD5C23D529D030248545;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TextControl
struct TextControl_t71D12CBDD07CE3910A0062CA9670EB7F7C6E0DE4;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Tile
struct Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64;
// Timer
struct Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// unit.Unit
struct Unit_t92885F0F022EF93C363B19CE32EA7756844F2158;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Wait
struct Wait_tCC9A6C65D8284B1D06D827760BA0C388AC1CB181;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00F28EC044F0BCC9FF9CE0F4EB8D079BA9C166F4;
IL2CPP_EXTERN_C String_t* _stringLiteral0469116788B8626C8DA3C69F79F8A3DD1B3DAF94;
IL2CPP_EXTERN_C String_t* _stringLiteral0E9E34245923A0BB21FDAA5FE52670E5EAD09AF1;
IL2CPP_EXTERN_C String_t* _stringLiteral0FF0F8B5E46BCF71742AFBED52DBA14783AC1244;
IL2CPP_EXTERN_C String_t* _stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5;
IL2CPP_EXTERN_C String_t* _stringLiteral31EB1587A3B4A2B074D542811AD6EB5F6570F4C3;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1;
IL2CPP_EXTERN_C String_t* _stringLiteral3C46AE1F7CB48932D0916E1F95453120069BDF8B;
IL2CPP_EXTERN_C String_t* _stringLiteral44BD532DF32E35E637F92D3ADE4050C9B9A140BD;
IL2CPP_EXTERN_C String_t* _stringLiteral4D051A1C6B5D7B20CF5BE518E0307D11548295E8;
IL2CPP_EXTERN_C String_t* _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91;
IL2CPP_EXTERN_C String_t* _stringLiteral5847BC4F8CCFB1A4F41033F8982DC31E15E83B51;
IL2CPP_EXTERN_C String_t* _stringLiteral5EC6529F8FCDDB673E7FC8CEE700359FC2F5533A;
IL2CPP_EXTERN_C String_t* _stringLiteral67E7A1294A9F70007D0898F169A0296695E940D9;
IL2CPP_EXTERN_C String_t* _stringLiteral6FF8D985C31E383E0E53B73107583F2870FF4C21;
IL2CPP_EXTERN_C String_t* _stringLiteral74B83A50A58269C4EECA165C2ABB62B80AAFC9D0;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral91A6E012240CCCE4A655675AB0A647F4F787809D;
IL2CPP_EXTERN_C String_t* _stringLiteralAB236FE2BF72D00A5CFAFFB9CA58750A49DA02B2;
IL2CPP_EXTERN_C String_t* _stringLiteralB03332BB8FF600C96D963CDF160CFA6A57866E2F;
IL2CPP_EXTERN_C String_t* _stringLiteralBAE84006D80CACC9D56696D29EB6DF7160BB70BC;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA;
IL2CPP_EXTERN_C String_t* _stringLiteralCD96671307599B1E074BDA8D4DFA6B0862D03FE9;
IL2CPP_EXTERN_C String_t* _stringLiteralD525E98BC8C8022A11AFEE9AAD35874D814DB463;
IL2CPP_EXTERN_C String_t* _stringLiteralD97B0577F464078484CF8808A78E5C0B47BDF09A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE5F5200C3FA1D8366A6C5825FC580B4B327DB79D;
IL2CPP_EXTERN_C String_t* _stringLiteralEC94555AAEB6D35E377BD35C8D911D3641ED925C;
IL2CPP_EXTERN_C String_t* _stringLiteralFC7ACAFB3D712D6BA8F22C4DAFE2F7EAC4CC347D;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F_m38D3DB93195924ABA99F76D561879EB33C5651DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD_m07C0CB1A9BF0ED24CBC601854EACF7649159FF5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F_mD718F09BE7E1BF9DC4D19A6A6966B992F912F7C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisController_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9_mF364E4B94D1E222775B6AE8790360D39AF249537_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E_m6F460C0B4AEBF8C0FA26BCCB4244C3C191FBE964_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C_mD3F466505D0BA5981B478702817979D38BD7AF19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m5A79A7B771326DA8781DCD5FE2B41517FA854D9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874_mA450A041076F9F3A34D2B74115304EA51C076016_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRandomNumberGenerator_tD88337DD8ABCBC5650BBB20FF9F8730F979F9FD8_m5DB892A7826F21A9A57B8B0DDF1E090B60A81BFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextControl_t71D12CBDD07CE3910A0062CA9670EB7F7C6E0DE4_m699EF7E587C1E596DB9EE28AC2D9978113A1BFAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTimer_t2FE811324BD2C741B8D6EBC18E20230874E35A20_m04A2D1E271ADAEEE5975D3EF890F08E834863402_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var;

struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_0;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_1;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_2;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_4;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 
{
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// Attack
struct Attack_t2F0CF0A8114E4EFF1BF51894AD55F40B8849CD14  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Attack::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_4;
	// UnityEngine.GameObject Attack::cursor
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cursor_5;
	// UnityEngine.Vector3 Attack::offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_6;
};

// AttackSequenceAnimation
struct AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 AttackSequenceAnimation::frameSkip
	int32_t ___frameSkip_4;
	// System.Int32 AttackSequenceAnimation::frame
	int32_t ___frame_5;
	// UnityEngine.GameObject AttackSequenceAnimation::enemy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemy_6;
	// UnityEngine.GameObject AttackSequenceAnimation::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_7;
	// System.Boolean AttackSequenceAnimation::playerTurn
	bool ___playerTurn_8;
	// System.Boolean AttackSequenceAnimation::init
	bool ___init_9;
	// System.Single AttackSequenceAnimation::distance
	float ___distance_10;
	// System.Boolean AttackSequenceAnimation::moveBack
	bool ___moveBack_11;
	// UnityEngine.Vector3 AttackSequenceAnimation::playerPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___playerPos_12;
	// UnityEngine.Vector3 AttackSequenceAnimation::enemyPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___enemyPos_13;
	// System.Int32 AttackSequenceAnimation::count
	int32_t ___count_14;
	// System.Int32 AttackSequenceAnimation::playerAttacks
	int32_t ___playerAttacks_15;
	// System.Int32 AttackSequenceAnimation::enemyAttacks
	int32_t ___enemyAttacks_16;
	// UnityEngine.GameObject AttackSequenceAnimation::UI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___UI_17;
	// System.Boolean AttackSequenceAnimation::playerDead
	bool ___playerDead_18;
	// System.Boolean AttackSequenceAnimation::enemyDead
	bool ___enemyDead_19;
	// UnityEngine.GameObject AttackSequenceAnimation::playerUnit
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playerUnit_20;
	// UnityEngine.GameObject AttackSequenceAnimation::enemyUnit
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemyUnit_21;
	// System.Boolean AttackSequenceAnimation::hit
	bool ___hit_22;
	// UnityEngine.SpriteRenderer AttackSequenceAnimation::playerRend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___playerRend_23;
	// UnityEngine.SpriteRenderer AttackSequenceAnimation::enemyRend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___enemyRend_24;
	// System.Boolean AttackSequenceAnimation::start
	bool ___start_25;
};

// AttackSequenceUI
struct AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI AttackSequenceUI::miss
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___miss_4;
	// TMPro.TextMeshProUGUI AttackSequenceUI::playerHit
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___playerHit_5;
	// TMPro.TextMeshProUGUI AttackSequenceUI::playerDmg
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___playerDmg_6;
	// TMPro.TextMeshProUGUI AttackSequenceUI::playerCrit
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___playerCrit_7;
	// TMPro.TextMeshProUGUI AttackSequenceUI::playerHp
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___playerHp_8;
	// TMPro.TextMeshProUGUI AttackSequenceUI::enemyHit
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___enemyHit_9;
	// TMPro.TextMeshProUGUI AttackSequenceUI::enemyDmg
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___enemyDmg_10;
	// TMPro.TextMeshProUGUI AttackSequenceUI::enemyCrit
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___enemyCrit_11;
	// TMPro.TextMeshProUGUI AttackSequenceUI::enemyHp
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___enemyHp_12;
	// System.Int32 AttackSequenceUI::frameRate
	int32_t ___frameRate_13;
	// System.Int32 AttackSequenceUI::time
	int32_t ___time_14;
	// UnityEngine.GameObject AttackSequenceUI::attackSequence
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attackSequence_15;
	// UnityEngine.GameObject AttackSequenceUI::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_16;
	// UnityEngine.GameObject AttackSequenceUI::enemy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemy_17;
	// System.Int32 AttackSequenceUI::frame
	int32_t ___frame_18;
	// System.Boolean AttackSequenceUI::isActive
	bool ___isActive_19;
	// System.Int32 AttackSequenceUI::hpPlayer
	int32_t ___hpPlayer_20;
	// System.Int32 AttackSequenceUI::hpEnemy
	int32_t ___hpEnemy_21;
	// System.Int32 AttackSequenceUI::playerDam
	int32_t ___playerDam_22;
	// System.Int32 AttackSequenceUI::enemyDam
	int32_t ___enemyDam_23;
	// UnityEngine.GameObject AttackSequenceUI::right
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___right_24;
	// UnityEngine.GameObject AttackSequenceUI::left
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___left_25;
	// UnityEngine.GameObject AttackSequenceUI::rightHp
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rightHp_26;
	// UnityEngine.GameObject AttackSequenceUI::leftHp
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___leftHp_27;
	// System.Boolean AttackSequenceUI::start
	bool ___start_28;
};

// ColorSwap_HeroKnight
struct ColorSwap_HeroKnight_t363754B0FC89BDDD3D6D00E5D4E1FC6484639BA7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Color[] ColorSwap_HeroKnight::m_sourceColors
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___m_sourceColors_4;
	// UnityEngine.Color[] ColorSwap_HeroKnight::m_newColors
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___m_newColors_5;
	// UnityEngine.Texture2D ColorSwap_HeroKnight::m_colorSwapTex
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_colorSwapTex_6;
	// UnityEngine.Color[] ColorSwap_HeroKnight::m_spriteColors
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___m_spriteColors_7;
	// UnityEngine.SpriteRenderer ColorSwap_HeroKnight::m_spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___m_spriteRenderer_8;
	// System.Boolean ColorSwap_HeroKnight::m_init
	bool ___m_init_9;
};

// CommandControl
struct CommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] CommandControl::enemies
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___enemies_4;
	// System.Boolean CommandControl::selected
	bool ___selected_5;
	// UnityEngine.EventSystems.EventSystem CommandControl::eventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___eventSystem_6;
	// UnityEngine.GameObject CommandControl::system
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___system_7;
};

// Controller
struct Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Controller::phase
	int32_t ___phase_4;
	// System.Boolean Controller::start
	bool ___start_5;
	// System.Boolean Controller::isEnemy
	bool ___isEnemy_6;
	// System.Boolean Controller::isPlayer
	bool ___isPlayer_7;
	// System.Boolean Controller::isAlly
	bool ___isAlly_8;
	// System.Boolean Controller::is3rd
	bool ___is3rd_9;
	// UnityEngine.GameObject Controller::cursor
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cursor_10;
	// System.Int32 Controller::count
	int32_t ___count_11;
	// UnityEngine.GameObject Controller::playerController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playerController_12;
	// UnityEngine.GameObject Controller::enemyController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemyController_13;
	// System.Boolean Controller::enemyStart
	bool ___enemyStart_14;
	// System.Int32 Controller::runCount
	int32_t ___runCount_15;
	// UnityEngine.GameObject Controller::attackUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attackUI_16;
};

// CursorSet
struct CursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject CursorSet::mainPlayer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___mainPlayer_4;
	// UnityEngine.Vector3 CursorSet::offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_5;
	// System.Boolean CursorSet::isSelected
	bool ___isSelected_6;
	// UnityEngine.GameObject CursorSet::tempCharacter
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tempCharacter_7;
	// System.Boolean CursorSet::isRange
	bool ___isRange_8;
	// System.Boolean CursorSet::hasTarget
	bool ___hasTarget_9;
	// UnityEngine.GameObject CursorSet::commandController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___commandController_10;
	// System.Boolean CursorSet::isCommanding
	bool ___isCommanding_11;
	// System.Boolean CursorSet::enemySelected
	bool ___enemySelected_12;
	// System.Boolean CursorSet::isAttacking
	bool ___isAttacking_13;
	// System.Boolean CursorSet::isEnemy
	bool ___isEnemy_14;
	// System.Int32 CursorSet::multiple
	int32_t ___multiple_15;
	// System.Int32 CursorSet::frame
	int32_t ___frame_16;
};

// EnemyControl
struct EnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean EnemyControl::isActive
	bool ___isActive_4;
	// System.Int32 EnemyControl::count
	int32_t ___count_5;
	// UnityEngine.GameObject EnemyControl::controller
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___controller_6;
	// UnityEngine.GameObject EnemyControl::UI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___UI_7;
	// System.Boolean EnemyControl::phaseRunning
	bool ___phaseRunning_8;
	// UnityEngine.GameObject EnemyControl::child
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___child_9;
	// System.Int32 EnemyControl::currentChild
	int32_t ___currentChild_10;
	// System.Boolean EnemyControl::playerWin
	bool ___playerWin_11;
	// System.Boolean EnemyControl::dead
	bool ___dead_12;
};

// PlayerControl
struct PlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean PlayerControl::isActive
	bool ___isActive_4;
	// System.Int32 PlayerControl::count
	int32_t ___count_5;
	// System.Boolean PlayerControl::enemyWin
	bool ___enemyWin_6;
};

// RandomNumberGenerator
struct RandomNumberGenerator_tD88337DD8ABCBC5650BBB20FF9F8730F979F9FD8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// StartButton
struct StartButton_tF8F6A56061EF51B26F82FD5C23D529D030248545  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// TextControl
struct TextControl_t71D12CBDD07CE3910A0062CA9670EB7F7C6E0DE4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI TextControl::phaseText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___phaseText_4;
	// UnityEngine.GameObject TextControl::timer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___timer_5;
	// System.Boolean TextControl::isTimed
	bool ___isTimed_6;
	// UnityEngine.GameObject TextControl::tempTimer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tempTimer_7;
};

// Tile
struct Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Tile::attackSquare
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attackSquare_4;
};

// Timer
struct Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Timer::time
	float ___time_4;
	// System.Single Timer::currentTime
	float ___currentTime_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// unit.Unit
struct Unit_t92885F0F022EF93C363B19CE32EA7756844F2158  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 unit.Unit::lvl
	int32_t ___lvl_4;
	// System.Int32 unit.Unit::exp
	int32_t ___exp_5;
	// System.Int32 unit.Unit::hp
	int32_t ___hp_6;
	// System.Int32 unit.Unit::str
	int32_t ___str_7;
	// System.Int32 unit.Unit::skl
	int32_t ___skl_8;
	// System.Int32 unit.Unit::spd
	int32_t ___spd_9;
	// System.Int32 unit.Unit::lck
	int32_t ___lck_10;
	// System.Int32 unit.Unit::def
	int32_t ___def_11;
	// System.Int32 unit.Unit::res
	int32_t ___res_12;
	// System.Int32 unit.Unit::con
	int32_t ___con_13;
	// System.Int32 unit.Unit::mov
	int32_t ___mov_14;
	// System.Int32 unit.Unit::attack
	int32_t ___attack_15;
	// System.Int32 unit.Unit::defense
	int32_t ___defense_16;
	// System.Int32 unit.Unit::accuracy
	int32_t ___accuracy_17;
	// System.Int32 unit.Unit::avoid
	int32_t ___avoid_18;
	// System.Int32 unit.Unit::critRate
	int32_t ___critRate_19;
	// System.Int32 unit.Unit::critAvoid
	int32_t ___critAvoid_20;
	// System.Int32 unit.Unit::maxHp
	int32_t ___maxHp_21;
	// System.Int32 unit.Unit::atkSpd
	int32_t ___atkSpd_22;
	// UnityEngine.GameObject unit.Unit::moveSquare
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___moveSquare_23;
	// UnityEngine.GameObject unit.Unit::attackSquare
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attackSquare_24;
	// System.Single unit.Unit::squareOffsetY
	float ___squareOffsetY_25;
	// System.Single unit.Unit::squareOffsetX
	float ___squareOffsetX_26;
	// System.Single unit.Unit::speed
	float ___speed_27;
	// System.Boolean unit.Unit::isActive
	bool ___isActive_28;
	// UnityEngine.SpriteRenderer unit.Unit::spriteRender
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRender_29;
	// UnityEngine.GameObject unit.Unit::target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_30;
	// System.Boolean unit.Unit::isSearching
	bool ___isSearching_31;
	// System.Boolean unit.Unit::counterAttack
	bool ___counterAttack_32;
	// UnityEngine.GameObject unit.Unit::attackSequence
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attackSequence_33;
	// UnityEngine.GameObject unit.Unit::attackUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attackUI_34;
	// System.Boolean unit.Unit::isAttackSequence
	bool ___isAttackSequence_35;
	// UnityEngine.GameObject unit.Unit::currentAttackSequence
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentAttackSequence_36;
	// UnityEngine.GameObject unit.Unit::rnControl
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rnControl_37;
	// System.Int32 unit.Unit::attacks
	int32_t ___attacks_38;
	// System.Boolean unit.Unit::dead
	bool ___dead_39;
	// UnityEngine.GameObject unit.Unit::parent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___parent_40;
};

// Wait
struct Wait_tCC9A6C65D8284B1D06D827760BA0C388AC1CB181  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Wait::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_4;
	// UnityEngine.GameObject Wait::cursor
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cursor_5;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Color>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F_gshared (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void ColorSwap_HeroKnight::InitColorSwapTex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorSwap_HeroKnight_InitColorSwapTex_m82D42BF738FE175796718B0274744FCCA60AB164 (ColorSwap_HeroKnight_t363754B0FC89BDDD3D6D00E5D4E1FC6484639BA7* __this, const RuntimeMethod* method) ;
// System.Void ColorSwap_HeroKnight::SwapDemoColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorSwap_HeroKnight_SwapDemoColors_m0EA05729EF30373A671C454E4EF3495AC8A27394 (ColorSwap_HeroKnight_t363754B0FC89BDDD3D6D00E5D4E1FC6484639BA7* __this, const RuntimeMethod* method) ;
// System.Void ColorSwap_HeroKnight::SwapColor(System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorSwap_HeroKnight_SwapColor_m6FE021E210558258F7EE8F58956D47678162F2D5 (ColorSwap_HeroKnight_t363754B0FC89BDDD3D6D00E5D4E1FC6484639BA7* __this, int32_t ___index0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// UnityEngine.Color ColorSwap_HeroKnight::ColorFromIntRGB(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ColorSwap_HeroKnight_ColorFromIntRGB_m68EFF5FAAEE8B40C6400C1EE47D28DA4946D6F1A (int32_t ___r0, int32_t ___g1, int32_t ___b2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, bool ___linear4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___x0, int32_t ___y1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___index0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Color>::get_Item(System.Int32)
inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*) (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF*, int32_t, const RuntimeMethod*))List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<CursorSet>()
inline CursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E* GameObject_GetComponent_TisCursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E_m6F460C0B4AEBF8C0FA26BCCB4244C3C191FBE964 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.GameObject CursorSet::getTempcharacter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* CursorSet_getTempcharacter_m5A1F2203F432DF921B7F495C285286EAC55F3639_inline (CursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<CommandControl>()
inline CommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F* Component_GetComponentInParent_TisCommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F_m38D3DB93195924ABA99F76D561879EB33C5651DA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Void CommandControl::setSelected(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CommandControl_setSelected_m108B17C71E445DB0C48385F08146B815C4443C17_inline (CommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F* __this, bool ___selected0, const RuntimeMethod* method) ;
// System.Void CommandControl::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandControl_Reset_mDA6678BBB6E9BC9EC6352254525EAC170AE94662 (CommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<unit.Unit>()
inline Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void unit.Unit::attackInit(System.String,UnityEngine.Vector3,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_attackInit_m3614FC80B96EA35A6823EF696562BC3CB5C7E31D (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, String_t* ___type0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cursorPos1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cursor2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<AttackSequenceUI>()
inline AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void AttackSequenceUI::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceUI_Reset_mE29841C620C29CB524E3708D9D71CD2E2C5010BB (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, const RuntimeMethod* method) ;
// System.Int32 AttackSequenceUI::getHpPlayer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AttackSequenceUI_getHpPlayer_mCAB232BFA1BAF0B684573AB99AC42E02DBD6FAC0_inline (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, const RuntimeMethod* method) ;
// System.Void AttackSequenceAnimation::playerDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceAnimation_playerDeath_mDF64FD70E07A4943DEDA9DCFE1F3D1BFD0B6481A (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, const RuntimeMethod* method) ;
// System.Int32 AttackSequenceUI::getHpEnemy()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AttackSequenceUI_getHpEnemy_mF118FC69B871959CC56F4C75DAD99CFEC32D228D_inline (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, const RuntimeMethod* method) ;
// System.Void AttackSequenceAnimation::enemyDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceAnimation_enemyDeath_m20507DD0B25074A992FB06597EFCA53271372C94 (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, const RuntimeMethod* method) ;
// System.Void AttackSequenceAnimation::playerMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceAnimation_playerMove_m2E17975D89849801E140AFA19B5FC746DB3A77AB (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, const RuntimeMethod* method) ;
// System.Void AttackSequenceAnimation::enemyMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceAnimation_enemyMove_m80FF3377D71E7CFAE4D13F609DB47AE387D9084A (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Single AttackSequenceAnimation::getDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AttackSequenceAnimation_getDistance_mD71EBAE115F221D2BE51F1F19F1AC085DF4DAD78 (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, const RuntimeMethod* method) ;
// System.Boolean unit.Unit::hitCheck(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unit_hitCheck_m205E77285FAFBD23242AB3FD5F3E983AC394FD11 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___victim0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Int32 unit.Unit::getHp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unit_getHp_m2B1D935A2EA64A394015C685C4B70CC6758341E9 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) ;
// System.Void AttackSequenceUI::setEnemyHp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceUI_setEnemyHp_m03A1EFCFDC06D4C21B8962F2799DA9224DEEFC89 (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, int32_t ___enemyHp0, const RuntimeMethod* method) ;
// System.Void AttackSequenceUI::setMiss(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceUI_setMiss_m0A8117BE2C1667F861591BF652F727B57309B22B (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, String_t* ___miss0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method) ;
// System.Void AttackSequenceUI::setPlayerHp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceUI_setPlayerHp_mCD7E9EE0006B4A3D65CDC4A20F4D9F648953FD74 (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, int32_t ___playerHp0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<AttackSequenceAnimation>()
inline AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* GameObject_GetComponent_TisAttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD_m07C0CB1A9BF0ED24CBC601854EACF7649159FF5A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Int32 AttackSequenceAnimation::getPlayerAttacks()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AttackSequenceAnimation_getPlayerAttacks_m64A7CC3900FCBBC3F3EDD0868CC55FF8F92D7D3E_inline (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, const RuntimeMethod* method) ;
// System.Int32 AttackSequenceAnimation::getEnemyAttacks()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AttackSequenceAnimation_getEnemyAttacks_mD5EEA4304D147633B552A932864963D722CC2F51_inline (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, const RuntimeMethod* method) ;
// System.Boolean AttackSequenceAnimation::getInit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AttackSequenceAnimation_getInit_m59D6328CC7150C00F661319F7544940534D08311_inline (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void unit.Unit::Reset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_Reset_m77910D75557B5C6F60F722005D8FF6C2DD17A27B (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, bool ___initiated0, const RuntimeMethod* method) ;
// System.Void AttackSequenceUI::setActive(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AttackSequenceUI_setActive_m40076EE1E602361DFE5F82A11887D162403A5DE3_inline (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, bool ___isActive0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) ;
// System.Int32 unit.Unit::getDamage(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unit_getDamage_m3276097273B692D3519F1D64D3C8B6F9360C3438 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___victim0, const RuntimeMethod* method) ;
// System.Int32 unit.Unit::getHit(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unit_getHit_m5B08DBC452BB3A6F57F84B73CD577B72847506F5 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___victim0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void AttackSequenceUI::setPlayerHit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceUI_setPlayerHit_m801367FC9569913A512B575509073019EE56FD0A (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, String_t* ___playerHit0, const RuntimeMethod* method) ;
// System.Void AttackSequenceUI::setPlayerDmg(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceUI_setPlayerDmg_m7151E5998ED7FEABCC50C00CED8DA4C5723BBD28 (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, String_t* ___playerDmg0, const RuntimeMethod* method) ;
// System.Int32 unit.Unit::getCrit(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unit_getCrit_mFF9383882BBB89D64615A0927CD822BFF60C9CFA (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, const RuntimeMethod* method) ;
// System.Void AttackSequenceUI::setPlayerCrit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceUI_setPlayerCrit_m5953B8E4BCB5F648DF2A493E0C497CB774060083 (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, int32_t ___playerCrit0, const RuntimeMethod* method) ;
// System.Void AttackSequenceUI::setEnemyHit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceUI_setEnemyHit_m34123795BA5A6AE99238B825B0FC58C0ECED6D66 (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, String_t* ___enemyHit0, const RuntimeMethod* method) ;
// System.Void AttackSequenceUI::setEnemyDmg(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceUI_setEnemyDmg_m59A51AC3499D804385003696BC449249356B7D15 (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, String_t* ___enemyDmg0, const RuntimeMethod* method) ;
// System.Void AttackSequenceUI::setEnemyCrit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceUI_setEnemyCrit_m89D43FED6ABBA42D7B7B007B53D94DDB05921CAE (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, int32_t ___enemyCrit0, const RuntimeMethod* method) ;
// System.Void AttackSequenceAnimation::setPlayerAttacks(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AttackSequenceAnimation_setPlayerAttacks_mFF3B968AFDB06CD846BA1209F676FC201A20B290_inline (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, int32_t ___playerAttacks0, const RuntimeMethod* method) ;
// System.Void AttackSequenceAnimation::setEnemyAttacks(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AttackSequenceAnimation_setEnemyAttacks_mD311A57C2D8DCEB046621CF136BD6309E09B27BF_inline (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, int32_t ___enemyAttacks0, const RuntimeMethod* method) ;
// System.Void AttackSequenceAnimation::animationInit(System.Boolean,UnityEngine.GameObject,UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceAnimation_animationInit_m4C582076D198E0B639E0AC4A2395616B3F750A2B (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, bool ___playerTurn0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___UI1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playerUnit2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemyUnit3, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.EventSystems.EventSystem>()
inline EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* GameObject_GetComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m5A79A7B771326DA8781DCD5FE2B41517FA854D9D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3 (String_t* ___tag0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selected0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void Controller::setStart(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_setStart_mF0DF3CB8675BCD6C571CDFE888FC9A812D7652FA (Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* __this, bool ___start0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F (int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean AttackSequenceUI::getActive()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AttackSequenceUI_getActive_mE36BB8079AAB6BFEAE856A940305231AA5624B02_inline (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, const RuntimeMethod* method) ;
// System.Void Controller::playerPhase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_playerPhase_mBB6BD865E54B2870CCF3FCA39F54ECD1E380857D (Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* __this, const RuntimeMethod* method) ;
// System.Void Controller::enemyPhase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_enemyPhase_m560218D83A250E81715F31D652D6425925490D47 (Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* __this, const RuntimeMethod* method) ;
// System.Void Controller::allyPhase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_allyPhase_m0CF481D8259F17075FF6FDA541A8C721A5F70327 (Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* __this, const RuntimeMethod* method) ;
// System.Void Controller::armyPhase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_armyPhase_m33D39DCDC73DB123D51F1C30A150AE5ECDE10314 (Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TextControl>()
inline TextControl_t71D12CBDD07CE3910A0062CA9670EB7F7C6E0DE4* GameObject_GetComponent_TisTextControl_t71D12CBDD07CE3910A0062CA9670EB7F7C6E0DE4_m699EF7E587C1E596DB9EE28AC2D9978113A1BFAE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextControl_t71D12CBDD07CE3910A0062CA9670EB7F7C6E0DE4* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void TextControl::playerPhaseShow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextControl_playerPhaseShow_m7A0828E8430576EDC46BADB29215FE1787CA40B8 (TextControl_t71D12CBDD07CE3910A0062CA9670EB7F7C6E0DE4* __this, const RuntimeMethod* method) ;
// System.Void TextControl::enemyPhaseShow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextControl_enemyPhaseShow_m4D85B951BACFE887B32F1429DBA4A8254C26438D (TextControl_t71D12CBDD07CE3910A0062CA9670EB7F7C6E0DE4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<PlayerControl>()
inline PlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874* GameObject_GetComponent_TisPlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874_mA450A041076F9F3A34D2B74115304EA51C076016 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean PlayerControl::getWin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayerControl_getWin_m07581D3E6956E0C2DC709E75F9C99C8B998CCA71_inline (PlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<EnemyControl>()
inline EnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C* GameObject_GetComponent_TisEnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C_mD3F466505D0BA5981B478702817979D38BD7AF19 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean EnemyControl::getWin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EnemyControl_getWin_mD3B45AFA89CF51921C59F91800FFE5A0081E6394_inline (EnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C* __this, const RuntimeMethod* method) ;
// System.Void Controller::endGame(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_endGame_m3072F23130B099E46DD9C035EC9424722C082D7D (Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* __this, String_t* ___winner0, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF (String_t* ___sceneName0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void PlayerControl::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControl_Reset_m22585886C197C602F2760F074DC39DAF96407F98 (PlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874* __this, const RuntimeMethod* method) ;
// System.Void EnemyControl::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyControl_Reset_mD079EE4A4C0D64A05198D515BB8E37495229671A (EnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C* __this, const RuntimeMethod* method) ;
// System.Boolean TextControl::getTimed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TextControl_getTimed_m177EFEC927C56C5EB2F4CAC30832162F39ED059C_inline (TextControl_t71D12CBDD07CE3910A0062CA9670EB7F7C6E0DE4* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean PlayerControl::getActive()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayerControl_getActive_m10E5D0D0307DC38974116E7C291D41E0C0224C1E_inline (PlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874* __this, const RuntimeMethod* method) ;
// System.Void Controller::setEnemyStart(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Controller_setEnemyStart_m9EF8745CDDFBC33BB5B1733FB6C1311A2D574794_inline (Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* __this, bool ___enemyStart0, const RuntimeMethod* method) ;
// System.Boolean EnemyControl::getActive()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EnemyControl_getActive_m21BD9CCB836575A641BBA767CE5204D810B9C84E_inline (EnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___key0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// System.Void unit.Unit::getMoveVision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_getMoveVision_mA025A5932581A7C45B8BB358FCDFBA1D96B3D433 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) ;
// System.Void unit.Unit::killAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_killAll_m5CB4367F6EC250283FE7ED20744CB6F82E9FAB42 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<CommandControl>()
inline CommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F* GameObject_GetComponent_TisCommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F_mD718F09BE7E1BF9DC4D19A6A6966B992F912F7C6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void CommandControl::setUpCommand(UnityEngine.Vector2,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandControl_setUpCommand_mF26E88BD55546241F1A283E07404F66FD7BBD2BD (CommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___target0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cursor1, const RuntimeMethod* method) ;
// System.Boolean CommandControl::getSelected()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CommandControl_getSelected_m3C94E9B35BF87BE676E1917D0C80D9C98BABDCEC_inline (CommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.GameObject CursorSet::selectTarget(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* CursorSet_selectTarget_m7C56AD3F0D6D47F4508E5BE4BAEE5E49A09EC36E (CursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E* __this, String_t* ___type0, const RuntimeMethod* method) ;
// System.Void unit.Unit::setTarget(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Unit_setTarget_m139B852A8B736B9771EBBC7524E5CE9ABB69E558_inline (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, const RuntimeMethod* method) ;
// System.Boolean unit.Unit::getActive()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Unit_getActive_m86639388882C58CE77B4544970C888114615F821_inline (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) ;
// System.Void CursorSet::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CursorSet_Start_m0AAC494BEC98CF7539DCE08E7CA6648578C55D04 (CursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E* __this, const RuntimeMethod* method) ;
// System.Void EnemyControl::setActive(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnemyControl_setActive_mEEE23731CA7E5E4B782124D44E12EE36E0363C69_inline (EnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C* __this, bool ___active0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Controller>()
inline Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* GameObject_GetComponent_TisController_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9_mF364E4B94D1E222775B6AE8790360D39AF249537 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean Controller::getEnemyStart()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Controller_getEnemyStart_mB9266E3A3C025C240B542248467AFA158204CE4B_inline (Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* __this, const RuntimeMethod* method) ;
// System.Void EnemyControl::moveInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyControl_moveInit_m07D090D008A6BBF20A4131129BDAA6FBFC98C81E (EnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_active_mAADB8845313470CFA8C2A937543D0B004E035BA5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void EnemyControl::cycleChild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyControl_cycleChild_m305F4741982E4894AFB1994BB4CC74BEF51F4595 (EnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C* __this, const RuntimeMethod* method) ;
// System.Void EnemyControl::checkCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyControl_checkCount_mCC1365D9DDBCFE0D5BBA0CC55D788211DB3AE4EE (EnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C* __this, const RuntimeMethod* method) ;
// System.Void unit.Unit::setActive(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Unit_setActive_mBB63B3E8956968D61C6D53FCCBD0EABA00B399EF_inline (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, bool ___active0, const RuntimeMethod* method) ;
// System.Void unit.Unit::enemyMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_enemyMove_mBD7E16D059AB03C67885E84C2570158FE65577DE (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) ;
// System.Void EnemyControl::deadChild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyControl_deadChild_m24FCB1DEDF4D5BE6F9619B1943BD4D1DD8E46217 (EnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C* __this, const RuntimeMethod* method) ;
// System.Void PlayerControl::setActive(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerControl_setActive_m9B467C14A66F41E6BD30A9DF63E68BE1F15759F2_inline (PlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874* __this, bool ___active0, const RuntimeMethod* method) ;
// System.Void PlayerControl::checkCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControl_checkCount_m82EE51CB7F4BFD2A4C5ED79D12A64DBB984E1C43 (PlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874* __this, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mC4BD32145437F282CAA13E1A8685001061E79D98 (int32_t ___sceneBuildIndex0, int32_t ___mode1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Timer>()
inline Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* GameObject_GetComponent_TisTimer_t2FE811324BD2C741B8D6EBC18E20230874E35A20_m04A2D1E271ADAEEE5975D3EF890F08E834863402 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Single Timer::getTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Timer_getTime_mDB08066CE17689274FFA9AFB99C399B198E997BA_inline (Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared)(___original0, ___position1, ___rotation2, ___parent3, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void unit.Unit::move(UnityEngine.Vector3,UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_move_m715A8A5833E864069E6365181ABCB9E13560513F (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cursor1, bool ___isAttack2, const RuntimeMethod* method) ;
// System.Void unit.Unit::setAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_setAttack_mDE6030AA133D1CA6D231C550F03FEA6835552428 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) ;
// System.Void unit.Unit::setDefense()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_setDefense_m936A917F503C8E25217D65A31B1EC60FFC7FBF95 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) ;
// System.Void unit.Unit::setAtkSpd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_setAtkSpd_m49E9ACB2E221C14EE0E778C294EEE0A5D9955003 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) ;
// System.Void unit.Unit::setAccuracy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_setAccuracy_mAA55006F890ACAD23646C03489F45F6E3251F55F (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) ;
// System.Void unit.Unit::setAvoid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_setAvoid_mAABF59BAB2D722E52D555A6B3E2647C478CCD3AF (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) ;
// System.Void unit.Unit::setCritRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_setCritRate_m978575C4099887A422D239367D3D67EE0CBCF2E9 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) ;
// System.Void unit.Unit::setCritAvoid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_setCritAvoid_m3B855940700E307FB10A6ADE320840F8BF140D9E (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) ;
// System.Void unit.Unit::doubleOpp(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_doubleOpp_mC77B1EC4CBBBD16AD4AD636FBE119006FAF617F2 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, const RuntimeMethod* method) ;
// System.Int32 unit.Unit::getAttacks()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Unit_getAttacks_mA1AD69B034D9B8602C5E46EA30F761BFC4E18125_inline (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) ;
// System.Void AttackSequenceUI::sequenceInit(UnityEngine.GameObject,UnityEngine.GameObject,UnityEngine.GameObject,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceUI_sequenceInit_m353CE4BD56FAB2C0E09465DFC31CF6F8F75CD456 (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemy1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sequence2, int32_t ___playerAttacks3, int32_t ___enemyAttacks4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void unit.Unit::getAttackVision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_getAttackVision_m120FC3C1761CE00A36E6B9810C72F696B87E05D9 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject unit.Unit::enemyMoveCalc(UnityEngine.GameObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Unit_enemyMoveCalc_mE68D84B4BD785BF47B3EE5C968271066023E7382 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___players0, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Double System.Math::Pow(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265 (double ___x0, double ___y1, const RuntimeMethod* method) ;
// System.Void CursorSet::setAttacking(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CursorSet_setAttacking_m3ACC50051442094190F2AA115AFEF217EE30DD46_inline (CursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E* __this, bool ___isAttacking0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<RandomNumberGenerator>()
inline RandomNumberGenerator_tD88337DD8ABCBC5650BBB20FF9F8730F979F9FD8* GameObject_GetComponent_TisRandomNumberGenerator_tD88337DD8ABCBC5650BBB20FF9F8730F979F9FD8_m5DB892A7826F21A9A57B8B0DDF1E090B60A81BFA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RandomNumberGenerator_tD88337DD8ABCBC5650BBB20FF9F8730F979F9FD8* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Int32 RandomNumberGenerator::randomNumberGenerator(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RandomNumberGenerator_randomNumberGenerator_mC7EBFB13A643CBA1853113C0BF1E39A28DBF28D5 (RandomNumberGenerator_tD88337DD8ABCBC5650BBB20FF9F8730F979F9FD8* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___sequence0, const RuntimeMethod* method) ;
// System.Boolean unit.Unit::critCheck(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unit_critCheck_m097E1A05C8AFB2084C471B565A874FB416AF811E (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, const RuntimeMethod* method) ;
// System.Void unit.Unit::damage(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_damage_m9209DE5D78479FD8B1E8E57A416F82D7539D5C46 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___victim0, bool ___crit1, const RuntimeMethod* method) ;
// System.Void unit.Unit::takeDamage(System.Int32,UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_takeDamage_m336CBC0666A2C7FF4226E03065F98B88176656EB (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, int32_t ___damage0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___opponent1, bool ___crit2, const RuntimeMethod* method) ;
// System.Void unit.Unit::setExp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_setExp_m048B9183355BAB25D1E293F67AE27044D4A88E54 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, int32_t ___modifier0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Int32 unit.Unit::getAtkSpd()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Unit_getAtkSpd_m832871CCD61624241965A05ED8F52A3E4A081B26_inline (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) ;
// System.Int32 unit.Unit::getAvoid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Unit_getAvoid_mF30A6C0F9AB8118113A380F6EF9532A23B0FA72F_inline (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) ;
// System.Int32 unit.Unit::getDefense()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Unit_getDefense_m51DF82DB104FBEFC30EB92C7FB50D79092FAE897_inline (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) ;
// System.Int32 unit.Unit::getCritAvoid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Unit_getCritAvoid_mCB2C096C8A928B3A2F62A86D9B9214449B2D9FD1_inline (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) ;
// System.Void unit.Unit::levelUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_levelUp_m78EDD0C40AD63DD92FE82FBCA24DC424534F41B6 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ColorSwap_HeroKnight::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorSwap_HeroKnight_Awake_m9E43D2DED850AE4EE1DD327C76E5933FC7F30F2E (ColorSwap_HeroKnight_t363754B0FC89BDDD3D6D00E5D4E1FC6484639BA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_spriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___m_spriteRenderer_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_spriteRenderer_8), (void*)L_0);
		// InitColorSwapTex();
		ColorSwap_HeroKnight_InitColorSwapTex_m82D42BF738FE175796718B0274744FCCA60AB164(__this, NULL);
		// SwapDemoColors();
		ColorSwap_HeroKnight_SwapDemoColors_m0EA05729EF30373A671C454E4EF3495AC8A27394(__this, NULL);
		// }
		return;
	}
}
// System.Void ColorSwap_HeroKnight::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorSwap_HeroKnight_OnValidate_mDD978E02945E82F187CDB6C3EA3432E302B7A660 (ColorSwap_HeroKnight_t363754B0FC89BDDD3D6D00E5D4E1FC6484639BA7* __this, const RuntimeMethod* method) 
{
	{
		// if (m_init)
		bool L_0 = __this->___m_init_9;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// SwapDemoColors();
		ColorSwap_HeroKnight_SwapDemoColors_m0EA05729EF30373A671C454E4EF3495AC8A27394(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void ColorSwap_HeroKnight::SwapDemoColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorSwap_HeroKnight_SwapDemoColors_m0EA05729EF30373A671C454E4EF3495AC8A27394 (ColorSwap_HeroKnight_t363754B0FC89BDDD3D6D00E5D4E1FC6484639BA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for(int i = 0; i < m_sourceColors.Length && i < m_newColors.Length; i++)
		V_0 = 0;
		goto IL_0032;
	}

IL_0004:
	{
		// SwapColor((int)(m_sourceColors[i].r * 255.0f), m_newColors[i]);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = __this->___m_sourceColors_4;
		int32_t L_1 = V_0;
		float L_2 = ((L_0)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_1)))->___r_0;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_3 = __this->___m_newColors_5;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		ColorSwap_HeroKnight_SwapColor_m6FE021E210558258F7EE8F58956D47678162F2D5(__this, il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_2, (255.0f)))), L_6, NULL);
		// for(int i = 0; i < m_sourceColors.Length && i < m_newColors.Length; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0032:
	{
		// for(int i = 0; i < m_sourceColors.Length && i < m_newColors.Length; i++)
		int32_t L_8 = V_0;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_9 = __this->___m_sourceColors_4;
		if ((((int32_t)L_8) >= ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_10 = V_0;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_11 = __this->___m_newColors_5;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0004;
		}
	}

IL_0048:
	{
		// if(m_colorSwapTex)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12 = __this->___m_colorSwapTex_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_12, NULL);
		if (!L_13)
		{
			goto IL_0060;
		}
	}
	{
		// m_colorSwapTex.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_14 = __this->___m_colorSwapTex_6;
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_14, NULL);
	}

IL_0060:
	{
		// }
		return;
	}
}
// UnityEngine.Color ColorSwap_HeroKnight::ColorFromInt(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ColorSwap_HeroKnight_ColorFromInt_mAE4F3FCB638796C21FE2949FD4C9266056A4D2B4 (int32_t ___c0, float ___alpha1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int r = (c >> 16) & 0x000000FF;
		int32_t L_0 = ___c0;
		// int g = (c >> 8) & 0x000000FF;
		int32_t L_1 = ___c0;
		V_0 = ((int32_t)(((int32_t)(L_1>>8))&((int32_t)255)));
		// int b = c & 0x000000FF;
		int32_t L_2 = ___c0;
		V_1 = ((int32_t)(L_2&((int32_t)255)));
		// Color ret = ColorFromIntRGB(r, g, b);
		int32_t L_3 = V_0;
		int32_t L_4 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = ColorSwap_HeroKnight_ColorFromIntRGB_m68EFF5FAAEE8B40C6400C1EE47D28DA4946D6F1A(((int32_t)(((int32_t)(L_0>>((int32_t)16)))&((int32_t)255))), L_3, L_4, NULL);
		V_2 = L_5;
		// ret.a = alpha;
		float L_6 = ___alpha1;
		(&V_2)->___a_3 = L_6;
		// return ret;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = V_2;
		return L_7;
	}
}
// UnityEngine.Color ColorSwap_HeroKnight::ColorFromIntRGB(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ColorSwap_HeroKnight_ColorFromIntRGB_m68EFF5FAAEE8B40C6400C1EE47D28DA4946D6F1A (int32_t ___r0, int32_t ___g1, int32_t ___b2, const RuntimeMethod* method) 
{
	{
		// return new Color((float)r / 255.0f, (float)g / 255.0f, (float)b / 255.0f, 1.0f);
		int32_t L_0 = ___r0;
		int32_t L_1 = ___g1;
		int32_t L_2 = ___b2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_3), ((float)(((float)L_0)/(255.0f))), ((float)(((float)L_1)/(255.0f))), ((float)(((float)L_2)/(255.0f))), (1.0f), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void ColorSwap_HeroKnight::InitColorSwapTex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorSwap_HeroKnight_InitColorSwapTex_m82D42BF738FE175796718B0274744FCCA60AB164 (ColorSwap_HeroKnight_t363754B0FC89BDDD3D6D00E5D4E1FC6484639BA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD525E98BC8C8022A11AFEE9AAD35874D814DB463);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Texture2D colorSwapTex = new Texture2D(256, 1, TextureFormat.RGBA32, false, false);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A(L_0, ((int32_t)256), 1, 4, (bool)0, (bool)0, NULL);
		V_0 = L_0;
		// colorSwapTex.filterMode = FilterMode.Point;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = V_0;
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_1, 0, NULL);
		// for (int i = 0; i < colorSwapTex.width; ++i)
		V_1 = 0;
		goto IL_003f;
	}

IL_001a:
	{
		// colorSwapTex.SetPixel(i, 0, new Color(0.0f, 0.0f, 0.0f, 0.0f));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = V_0;
		int32_t L_3 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_4), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_2, L_3, 0, L_4, NULL);
		// for (int i = 0; i < colorSwapTex.width; ++i)
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_003f:
	{
		// for (int i = 0; i < colorSwapTex.width; ++i)
		int32_t L_6 = V_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = V_0;
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_7);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_001a;
		}
	}
	{
		// colorSwapTex.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = V_0;
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_9, NULL);
		// m_spriteRenderer.material.SetTexture("_SwapTex", colorSwapTex);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___m_spriteRenderer_8;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11;
		L_11 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_10, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12 = V_0;
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_11, _stringLiteralD525E98BC8C8022A11AFEE9AAD35874D814DB463, L_12, NULL);
		// m_spriteColors = new Color[colorSwapTex.width];
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = V_0;
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_13);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_15 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var, (uint32_t)L_14);
		__this->___m_spriteColors_7 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_spriteColors_7), (void*)L_15);
		// m_colorSwapTex = colorSwapTex;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = V_0;
		__this->___m_colorSwapTex_6 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_colorSwapTex_6), (void*)L_16);
		// m_init = true;
		__this->___m_init_9 = (bool)1;
		// }
		return;
	}
}
// System.Void ColorSwap_HeroKnight::SwapColor(System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorSwap_HeroKnight_SwapColor_m6FE021E210558258F7EE8F58956D47678162F2D5 (ColorSwap_HeroKnight_t363754B0FC89BDDD3D6D00E5D4E1FC6484639BA7* __this, int32_t ___index0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, const RuntimeMethod* method) 
{
	{
		// if(index >= 0 && index < 256)
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = ___index0;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)256))))
		{
			goto IL_0027;
		}
	}
	{
		// m_spriteColors[index] = color;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_2 = __this->___m_spriteColors_7;
		int32_t L_3 = ___index0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___color1;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_4);
		// m_colorSwapTex.SetPixel(index, 0, color);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = __this->___m_colorSwapTex_6;
		int32_t L_6 = ___index0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___color1;
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_5, L_6, 0, L_7, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void ColorSwap_HeroKnight::SwapColors(System.Collections.Generic.List`1<System.Int32>,System.Collections.Generic.List`1<UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorSwap_HeroKnight_SwapColors_m7C876443C586EF4B09C5128463BE3F7B3721435D (ColorSwap_HeroKnight_t363754B0FC89BDDD3D6D00E5D4E1FC6484639BA7* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___indexes0, List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* ___colors1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < indexes.Count; ++i)
		V_0 = 0;
		goto IL_003b;
	}

IL_0004:
	{
		// m_spriteColors[indexes[i]] = colors[i];
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = __this->___m_spriteColors_7;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = ___indexes0;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_1, L_2, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_4 = ___colors1;
		int32_t L_5 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F(L_4, L_5, List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F_RuntimeMethod_var);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_6);
		// m_colorSwapTex.SetPixel(indexes[i], 0, colors[i]);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = __this->___m_colorSwapTex_6;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_8 = ___indexes0;
		int32_t L_9 = V_0;
		int32_t L_10;
		L_10 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_8, L_9, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_11 = ___colors1;
		int32_t L_12 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F(L_11, L_12, List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F_RuntimeMethod_var);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_7, L_10, 0, L_13, NULL);
		// for (int i = 0; i < indexes.Count; ++i)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_003b:
	{
		// for (int i = 0; i < indexes.Count; ++i)
		int32_t L_15 = V_0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_16 = ___indexes0;
		int32_t L_17;
		L_17 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_16, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0004;
		}
	}
	{
		// m_colorSwapTex.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = __this->___m_colorSwapTex_6;
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_18, NULL);
		// }
		return;
	}
}
// System.Void ColorSwap_HeroKnight::ClearColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorSwap_HeroKnight_ClearColor_mF7CFBDD5EE68FB6A667A3190BA23FE12864BBA44 (ColorSwap_HeroKnight_t363754B0FC89BDDD3D6D00E5D4E1FC6484639BA7* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color c = new Color(0.0f, 0.0f, 0.0f, 0.0f);
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_0), (0.0f), (0.0f), (0.0f), (0.0f), NULL);
		// m_spriteColors[index] = c;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = __this->___m_spriteColors_7;
		int32_t L_1 = ___index0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = V_0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_2);
		// m_colorSwapTex.SetPixel(index, 0, c);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = __this->___m_colorSwapTex_6;
		int32_t L_4 = ___index0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = V_0;
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_3, L_4, 0, L_5, NULL);
		// }
		return;
	}
}
// System.Void ColorSwap_HeroKnight::SwapAllSpritesColorsTemporarily(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorSwap_HeroKnight_SwapAllSpritesColorsTemporarily_mE51521F67571F5E8F2AF70BDE5948B62D07BF121 (ColorSwap_HeroKnight_t363754B0FC89BDDD3D6D00E5D4E1FC6484639BA7* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < m_colorSwapTex.width; ++i)
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		// m_colorSwapTex.SetPixel(i, 0, color);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___m_colorSwapTex_6;
		int32_t L_1 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___color0;
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_0, L_1, 0, L_2, NULL);
		// for (int i = 0; i < m_colorSwapTex.width; ++i)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0016:
	{
		// for (int i = 0; i < m_colorSwapTex.width; ++i)
		int32_t L_4 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = __this->___m_colorSwapTex_6;
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// m_colorSwapTex.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = __this->___m_colorSwapTex_6;
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_7, NULL);
		// }
		return;
	}
}
// System.Void ColorSwap_HeroKnight::ResetAllSpritesColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorSwap_HeroKnight_ResetAllSpritesColors_mE3EE568F45E7376028435C1E47CD10E24DACB25C (ColorSwap_HeroKnight_t363754B0FC89BDDD3D6D00E5D4E1FC6484639BA7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < m_colorSwapTex.width; ++i)
		V_0 = 0;
		goto IL_0021;
	}

IL_0004:
	{
		// m_colorSwapTex.SetPixel(i, 0, m_spriteColors[i]);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___m_colorSwapTex_6;
		int32_t L_1 = V_0;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_2 = __this->___m_spriteColors_7;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_0, L_1, 0, L_5, NULL);
		// for (int i = 0; i < m_colorSwapTex.width; ++i)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0021:
	{
		// for (int i = 0; i < m_colorSwapTex.width; ++i)
		int32_t L_7 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = __this->___m_colorSwapTex_6;
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_8);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// m_colorSwapTex.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->___m_colorSwapTex_6;
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_10, NULL);
		// }
		return;
	}
}
// System.Void ColorSwap_HeroKnight::ClearAllSpritesColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorSwap_HeroKnight_ClearAllSpritesColors_m7F235839B5368FFACC84533C8DD3F937FF685363 (ColorSwap_HeroKnight_t363754B0FC89BDDD3D6D00E5D4E1FC6484639BA7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < m_colorSwapTex.width; ++i)
		V_0 = 0;
		goto IL_0053;
	}

IL_0004:
	{
		// m_colorSwapTex.SetPixel(i, 0, new Color(0.0f, 0.0f, 0.0f, 0.0f));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___m_colorSwapTex_6;
		int32_t L_1 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_2), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_0, L_1, 0, L_2, NULL);
		// m_spriteColors[i] = new Color(0.0f, 0.0f, 0.0f, 0.0f);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_3 = __this->___m_spriteColors_7;
		int32_t L_4 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_5), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_5);
		// for (int i = 0; i < m_colorSwapTex.width; ++i)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0053:
	{
		// for (int i = 0; i < m_colorSwapTex.width; ++i)
		int32_t L_7 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = __this->___m_colorSwapTex_6;
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_8);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// m_colorSwapTex.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->___m_colorSwapTex_6;
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_10, NULL);
		// }
		return;
	}
}
// System.Void ColorSwap_HeroKnight::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorSwap_HeroKnight__ctor_mCEF197BEA4F0966956964B2700461F429AB2854E (ColorSwap_HeroKnight_t363754B0FC89BDDD3D6D00E5D4E1FC6484639BA7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Attack::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attack_Update_m1021FE4BBF02FC9434CD08801023326A46EE0C90 (Attack_t2F0CF0A8114E4EFF1BF51894AD55F40B8849CD14* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E_m6F460C0B4AEBF8C0FA26BCCB4244C3C191FBE964_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (cursor.GetComponent<CursorSet>().getTempcharacter())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___cursor_5;
		CursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E* L_1;
		L_1 = GameObject_GetComponent_TisCursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E_m6F460C0B4AEBF8C0FA26BCCB4244C3C191FBE964(L_0, GameObject_GetComponent_TisCursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E_m6F460C0B4AEBF8C0FA26BCCB4244C3C191FBE964_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = CursorSet_getTempcharacter_m5A1F2203F432DF921B7F495C285286EAC55F3639_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// player = cursor.GetComponent<CursorSet>().getTempcharacter();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___cursor_5;
		CursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E* L_5;
		L_5 = GameObject_GetComponent_TisCursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E_m6F460C0B4AEBF8C0FA26BCCB4244C3C191FBE964(L_4, GameObject_GetComponent_TisCursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E_m6F460C0B4AEBF8C0FA26BCCB4244C3C191FBE964_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = CursorSet_getTempcharacter_m5A1F2203F432DF921B7F495C285286EAC55F3639_inline(L_5, NULL);
		__this->___player_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_4), (void*)L_6);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Attack::onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attack_onClick_m28C18441BE26BEF0E935177F0994D92FB8154A37 (Attack_t2F0CF0A8114E4EFF1BF51894AD55F40B8849CD14* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F_m38D3DB93195924ABA99F76D561879EB33C5651DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.GetComponentInParent<CommandControl>().setSelected(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F* L_1;
		L_1 = Component_GetComponentInParent_TisCommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F_m38D3DB93195924ABA99F76D561879EB33C5651DA(L_0, Component_GetComponentInParent_TisCommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F_m38D3DB93195924ABA99F76D561879EB33C5651DA_RuntimeMethod_var);
		CommandControl_setSelected_m108B17C71E445DB0C48385F08146B815C4443C17_inline(L_1, (bool)1, NULL);
		// transform.GetComponentInParent<CommandControl>().Reset();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F* L_3;
		L_3 = Component_GetComponentInParent_TisCommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F_m38D3DB93195924ABA99F76D561879EB33C5651DA(L_2, Component_GetComponentInParent_TisCommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F_m38D3DB93195924ABA99F76D561879EB33C5651DA_RuntimeMethod_var);
		CommandControl_Reset_mDA6678BBB6E9BC9EC6352254525EAC170AE94662(L_3, NULL);
		// player.GetComponent<Unit>().attackInit("Enemy", cursor.transform.position - offset, cursor);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___player_4;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_5;
		L_5 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_4, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___cursor_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___offset_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_8, L_9, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___cursor_5;
		Unit_attackInit_m3614FC80B96EA35A6823EF696562BC3CB5C7E31D(L_5, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void Attack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attack__ctor_mA801C346E8AC75760E481503AFB4DAD2D4053F6B (Attack_t2F0CF0A8114E4EFF1BF51894AD55F40B8849CD14* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AttackSequenceAnimation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceAnimation_Start_m7EB89515255C597B77EE2040E2AFD9212E8AF130 (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// moveBack = false;
		__this->___moveBack_11 = (bool)0;
		// playerPos = player.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___player_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		__this->___playerPos_12 = L_2;
		// enemyPos = enemy.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___enemy_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		__this->___enemyPos_13 = L_5;
		// count = 0;
		__this->___count_14 = 0;
		// playerDead = false;
		__this->___playerDead_18 = (bool)0;
		// enemyDead = false;
		__this->___enemyDead_19 = (bool)0;
		// playerRend = player.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___player_7;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7;
		L_7 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_6, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___playerRend_23 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerRend_23), (void*)L_7);
		// enemyRend = enemy.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___enemy_6;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9;
		L_9 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_8, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___enemyRend_24 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemyRend_24), (void*)L_9);
		// }
		return;
	}
}
// System.Void AttackSequenceAnimation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceAnimation_Update_m20112196DD8C6EC23A5CAF2E2930F4D053E508BB (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB236FE2BF72D00A5CFAFFB9CA58750A49DA02B2);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (enemy.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).IsName("End"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___enemy_6;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_0, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_2;
		L_2 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_1, 0, NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralAB236FE2BF72D00A5CFAFFB9CA58750A49DA02B2, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// UI.GetComponent<AttackSequenceUI>().Reset();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___UI_17;
		AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* L_5;
		L_5 = GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403(L_4, GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403_RuntimeMethod_var);
		AttackSequenceUI_Reset_mE29841C620C29CB524E3708D9D71CD2E2C5010BB(L_5, NULL);
	}

IL_0030:
	{
		// if (player.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).IsName("End"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___player_7;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7;
		L_7 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_6, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_8;
		L_8 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_7, 0, NULL);
		V_0 = L_8;
		bool L_9;
		L_9 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralAB236FE2BF72D00A5CFAFFB9CA58750A49DA02B2, NULL);
		if (!L_9)
		{
			goto IL_0060;
		}
	}
	{
		// UI.GetComponent<AttackSequenceUI>().Reset();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___UI_17;
		AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* L_11;
		L_11 = GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403(L_10, GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403_RuntimeMethod_var);
		AttackSequenceUI_Reset_mE29841C620C29CB524E3708D9D71CD2E2C5010BB(L_11, NULL);
	}

IL_0060:
	{
		// if (UI.GetComponent<AttackSequenceUI>().getHpPlayer() < 1 && !playerDead)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___UI_17;
		AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* L_13;
		L_13 = GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403(L_12, GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403_RuntimeMethod_var);
		int32_t L_14;
		L_14 = AttackSequenceUI_getHpPlayer_mCAB232BFA1BAF0B684573AB99AC42E02DBD6FAC0_inline(L_13, NULL);
		if ((((int32_t)L_14) >= ((int32_t)1)))
		{
			goto IL_0082;
		}
	}
	{
		bool L_15 = __this->___playerDead_18;
		if (L_15)
		{
			goto IL_0082;
		}
	}
	{
		// playerDeath();
		AttackSequenceAnimation_playerDeath_mDF64FD70E07A4943DEDA9DCFE1F3D1BFD0B6481A(__this, NULL);
		return;
	}

IL_0082:
	{
		// else if (UI.GetComponent<AttackSequenceUI>().getHpEnemy() < 1 && !enemyDead)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___UI_17;
		AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* L_17;
		L_17 = GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403(L_16, GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403_RuntimeMethod_var);
		int32_t L_18;
		L_18 = AttackSequenceUI_getHpEnemy_mF118FC69B871959CC56F4C75DAD99CFEC32D228D_inline(L_17, NULL);
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_00a3;
		}
	}
	{
		bool L_19 = __this->___enemyDead_19;
		if (L_19)
		{
			goto IL_00a3;
		}
	}
	{
		// enemyDeath();
		AttackSequenceAnimation_enemyDeath_m20507DD0B25074A992FB06597EFCA53271372C94(__this, NULL);
	}

IL_00a3:
	{
		// }
		return;
	}
}
// System.Void AttackSequenceAnimation::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceAnimation_FixedUpdate_m96B4FBF3A48102805CD84360B35726273BF428C6 (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, const RuntimeMethod* method) 
{
	{
		// if (init)
		bool L_0 = __this->___init_9;
		if (!L_0)
		{
			goto IL_0063;
		}
	}
	{
		// frame++;
		int32_t L_1 = __this->___frame_5;
		__this->___frame_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// if (frame%frameSkip == 0 && playerTurn && playerAttacks > 0)
		int32_t L_2 = __this->___frame_5;
		int32_t L_3 = __this->___frameSkip_4;
		if (((int32_t)(L_2%L_3)))
		{
			goto IL_003d;
		}
	}
	{
		bool L_4 = __this->___playerTurn_8;
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_5 = __this->___playerAttacks_15;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		// playerMove();
		AttackSequenceAnimation_playerMove_m2E17975D89849801E140AFA19B5FC746DB3A77AB(__this, NULL);
		return;
	}

IL_003d:
	{
		// else if (frame%frameSkip == 0 && !playerTurn && enemyAttacks > 0)
		int32_t L_6 = __this->___frame_5;
		int32_t L_7 = __this->___frameSkip_4;
		if (((int32_t)(L_6%L_7)))
		{
			goto IL_0063;
		}
	}
	{
		bool L_8 = __this->___playerTurn_8;
		if (L_8)
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_9 = __this->___enemyAttacks_16;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		// enemyMove();
		AttackSequenceAnimation_enemyMove_m80FF3377D71E7CFAE4D13F609DB47AE387D9084A(__this, NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void AttackSequenceAnimation::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceAnimation_LateUpdate_mFA7E13FB7005213AB85C6B291C261CE372A2FC47 (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (start)
		bool L_0 = __this->___start_25;
		if (!L_0)
		{
			goto IL_00b4;
		}
	}
	{
		// if (playerUnit.CompareTag("Player"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___playerUnit_20;
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_005d;
		}
	}
	{
		// playerRend.color = new Color(255, 255, 255);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___playerRend_23;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_4), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_3, L_4, NULL);
		// enemyRend.color = new Color(255, 0, 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = __this->___enemyRend_24;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_6), (255.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_5, L_6, NULL);
		goto IL_00ad;
	}

IL_005d:
	{
		// else if (playerUnit.CompareTag("Enemy"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___playerUnit_20;
		bool L_8;
		L_8 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_7, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_8)
		{
			goto IL_00ad;
		}
	}
	{
		// playerRend.color = new Color(255, 0, 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___playerRend_23;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		memset((&L_10), 0, sizeof(L_10));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_10), (255.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_9, L_10, NULL);
		// enemyRend.color = new Color(255, 255, 255);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___enemyRend_24;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_12), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_11, L_12, NULL);
	}

IL_00ad:
	{
		// start = false;
		__this->___start_25 = (bool)0;
	}

IL_00b4:
	{
		// }
		return;
	}
}
// System.Void AttackSequenceAnimation::animationInit(System.Boolean,UnityEngine.GameObject,UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceAnimation_animationInit_m4C582076D198E0B639E0AC4A2395616B3F750A2B (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, bool ___playerTurn0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___UI1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playerUnit2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemyUnit3, const RuntimeMethod* method) 
{
	{
		// this.playerTurn = playerTurn;
		bool L_0 = ___playerTurn0;
		__this->___playerTurn_8 = L_0;
		// init = true;
		__this->___init_9 = (bool)1;
		// this.UI = UI;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___UI1;
		__this->___UI_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UI_17), (void*)L_1);
		// this.playerUnit = playerUnit;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___playerUnit2;
		__this->___playerUnit_20 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerUnit_20), (void*)L_2);
		// this.enemyUnit = enemyUnit;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___enemyUnit3;
		__this->___enemyUnit_21 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemyUnit_21), (void*)L_3);
		// start = true;
		__this->___start_25 = (bool)1;
		// }
		return;
	}
}
// System.Void AttackSequenceAnimation::playerMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceAnimation_playerMove_m2E17975D89849801E140AFA19B5FC746DB3A77AB (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FF0F8B5E46BCF71742AFBED52DBA14783AC1244);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD97B0577F464078484CF8808A78E5C0B47BDF09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!moveBack)
		bool L_0 = __this->___moveBack_11;
		if (L_0)
		{
			goto IL_00eb;
		}
	}
	{
		// if (getDistance() < distance)
		float L_1;
		L_1 = AttackSequenceAnimation_getDistance_mD71EBAE115F221D2BE51F1F19F1AC085DF4DAD78(__this, NULL);
		float L_2 = __this->___distance_10;
		if ((!(((float)L_1) < ((float)L_2))))
		{
			goto IL_00ab;
		}
	}
	{
		// hit = playerUnit.GetComponent<Unit>().hitCheck(enemyUnit);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___playerUnit_20;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_4;
		L_4 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_3, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___enemyUnit_21;
		bool L_6;
		L_6 = Unit_hitCheck_m205E77285FAFBD23242AB3FD5F3E983AC394FD11(L_4, L_5, NULL);
		__this->___hit_22 = L_6;
		// player.GetComponent<Animator>().SetBool("isRunning", false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___player_7;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8;
		L_8 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_7, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_8, _stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5, (bool)0, NULL);
		// moveBack = true;
		__this->___moveBack_11 = (bool)1;
		// if (hit)
		bool L_9 = __this->___hit_22;
		if (!L_9)
		{
			goto IL_0094;
		}
	}
	{
		// player.GetComponent<Animator>().SetTrigger("isAttacking");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___player_7;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11;
		L_11 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_10, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_11, _stringLiteralD97B0577F464078484CF8808A78E5C0B47BDF09A, NULL);
		// UI.GetComponent<AttackSequenceUI>().setEnemyHp(enemyUnit.GetComponent<Unit>().getHp());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___UI_17;
		AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* L_13;
		L_13 = GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403(L_12, GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___enemyUnit_21;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_15;
		L_15 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_14, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		int32_t L_16;
		L_16 = Unit_getHp_m2B1D935A2EA64A394015C685C4B70CC6758341E9(L_15, NULL);
		AttackSequenceUI_setEnemyHp_m03A1EFCFDC06D4C21B8962F2799DA9224DEEFC89(L_13, L_16, NULL);
		goto IL_00eb;
	}

IL_0094:
	{
		// UI.GetComponent<AttackSequenceUI>().setMiss("MISS");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___UI_17;
		AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* L_18;
		L_18 = GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403(L_17, GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403_RuntimeMethod_var);
		AttackSequenceUI_setMiss_m0A8117BE2C1667F861591BF652F727B57309B22B(L_18, _stringLiteral0FF0F8B5E46BCF71742AFBED52DBA14783AC1244, NULL);
		goto IL_00eb;
	}

IL_00ab:
	{
		// UI.GetComponent<AttackSequenceUI>().setMiss("");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___UI_17;
		AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* L_20;
		L_20 = GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403(L_19, GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403_RuntimeMethod_var);
		AttackSequenceUI_setMiss_m0A8117BE2C1667F861591BF652F727B57309B22B(L_20, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// player.GetComponent<Animator>().SetBool("isRunning", true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___player_7;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_22;
		L_22 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_21, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_22, _stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5, (bool)1, NULL);
		// player.transform.Translate(Vector3.right);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___player_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_24, L_25, NULL);
	}

IL_00eb:
	{
		// if (player.transform.position == playerPos)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___player_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = __this->___playerPos_12;
		bool L_30;
		L_30 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_28, L_29, NULL);
		if (!L_30)
		{
			goto IL_0125;
		}
	}
	{
		// moveBack = true;
		__this->___moveBack_11 = (bool)1;
		// player.GetComponent<Animator>().SetBool("isRunning", false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___player_7;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_32;
		L_32 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_31, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_32, _stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5, (bool)0, NULL);
	}

IL_0125:
	{
		// if (moveBack && player.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).IsName("Idle"))
		bool L_33 = __this->___moveBack_11;
		if (!L_33)
		{
			goto IL_0196;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = __this->___player_7;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_35;
		L_35 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_34, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_36;
		L_36 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_35, 0, NULL);
		V_0 = L_36;
		bool L_37;
		L_37 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA, NULL);
		if (!L_37)
		{
			goto IL_0196;
		}
	}
	{
		// player.transform.Rotate(0, 180, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = __this->___player_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_38, NULL);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_39, (0.0f), (180.0f), (0.0f), NULL);
		// player.transform.Translate(Vector3.right);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___player_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_41, L_42, NULL);
		// moveBack = false;
		__this->___moveBack_11 = (bool)0;
		// count++;
		int32_t L_43 = __this->___count_14;
		__this->___count_14 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_0196:
	{
		// if (count == 2)
		int32_t L_44 = __this->___count_14;
		if ((!(((uint32_t)L_44) == ((uint32_t)2))))
		{
			goto IL_01d0;
		}
	}
	{
		// count = 0;
		__this->___count_14 = 0;
		// playerTurn = false;
		__this->___playerTurn_8 = (bool)0;
		// playerAttacks--;
		int32_t L_45 = __this->___playerAttacks_15;
		__this->___playerAttacks_15 = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
		// if (playerAttacks > enemyAttacks)
		int32_t L_46 = __this->___playerAttacks_15;
		int32_t L_47 = __this->___enemyAttacks_16;
		if ((((int32_t)L_46) <= ((int32_t)L_47)))
		{
			goto IL_01d0;
		}
	}
	{
		// playerTurn = true;
		__this->___playerTurn_8 = (bool)1;
	}

IL_01d0:
	{
		// }
		return;
	}
}
// System.Void AttackSequenceAnimation::enemyMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceAnimation_enemyMove_m80FF3377D71E7CFAE4D13F609DB47AE387D9084A (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FF0F8B5E46BCF71742AFBED52DBA14783AC1244);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD97B0577F464078484CF8808A78E5C0B47BDF09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!moveBack)
		bool L_0 = __this->___moveBack_11;
		if (L_0)
		{
			goto IL_00eb;
		}
	}
	{
		// if (getDistance() < distance)
		float L_1;
		L_1 = AttackSequenceAnimation_getDistance_mD71EBAE115F221D2BE51F1F19F1AC085DF4DAD78(__this, NULL);
		float L_2 = __this->___distance_10;
		if ((!(((float)L_1) < ((float)L_2))))
		{
			goto IL_00ab;
		}
	}
	{
		// hit = enemyUnit.GetComponent<Unit>().hitCheck(playerUnit);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___enemyUnit_21;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_4;
		L_4 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_3, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___playerUnit_20;
		bool L_6;
		L_6 = Unit_hitCheck_m205E77285FAFBD23242AB3FD5F3E983AC394FD11(L_4, L_5, NULL);
		__this->___hit_22 = L_6;
		// enemy.GetComponent<Animator>().SetBool("isRunning", false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___enemy_6;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8;
		L_8 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_7, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_8, _stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5, (bool)0, NULL);
		// moveBack = true;
		__this->___moveBack_11 = (bool)1;
		// if (hit)
		bool L_9 = __this->___hit_22;
		if (!L_9)
		{
			goto IL_0094;
		}
	}
	{
		// enemy.GetComponent<Animator>().SetTrigger("isAttacking");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___enemy_6;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11;
		L_11 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_10, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_11, _stringLiteralD97B0577F464078484CF8808A78E5C0B47BDF09A, NULL);
		// UI.GetComponent<AttackSequenceUI>().setPlayerHp(playerUnit.GetComponent<Unit>().getHp());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___UI_17;
		AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* L_13;
		L_13 = GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403(L_12, GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___playerUnit_20;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_15;
		L_15 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_14, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		int32_t L_16;
		L_16 = Unit_getHp_m2B1D935A2EA64A394015C685C4B70CC6758341E9(L_15, NULL);
		AttackSequenceUI_setPlayerHp_mCD7E9EE0006B4A3D65CDC4A20F4D9F648953FD74(L_13, L_16, NULL);
		goto IL_00eb;
	}

IL_0094:
	{
		// UI.GetComponent<AttackSequenceUI>().setMiss("MISS");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___UI_17;
		AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* L_18;
		L_18 = GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403(L_17, GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403_RuntimeMethod_var);
		AttackSequenceUI_setMiss_m0A8117BE2C1667F861591BF652F727B57309B22B(L_18, _stringLiteral0FF0F8B5E46BCF71742AFBED52DBA14783AC1244, NULL);
		goto IL_00eb;
	}

IL_00ab:
	{
		// UI.GetComponent<AttackSequenceUI>().setMiss("");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___UI_17;
		AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* L_20;
		L_20 = GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403(L_19, GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403_RuntimeMethod_var);
		AttackSequenceUI_setMiss_m0A8117BE2C1667F861591BF652F727B57309B22B(L_20, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// enemy.GetComponent<Animator>().SetBool("isRunning", true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___enemy_6;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_22;
		L_22 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_21, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_22, _stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5, (bool)1, NULL);
		// enemy.transform.Translate(Vector3.left);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___enemy_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_24, L_25, NULL);
	}

IL_00eb:
	{
		// if (enemy.transform.position == enemyPos)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___enemy_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = __this->___enemyPos_13;
		bool L_30;
		L_30 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_28, L_29, NULL);
		if (!L_30)
		{
			goto IL_0125;
		}
	}
	{
		// moveBack = true;
		__this->___moveBack_11 = (bool)1;
		// enemy.GetComponent<Animator>().SetBool("isRunning", false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___enemy_6;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_32;
		L_32 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_31, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_32, _stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5, (bool)0, NULL);
	}

IL_0125:
	{
		// if (moveBack && enemy.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).IsName("Idle"))
		bool L_33 = __this->___moveBack_11;
		if (!L_33)
		{
			goto IL_0196;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = __this->___enemy_6;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_35;
		L_35 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_34, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_36;
		L_36 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_35, 0, NULL);
		V_0 = L_36;
		bool L_37;
		L_37 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA, NULL);
		if (!L_37)
		{
			goto IL_0196;
		}
	}
	{
		// enemy.transform.Rotate(0, 180, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = __this->___enemy_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_38, NULL);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_39, (0.0f), (180.0f), (0.0f), NULL);
		// enemy.transform.Translate(Vector3.left);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___enemy_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_41, L_42, NULL);
		// moveBack = false;
		__this->___moveBack_11 = (bool)0;
		// count++;
		int32_t L_43 = __this->___count_14;
		__this->___count_14 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_0196:
	{
		// if (count == 2)
		int32_t L_44 = __this->___count_14;
		if ((!(((uint32_t)L_44) == ((uint32_t)2))))
		{
			goto IL_01d0;
		}
	}
	{
		// count = 0;
		__this->___count_14 = 0;
		// playerTurn = true;
		__this->___playerTurn_8 = (bool)1;
		// enemyAttacks--;
		int32_t L_45 = __this->___enemyAttacks_16;
		__this->___enemyAttacks_16 = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
		// if (enemyAttacks > playerAttacks)
		int32_t L_46 = __this->___enemyAttacks_16;
		int32_t L_47 = __this->___playerAttacks_15;
		if ((((int32_t)L_46) <= ((int32_t)L_47)))
		{
			goto IL_01d0;
		}
	}
	{
		// playerTurn = false;
		__this->___playerTurn_8 = (bool)0;
	}

IL_01d0:
	{
		// }
		return;
	}
}
// System.Void AttackSequenceAnimation::playerDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceAnimation_playerDeath_mDF64FD70E07A4943DEDA9DCFE1F3D1BFD0B6481A (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D051A1C6B5D7B20CF5BE518E0307D11548295E8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player.GetComponent<Animator>().SetTrigger("death");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___player_7;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_0, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_1, _stringLiteral4D051A1C6B5D7B20CF5BE518E0307D11548295E8, NULL);
		// playerDead = true;
		__this->___playerDead_18 = (bool)1;
		// }
		return;
	}
}
// System.Void AttackSequenceAnimation::enemyDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceAnimation_enemyDeath_m20507DD0B25074A992FB06597EFCA53271372C94 (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D051A1C6B5D7B20CF5BE518E0307D11548295E8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemy.GetComponent<Animator>().SetTrigger("death");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___enemy_6;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_0, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_1, _stringLiteral4D051A1C6B5D7B20CF5BE518E0307D11548295E8, NULL);
		// enemyDead = true;
		__this->___enemyDead_19 = (bool)1;
		// }
		return;
	}
}
// System.Single AttackSequenceAnimation::getDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AttackSequenceAnimation_getDistance_mD71EBAE115F221D2BE51F1F19F1AC085DF4DAD78 (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, const RuntimeMethod* method) 
{
	{
		// distance = Vector3.Distance(player.transform.position, enemy.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___player_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___enemy_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_2, L_5, NULL);
		// return (distance);
		return L_6;
	}
}
// System.Int32 AttackSequenceAnimation::getPlayerAttacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AttackSequenceAnimation_getPlayerAttacks_m64A7CC3900FCBBC3F3EDD0868CC55FF8F92D7D3E (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, const RuntimeMethod* method) 
{
	{
		// return (playerAttacks);
		int32_t L_0 = __this->___playerAttacks_15;
		return L_0;
	}
}
// System.Void AttackSequenceAnimation::setPlayerAttacks(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceAnimation_setPlayerAttacks_mFF3B968AFDB06CD846BA1209F676FC201A20B290 (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, int32_t ___playerAttacks0, const RuntimeMethod* method) 
{
	{
		// this.playerAttacks = playerAttacks;
		int32_t L_0 = ___playerAttacks0;
		__this->___playerAttacks_15 = L_0;
		// }
		return;
	}
}
// System.Int32 AttackSequenceAnimation::getEnemyAttacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AttackSequenceAnimation_getEnemyAttacks_mD5EEA4304D147633B552A932864963D722CC2F51 (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, const RuntimeMethod* method) 
{
	{
		// return (enemyAttacks);
		int32_t L_0 = __this->___enemyAttacks_16;
		return L_0;
	}
}
// System.Void AttackSequenceAnimation::setEnemyAttacks(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceAnimation_setEnemyAttacks_mD311A57C2D8DCEB046621CF136BD6309E09B27BF (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, int32_t ___enemyAttacks0, const RuntimeMethod* method) 
{
	{
		// this.enemyAttacks = enemyAttacks;
		int32_t L_0 = ___enemyAttacks0;
		__this->___enemyAttacks_16 = L_0;
		// }
		return;
	}
}
// System.Boolean AttackSequenceAnimation::getInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AttackSequenceAnimation_getInit_m59D6328CC7150C00F661319F7544940534D08311 (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, const RuntimeMethod* method) 
{
	{
		// return (init);
		bool L_0 = __this->___init_9;
		return L_0;
	}
}
// System.Void AttackSequenceAnimation::setInit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceAnimation_setInit_mB13092DF80D80BFC27F09501672A69C80D7A8E3B (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, bool ___init0, const RuntimeMethod* method) 
{
	{
		// this.init = init;
		bool L_0 = ___init0;
		__this->___init_9 = L_0;
		// }
		return;
	}
}
// System.Void AttackSequenceAnimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceAnimation__ctor_m360D31ABB3327BB9B2D3EA04B573ECA50CD756FB (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AttackSequenceUI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceUI_Update_m4293B4044691F22C38E22BDFA95B365871E9077A (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD_m07C0CB1A9BF0ED24CBC601854EACF7649159FF5A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (attackSequence.GetComponent<AttackSequenceAnimation>().getPlayerAttacks() == 0 && attackSequence.GetComponent<AttackSequenceAnimation>().getEnemyAttacks() == 0 && attackSequence.GetComponent<AttackSequenceAnimation>().getInit())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___attackSequence_15;
		AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* L_1;
		L_1 = GameObject_GetComponent_TisAttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD_m07C0CB1A9BF0ED24CBC601854EACF7649159FF5A(L_0, GameObject_GetComponent_TisAttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD_m07C0CB1A9BF0ED24CBC601854EACF7649159FF5A_RuntimeMethod_var);
		int32_t L_2;
		L_2 = AttackSequenceAnimation_getPlayerAttacks_m64A7CC3900FCBBC3F3EDD0868CC55FF8F92D7D3E_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_003c;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___attackSequence_15;
		AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* L_4;
		L_4 = GameObject_GetComponent_TisAttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD_m07C0CB1A9BF0ED24CBC601854EACF7649159FF5A(L_3, GameObject_GetComponent_TisAttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD_m07C0CB1A9BF0ED24CBC601854EACF7649159FF5A_RuntimeMethod_var);
		int32_t L_5;
		L_5 = AttackSequenceAnimation_getEnemyAttacks_mD5EEA4304D147633B552A932864963D722CC2F51_inline(L_4, NULL);
		if (L_5)
		{
			goto IL_003c;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___attackSequence_15;
		AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* L_7;
		L_7 = GameObject_GetComponent_TisAttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD_m07C0CB1A9BF0ED24CBC601854EACF7649159FF5A(L_6, GameObject_GetComponent_TisAttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD_m07C0CB1A9BF0ED24CBC601854EACF7649159FF5A_RuntimeMethod_var);
		bool L_8;
		L_8 = AttackSequenceAnimation_getInit_m59D6328CC7150C00F661319F7544940534D08311_inline(L_7, NULL);
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		// Reset();
		AttackSequenceUI_Reset_mE29841C620C29CB524E3708D9D71CD2E2C5010BB(__this, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void AttackSequenceUI::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceUI_Reset_mE29841C620C29CB524E3708D9D71CD2E2C5010BB (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// Destroy(attackSequence);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___attackSequence_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_1, NULL);
		// frame = 0;
		__this->___frame_18 = 0;
		// if (player)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___player_16;
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		// player.GetComponent<Unit>().Reset(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___player_16;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_5;
		L_5 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_4, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		Unit_Reset_m77910D75557B5C6F60F722005D8FF6C2DD17A27B(L_5, (bool)1, NULL);
	}

IL_003c:
	{
		// if (enemy)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___enemy_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		if (!L_7)
		{
			goto IL_005a;
		}
	}
	{
		// enemy.GetComponent<Unit>().Reset(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___enemy_17;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_9;
		L_9 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_8, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		Unit_Reset_m77910D75557B5C6F60F722005D8FF6C2DD17A27B(L_9, (bool)0, NULL);
	}

IL_005a:
	{
		// attackSequence = null;
		__this->___attackSequence_15 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attackSequence_15), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// player = null;
		__this->___player_16 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_16), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// enemy = null;
		__this->___enemy_17 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemy_17), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// setActive(false);
		AttackSequenceUI_setActive_m40076EE1E602361DFE5F82A11887D162403A5DE3_inline(__this, (bool)0, NULL);
		// start = false;
		__this->___start_28 = (bool)0;
		// }
		return;
	}
}
// System.Void AttackSequenceUI::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceUI_LateUpdate_m26089ADB1A721F61107342AD83E6380FC217FF2A (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (start)
		bool L_0 = __this->___start_28;
		if (!L_0)
		{
			goto IL_00df;
		}
	}
	{
		// start = false;
		__this->___start_28 = (bool)0;
		// if (player.CompareTag("Player"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___player_16;
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_0079;
		}
	}
	{
		// left.GetComponent<Image>().color = Color.red;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___left_25;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_3, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
		// leftHp.GetComponent<Image>().color = Color.red;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___leftHp_27;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7;
		L_7 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_6, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
		// right.GetComponent<Image>().color = Color.blue;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___right_24;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10;
		L_10 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_9, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_11);
		// rightHp.GetComponent<Image>().color = Color.blue;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___rightHp_26;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13;
		L_13 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_12, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_14);
		return;
	}

IL_0079:
	{
		// else if (player.CompareTag("Enemy"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___player_16;
		bool L_16;
		L_16 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_15, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_16)
		{
			goto IL_00df;
		}
	}
	{
		// left.GetComponent<Image>().color = Color.blue;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___left_25;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18;
		L_18 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_17, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_18, L_19);
		// leftHp.GetComponent<Image>().color = Color.blue;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___leftHp_27;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_21;
		L_21 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_20, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_21, L_22);
		// right.GetComponent<Image>().color = Color.red;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___right_24;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24;
		L_24 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_23, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25;
		L_25 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_24, L_25);
		// rightHp.GetComponent<Image>().color = Color.red;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___rightHp_26;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_27;
		L_27 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_26, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		L_28 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_27, L_28);
	}

IL_00df:
	{
		// }
		return;
	}
}
// System.Void AttackSequenceUI::sequenceInit(UnityEngine.GameObject,UnityEngine.GameObject,UnityEngine.GameObject,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceUI_sequenceInit_m353CE4BD56FAB2C0E09465DFC31CF6F8F75CD456 (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemy1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sequence2, int32_t ___playerAttacks3, int32_t ___enemyAttacks4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD_m07C0CB1A9BF0ED24CBC601854EACF7649159FF5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EC6529F8FCDDB673E7FC8CEE700359FC2F5533A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD96671307599B1E074BDA8D4DFA6B0862D03FE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// start = true;
		__this->___start_28 = (bool)1;
		// this.player = player;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___player0;
		__this->___player_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_16), (void*)L_0);
		// this.enemy = enemy;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___enemy1;
		__this->___enemy_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemy_17), (void*)L_1);
		// playerDam = player.GetComponent<Unit>().getDamage(enemy);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___player0;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_3;
		L_3 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_2, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___enemy1;
		int32_t L_5;
		L_5 = Unit_getDamage_m3276097273B692D3519F1D64D3C8B6F9360C3438(L_3, L_4, NULL);
		__this->___playerDam_22 = L_5;
		// enemyDam = enemy.GetComponent<Unit>().getDamage(player);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___enemy1;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_7;
		L_7 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_6, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ___player0;
		int32_t L_9;
		L_9 = Unit_getDamage_m3276097273B692D3519F1D64D3C8B6F9360C3438(L_7, L_8, NULL);
		__this->___enemyDam_23 = L_9;
		// setActive(true);
		AttackSequenceUI_setActive_m40076EE1E602361DFE5F82A11887D162403A5DE3_inline(__this, (bool)1, NULL);
		// attackSequence = sequence;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = ___sequence2;
		__this->___attackSequence_15 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attackSequence_15), (void*)L_10);
		// setMiss("");
		AttackSequenceUI_setMiss_m0A8117BE2C1667F861591BF652F727B57309B22B(__this, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// setPlayerHit("HIT: " + player.GetComponent<Unit>().getHit(enemy));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = ___player0;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_12;
		L_12 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_11, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = ___enemy1;
		int32_t L_14;
		L_14 = Unit_getHit_m5B08DBC452BB3A6F57F84B73CD577B72847506F5(L_12, L_13, NULL);
		V_0 = L_14;
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5EC6529F8FCDDB673E7FC8CEE700359FC2F5533A, L_15, NULL);
		AttackSequenceUI_setPlayerHit_m801367FC9569913A512B575509073019EE56FD0A(__this, L_16, NULL);
		// setPlayerDmg("DMG: " + player.GetComponent<Unit>().getDamage(enemy));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = ___player0;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_18;
		L_18 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_17, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = ___enemy1;
		int32_t L_20;
		L_20 = Unit_getDamage_m3276097273B692D3519F1D64D3C8B6F9360C3438(L_18, L_19, NULL);
		V_0 = L_20;
		String_t* L_21;
		L_21 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_22;
		L_22 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCD96671307599B1E074BDA8D4DFA6B0862D03FE9, L_21, NULL);
		AttackSequenceUI_setPlayerDmg_m7151E5998ED7FEABCC50C00CED8DA4C5723BBD28(__this, L_22, NULL);
		// setPlayerCrit(player.GetComponent<Unit>().getCrit(enemy));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = ___player0;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_24;
		L_24 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_23, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = ___enemy1;
		int32_t L_26;
		L_26 = Unit_getCrit_mFF9383882BBB89D64615A0927CD822BFF60C9CFA(L_24, L_25, NULL);
		AttackSequenceUI_setPlayerCrit_m5953B8E4BCB5F648DF2A493E0C497CB774060083(__this, L_26, NULL);
		// setPlayerHp(player.GetComponent<Unit>().getHp());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = ___player0;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_28;
		L_28 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_27, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		int32_t L_29;
		L_29 = Unit_getHp_m2B1D935A2EA64A394015C685C4B70CC6758341E9(L_28, NULL);
		AttackSequenceUI_setPlayerHp_mCD7E9EE0006B4A3D65CDC4A20F4D9F648953FD74(__this, L_29, NULL);
		// setEnemyHit("HIT: " + enemy.GetComponent<Unit>().getHit(player));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = ___enemy1;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_31;
		L_31 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_30, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = ___player0;
		int32_t L_33;
		L_33 = Unit_getHit_m5B08DBC452BB3A6F57F84B73CD577B72847506F5(L_31, L_32, NULL);
		V_0 = L_33;
		String_t* L_34;
		L_34 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_35;
		L_35 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5EC6529F8FCDDB673E7FC8CEE700359FC2F5533A, L_34, NULL);
		AttackSequenceUI_setEnemyHit_m34123795BA5A6AE99238B825B0FC58C0ECED6D66(__this, L_35, NULL);
		// setEnemyDmg("DMG: " + enemy.GetComponent<Unit>().getDamage(player));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = ___enemy1;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_37;
		L_37 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_36, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = ___player0;
		int32_t L_39;
		L_39 = Unit_getDamage_m3276097273B692D3519F1D64D3C8B6F9360C3438(L_37, L_38, NULL);
		V_0 = L_39;
		String_t* L_40;
		L_40 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_41;
		L_41 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCD96671307599B1E074BDA8D4DFA6B0862D03FE9, L_40, NULL);
		AttackSequenceUI_setEnemyDmg_m59A51AC3499D804385003696BC449249356B7D15(__this, L_41, NULL);
		// setEnemyCrit(enemy.GetComponent<Unit>().getCrit(player));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = ___enemy1;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_43;
		L_43 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_42, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = ___player0;
		int32_t L_45;
		L_45 = Unit_getCrit_mFF9383882BBB89D64615A0927CD822BFF60C9CFA(L_43, L_44, NULL);
		AttackSequenceUI_setEnemyCrit_m89D43FED6ABBA42D7B7B007B53D94DDB05921CAE(__this, L_45, NULL);
		// setEnemyHp(enemy.GetComponent<Unit>().getHp());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = ___enemy1;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_47;
		L_47 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_46, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		int32_t L_48;
		L_48 = Unit_getHp_m2B1D935A2EA64A394015C685C4B70CC6758341E9(L_47, NULL);
		AttackSequenceUI_setEnemyHp_m03A1EFCFDC06D4C21B8962F2799DA9224DEEFC89(__this, L_48, NULL);
		// attackSequence.GetComponent<AttackSequenceAnimation>().setPlayerAttacks(playerAttacks);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = __this->___attackSequence_15;
		AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* L_50;
		L_50 = GameObject_GetComponent_TisAttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD_m07C0CB1A9BF0ED24CBC601854EACF7649159FF5A(L_49, GameObject_GetComponent_TisAttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD_m07C0CB1A9BF0ED24CBC601854EACF7649159FF5A_RuntimeMethod_var);
		int32_t L_51 = ___playerAttacks3;
		AttackSequenceAnimation_setPlayerAttacks_mFF3B968AFDB06CD846BA1209F676FC201A20B290_inline(L_50, L_51, NULL);
		// attackSequence.GetComponent<AttackSequenceAnimation>().setEnemyAttacks(enemyAttacks);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = __this->___attackSequence_15;
		AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* L_53;
		L_53 = GameObject_GetComponent_TisAttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD_m07C0CB1A9BF0ED24CBC601854EACF7649159FF5A(L_52, GameObject_GetComponent_TisAttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD_m07C0CB1A9BF0ED24CBC601854EACF7649159FF5A_RuntimeMethod_var);
		int32_t L_54 = ___enemyAttacks4;
		AttackSequenceAnimation_setEnemyAttacks_mD311A57C2D8DCEB046621CF136BD6309E09B27BF_inline(L_53, L_54, NULL);
		// attackSequence.GetComponent<AttackSequenceAnimation>().animationInit(true, this.gameObject, player, enemy);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55 = __this->___attackSequence_15;
		AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* L_56;
		L_56 = GameObject_GetComponent_TisAttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD_m07C0CB1A9BF0ED24CBC601854EACF7649159FF5A(L_55, GameObject_GetComponent_TisAttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD_m07C0CB1A9BF0ED24CBC601854EACF7649159FF5A_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57;
		L_57 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = ___player0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59 = ___enemy1;
		AttackSequenceAnimation_animationInit_m4C582076D198E0B639E0AC4A2395616B3F750A2B(L_56, (bool)1, L_57, L_58, L_59, NULL);
		// }
		return;
	}
}
// System.Boolean AttackSequenceUI::getActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AttackSequenceUI_getActive_mE36BB8079AAB6BFEAE856A940305231AA5624B02 (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, const RuntimeMethod* method) 
{
	{
		// return (isActive);
		bool L_0 = __this->___isActive_19;
		return L_0;
	}
}
// System.Void AttackSequenceUI::setActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceUI_setActive_m40076EE1E602361DFE5F82A11887D162403A5DE3 (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, bool ___isActive0, const RuntimeMethod* method) 
{
	{
		// this.isActive = isActive;
		bool L_0 = ___isActive0;
		__this->___isActive_19 = L_0;
		// }
		return;
	}
}
// TMPro.TextMeshProUGUI AttackSequenceUI::getMiss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* AttackSequenceUI_getMiss_mE852AD65AF6C7EF2AAB377944604C12F6B86E024 (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, const RuntimeMethod* method) 
{
	{
		// return (miss);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___miss_4;
		return L_0;
	}
}
// System.Void AttackSequenceUI::setMiss(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceUI_setMiss_m0A8117BE2C1667F861591BF652F727B57309B22B (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, String_t* ___miss0, const RuntimeMethod* method) 
{
	{
		// this.miss.text = miss;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___miss_4;
		String_t* L_1 = ___miss0;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// TMPro.TextMeshProUGUI AttackSequenceUI::getPlayerHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* AttackSequenceUI_getPlayerHit_m216827C704371D1333CD1CE8191F07494E7AE46F (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, const RuntimeMethod* method) 
{
	{
		// return (playerHit);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___playerHit_5;
		return L_0;
	}
}
// System.Void AttackSequenceUI::setPlayerHit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceUI_setPlayerHit_m801367FC9569913A512B575509073019EE56FD0A (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, String_t* ___playerHit0, const RuntimeMethod* method) 
{
	{
		// this.playerHit.text = playerHit;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___playerHit_5;
		String_t* L_1 = ___playerHit0;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// TMPro.TextMeshProUGUI AttackSequenceUI::getPlayerDmg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* AttackSequenceUI_getPlayerDmg_m18EAA57CE18D20ED55B9540BDCC879174B26C3FF (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, const RuntimeMethod* method) 
{
	{
		// return (playerDmg);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___playerDmg_6;
		return L_0;
	}
}
// System.Void AttackSequenceUI::setPlayerDmg(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceUI_setPlayerDmg_m7151E5998ED7FEABCC50C00CED8DA4C5723BBD28 (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, String_t* ___playerDmg0, const RuntimeMethod* method) 
{
	{
		// this.playerDmg.text = playerDmg;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___playerDmg_6;
		String_t* L_1 = ___playerDmg0;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// TMPro.TextMeshProUGUI AttackSequenceUI::getPlayerCrit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* AttackSequenceUI_getPlayerCrit_m95B103EF70B33019A897C76421E29E77359635D7 (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, const RuntimeMethod* method) 
{
	{
		// return (playerCrit);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___playerCrit_7;
		return L_0;
	}
}
// System.Void AttackSequenceUI::setPlayerCrit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceUI_setPlayerCrit_m5953B8E4BCB5F648DF2A493E0C497CB774060083 (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, int32_t ___playerCrit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C46AE1F7CB48932D0916E1F95453120069BDF8B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.playerCrit.text = "CRT: " + playerCrit;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___playerCrit_7;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___playerCrit0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3C46AE1F7CB48932D0916E1F95453120069BDF8B, L_1, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// TMPro.TextMeshProUGUI AttackSequenceUI::getPlayerHp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* AttackSequenceUI_getPlayerHp_m6D6A7ACD93C16B3F1D5C57DCC6150982B8A6B2B1 (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, const RuntimeMethod* method) 
{
	{
		// return (playerHp);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___playerHp_8;
		return L_0;
	}
}
// System.Void AttackSequenceUI::setPlayerHp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceUI_setPlayerHp_mCD7E9EE0006B4A3D65CDC4A20F4D9F648953FD74 (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, int32_t ___playerHp0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44BD532DF32E35E637F92D3ADE4050C9B9A140BD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hpPlayer = playerHp;
		int32_t L_0 = ___playerHp0;
		__this->___hpPlayer_20 = L_0;
		// this.playerHp.text = "HP: " + playerHp;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->___playerHp_8;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___playerHp0), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral44BD532DF32E35E637F92D3ADE4050C9B9A140BD, L_2, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_3);
		// }
		return;
	}
}
// TMPro.TextMeshProUGUI AttackSequenceUI::getEnemyHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* AttackSequenceUI_getEnemyHit_mFA9371AC19629EAA5D768CD19AA97BFB10568448 (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, const RuntimeMethod* method) 
{
	{
		// return (enemyHit);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___enemyHit_9;
		return L_0;
	}
}
// System.Void AttackSequenceUI::setEnemyHit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceUI_setEnemyHit_m34123795BA5A6AE99238B825B0FC58C0ECED6D66 (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, String_t* ___enemyHit0, const RuntimeMethod* method) 
{
	{
		// this.enemyHit.text = enemyHit;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___enemyHit_9;
		String_t* L_1 = ___enemyHit0;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// TMPro.TextMeshProUGUI AttackSequenceUI::getEnemyDmg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* AttackSequenceUI_getEnemyDmg_mB5CD63E8AB4982E4304B4D3FF811806CFA69B2D6 (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, const RuntimeMethod* method) 
{
	{
		// return (enemyDmg);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___enemyDmg_10;
		return L_0;
	}
}
// System.Void AttackSequenceUI::setEnemyDmg(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceUI_setEnemyDmg_m59A51AC3499D804385003696BC449249356B7D15 (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, String_t* ___enemyDmg0, const RuntimeMethod* method) 
{
	{
		// this.enemyDmg.text = enemyDmg;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___enemyDmg_10;
		String_t* L_1 = ___enemyDmg0;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// TMPro.TextMeshProUGUI AttackSequenceUI::getEnemyCrit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* AttackSequenceUI_getEnemyCrit_m10A521F965B8C78CA55C56515C57F6E3D1E19452 (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, const RuntimeMethod* method) 
{
	{
		// return (enemyCrit);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___enemyCrit_11;
		return L_0;
	}
}
// System.Void AttackSequenceUI::setEnemyCrit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceUI_setEnemyCrit_m89D43FED6ABBA42D7B7B007B53D94DDB05921CAE (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, int32_t ___enemyCrit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C46AE1F7CB48932D0916E1F95453120069BDF8B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.enemyCrit.text = "CRT: "+ enemyCrit;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___enemyCrit_11;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___enemyCrit0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3C46AE1F7CB48932D0916E1F95453120069BDF8B, L_1, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// TMPro.TextMeshProUGUI AttackSequenceUI::getEnemyHp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* AttackSequenceUI_getEnemyHp_m1683166F677A3838771491D93FD14DF194797784 (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, const RuntimeMethod* method) 
{
	{
		// return (enemyHp);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___enemyHp_12;
		return L_0;
	}
}
// System.Void AttackSequenceUI::setEnemyHp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceUI_setEnemyHp_m03A1EFCFDC06D4C21B8962F2799DA9224DEEFC89 (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, int32_t ___enemyHp0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44BD532DF32E35E637F92D3ADE4050C9B9A140BD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hpEnemy = enemyHp;
		int32_t L_0 = ___enemyHp0;
		__this->___hpEnemy_21 = L_0;
		// this.enemyHp.text = "HP: " + enemyHp;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->___enemyHp_12;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___enemyHp0), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral44BD532DF32E35E637F92D3ADE4050C9B9A140BD, L_2, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_3);
		// }
		return;
	}
}
// System.Int32 AttackSequenceUI::getHpPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AttackSequenceUI_getHpPlayer_mCAB232BFA1BAF0B684573AB99AC42E02DBD6FAC0 (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, const RuntimeMethod* method) 
{
	{
		// return (hpPlayer);
		int32_t L_0 = __this->___hpPlayer_20;
		return L_0;
	}
}
// System.Int32 AttackSequenceUI::getHpEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AttackSequenceUI_getHpEnemy_mF118FC69B871959CC56F4C75DAD99CFEC32D228D (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, const RuntimeMethod* method) 
{
	{
		// return (hpEnemy);
		int32_t L_0 = __this->___hpEnemy_21;
		return L_0;
	}
}
// System.Void AttackSequenceUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackSequenceUI__ctor_mEE4EEDA419FE8C7C84308627E60F5BA966FEC8B5 (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandControl_Start_mF32895A1E1DC7BDD2F965F834124D90362538840 (CommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m5A79A7B771326DA8781DCD5FE2B41517FA854D9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eventSystem = system.GetComponent<EventSystem>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___system_7;
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_1;
		L_1 = GameObject_GetComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m5A79A7B771326DA8781DCD5FE2B41517FA854D9D(L_0, GameObject_GetComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m5A79A7B771326DA8781DCD5FE2B41517FA854D9D_RuntimeMethod_var);
		__this->___eventSystem_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eventSystem_6), (void*)L_1);
		// enemies = GameObject.FindGameObjectsWithTag("Enemy");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2;
		L_2 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		__this->___enemies_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemies_4), (void*)L_2);
		// Reset();
		CommandControl_Reset_mDA6678BBB6E9BC9EC6352254525EAC170AE94662(__this, NULL);
		// }
		return;
	}
}
// System.Void CommandControl::setUpCommand(UnityEngine.Vector2,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandControl_setUpCommand_mF26E88BD55546241F1A283E07404F66FD7BBD2BD (CommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___target0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cursor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// enemies = GameObject.FindGameObjectsWithTag("Enemy");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		__this->___enemies_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemies_4), (void*)L_0);
		// for (int bogus = 0; bogus < enemies.Length; bogus++)
		V_0 = 0;
		goto IL_0122;
	}

IL_0017:
	{
		// if ((target.x + 1 == enemies[bogus].transform.position.x || target.x - 1 == enemies[bogus].transform.position.x) && (target.y == enemies[bogus].transform.position.y))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___target0;
		float L_2 = L_1.___x_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___enemies_4;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___x_2;
		if ((((float)((float)il2cpp_codegen_add(L_2, (1.0f)))) == ((float)L_9)))
		{
			goto IL_0061;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___target0;
		float L_11 = L_10.___x_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_12 = __this->___enemies_4;
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		float L_18 = L_17.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_11, (1.0f)))) == ((float)L_18))))
		{
			goto IL_009c;
		}
	}

IL_0061:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = ___target0;
		float L_20 = L_19.___y_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_21 = __this->___enemies_4;
		int32_t L_22 = V_0;
		int32_t L_23 = L_22;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		float L_27 = L_26.___y_3;
		if ((!(((float)L_20) == ((float)L_27))))
		{
			goto IL_009c;
		}
	}
	{
		// this.transform.GetChild(1).gameObject.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_28, 1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_29, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_30, (bool)1, NULL);
		// break;
		goto IL_0130;
	}

IL_009c:
	{
		// else if ((target.y + 1 == enemies[bogus].transform.position.y || target.y - 1 == enemies[bogus].transform.position.y) && (target.x == enemies[bogus].transform.position.x))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = ___target0;
		float L_32 = L_31.___y_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_33 = __this->___enemies_4;
		int32_t L_34 = V_0;
		int32_t L_35 = L_34;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		float L_39 = L_38.___y_3;
		if ((((float)((float)il2cpp_codegen_add(L_32, (1.0f)))) == ((float)L_39)))
		{
			goto IL_00e6;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40 = ___target0;
		float L_41 = L_40.___y_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_42 = __this->___enemies_4;
		int32_t L_43 = V_0;
		int32_t L_44 = L_43;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_46, NULL);
		float L_48 = L_47.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_41, (1.0f)))) == ((float)L_48))))
		{
			goto IL_011e;
		}
	}

IL_00e6:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = ___target0;
		float L_50 = L_49.___x_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_51 = __this->___enemies_4;
		int32_t L_52 = V_0;
		int32_t L_53 = L_52;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = (L_51)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_53));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_54, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_55, NULL);
		float L_57 = L_56.___x_2;
		if ((!(((float)L_50) == ((float)L_57))))
		{
			goto IL_011e;
		}
	}
	{
		// this.transform.GetChild(1).gameObject.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59;
		L_59 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_58, 1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60;
		L_60 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_59, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_60, (bool)1, NULL);
		// break;
		goto IL_0130;
	}

IL_011e:
	{
		// for (int bogus = 0; bogus < enemies.Length; bogus++)
		int32_t L_61 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_0122:
	{
		// for (int bogus = 0; bogus < enemies.Length; bogus++)
		int32_t L_62 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_63 = __this->___enemies_4;
		if ((((int32_t)L_62) < ((int32_t)((int32_t)(((RuntimeArray*)L_63)->max_length)))))
		{
			goto IL_0017;
		}
	}

IL_0130:
	{
		// transform.GetChild(2).gameObject.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64;
		L_64 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65;
		L_65 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_64, 2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66;
		L_66 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_65, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_66, (bool)1, NULL);
		// transform.GetChild(3).gameObject.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67;
		L_67 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68;
		L_68 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_67, 3, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69;
		L_69 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_68, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_69, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void CommandControl::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandControl_Reset_mDA6678BBB6E9BC9EC6352254525EAC170AE94662 (CommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// eventSystem.SetSelectedGameObject(transform.GetChild(3).gameObject);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0 = __this->___eventSystem_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_1, 3, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280(L_0, L_3, NULL);
		// for (int bogus = 0; bogus < transform.childCount; bogus++)
		V_0 = 0;
		goto IL_003b;
	}

IL_0020:
	{
		// transform.GetChild(bogus).gameObject.SetActive(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_5 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_4, L_5, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// for (int bogus = 0; bogus < transform.childCount; bogus++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		// for (int bogus = 0; bogus < transform.childCount; bogus++)
		int32_t L_9 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_11;
		L_11 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_10, NULL);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0020;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean CommandControl::getSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CommandControl_getSelected_m3C94E9B35BF87BE676E1917D0C80D9C98BABDCEC (CommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F* __this, const RuntimeMethod* method) 
{
	{
		// return (selected);
		bool L_0 = __this->___selected_5;
		return L_0;
	}
}
// System.Void CommandControl::setSelected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandControl_setSelected_m108B17C71E445DB0C48385F08146B815C4443C17 (CommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F* __this, bool ___selected0, const RuntimeMethod* method) 
{
	{
		// this.selected = selected;
		bool L_0 = ___selected0;
		__this->___selected_5 = L_0;
		// }
		return;
	}
}
// System.Void CommandControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandControl__ctor_m3686265E38AB304147600596EE8577EA7B65E91D (CommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Controller::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_Start_m6CF9E52A1D22548B67650167CBA335928CEC4796 (Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* __this, const RuntimeMethod* method) 
{
	{
		// runCount = 0;
		__this->___runCount_15 = 0;
		// phase = -1;
		__this->___phase_4 = (-1);
		// setStart(true);
		Controller_setStart_mF0DF3CB8675BCD6C571CDFE888FC9A812D7652FA(__this, (bool)1, NULL);
		// cursor.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___cursor_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// enemyStart = false;
		__this->___enemyStart_14 = (bool)0;
		// Cursor.visible = false;
		Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7((bool)0, NULL);
		// Application.targetFrameRate = 60;
		Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F(((int32_t)60), NULL);
		// }
		return;
	}
}
// System.Void Controller::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_Update_mDE8E185DE18C109FA2E8C6FCBFEB86F100F21634 (Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextControl_t71D12CBDD07CE3910A0062CA9670EB7F7C6E0DE4_m699EF7E587C1E596DB9EE28AC2D9978113A1BFAE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (attackUI.GetComponent<AttackSequenceUI>().getActive())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___attackUI_16;
		AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* L_1;
		L_1 = GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403(L_0, GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403_RuntimeMethod_var);
		bool L_2;
		L_2 = AttackSequenceUI_getActive_mE36BB8079AAB6BFEAE856A940305231AA5624B02_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// cursor.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___cursor_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		goto IL_0046;
	}

IL_0020:
	{
		// else if (!attackUI.GetComponent<AttackSequenceUI>().getActive() && isPlayer)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___attackUI_16;
		AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* L_5;
		L_5 = GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403(L_4, GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403_RuntimeMethod_var);
		bool L_6;
		L_6 = AttackSequenceUI_getActive_mE36BB8079AAB6BFEAE856A940305231AA5624B02_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0046;
		}
	}
	{
		bool L_7 = __this->___isPlayer_7;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		// cursor.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___cursor_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
	}

IL_0046:
	{
		// if (isPlayer)
		bool L_9 = __this->___isPlayer_7;
		if (!L_9)
		{
			goto IL_0059;
		}
	}
	{
		// playerPhase();
		Controller_playerPhase_mBB6BD865E54B2870CCF3FCA39F54ECD1E380857D(__this, NULL);
		goto IL_00ff;
	}

IL_0059:
	{
		// else if (isEnemy)
		bool L_10 = __this->___isEnemy_6;
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		// enemyPhase();
		Controller_enemyPhase_m560218D83A250E81715F31D652D6425925490D47(__this, NULL);
		goto IL_00ff;
	}

IL_006c:
	{
		// else if (isAlly)
		bool L_11 = __this->___isAlly_8;
		if (!L_11)
		{
			goto IL_007f;
		}
	}
	{
		// allyPhase();
		Controller_allyPhase_m0CF481D8259F17075FF6FDA541A8C721A5F70327(__this, NULL);
		goto IL_00ff;
	}

IL_007f:
	{
		// else if (is3rd)
		bool L_12 = __this->___is3rd_9;
		if (!L_12)
		{
			goto IL_008f;
		}
	}
	{
		// armyPhase();
		Controller_armyPhase_m33D39DCDC73DB123D51F1C30A150AE5ECDE10314(__this, NULL);
		goto IL_00ff;
	}

IL_008f:
	{
		// else if (start)
		bool L_13 = __this->___start_5;
		if (!L_13)
		{
			goto IL_00ff;
		}
	}
	{
		// switch (phase)
		int32_t L_14 = __this->___phase_4;
		V_0 = L_14;
		int32_t L_15 = V_0;
		switch (L_15)
		{
			case 0:
			{
				goto IL_00b6;
			}
			case 1:
			{
				goto IL_00cf;
			}
			case 2:
			{
				goto IL_00e8;
			}
			case 3:
			{
				goto IL_00f1;
			}
		}
	}
	{
		goto IL_00f8;
	}

IL_00b6:
	{
		// isPlayer = true;
		__this->___isPlayer_7 = (bool)1;
		// this.gameObject.GetComponent<TextControl>().playerPhaseShow();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		TextControl_t71D12CBDD07CE3910A0062CA9670EB7F7C6E0DE4* L_17;
		L_17 = GameObject_GetComponent_TisTextControl_t71D12CBDD07CE3910A0062CA9670EB7F7C6E0DE4_m699EF7E587C1E596DB9EE28AC2D9978113A1BFAE(L_16, GameObject_GetComponent_TisTextControl_t71D12CBDD07CE3910A0062CA9670EB7F7C6E0DE4_m699EF7E587C1E596DB9EE28AC2D9978113A1BFAE_RuntimeMethod_var);
		TextControl_playerPhaseShow_m7A0828E8430576EDC46BADB29215FE1787CA40B8(L_17, NULL);
		// break;
		goto IL_00f8;
	}

IL_00cf:
	{
		// isEnemy = true;
		__this->___isEnemy_6 = (bool)1;
		// this.gameObject.GetComponent<TextControl>().enemyPhaseShow();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		TextControl_t71D12CBDD07CE3910A0062CA9670EB7F7C6E0DE4* L_19;
		L_19 = GameObject_GetComponent_TisTextControl_t71D12CBDD07CE3910A0062CA9670EB7F7C6E0DE4_m699EF7E587C1E596DB9EE28AC2D9978113A1BFAE(L_18, GameObject_GetComponent_TisTextControl_t71D12CBDD07CE3910A0062CA9670EB7F7C6E0DE4_m699EF7E587C1E596DB9EE28AC2D9978113A1BFAE_RuntimeMethod_var);
		TextControl_enemyPhaseShow_m4D85B951BACFE887B32F1429DBA4A8254C26438D(L_19, NULL);
		// break;
		goto IL_00f8;
	}

IL_00e8:
	{
		// isAlly = true;
		__this->___isAlly_8 = (bool)1;
		// break;
		goto IL_00f8;
	}

IL_00f1:
	{
		// is3rd = true;
		__this->___is3rd_9 = (bool)1;
	}

IL_00f8:
	{
		// start = false;
		__this->___start_5 = (bool)0;
	}

IL_00ff:
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_20;
		L_20 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)27), NULL);
		if (!L_20)
		{
			goto IL_010e;
		}
	}
	{
		// Cursor.visible = true;
		Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7((bool)1, NULL);
	}

IL_010e:
	{
		// }
		return;
	}
}
// System.Void Controller::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_LateUpdate_m5CEF8E5C1E4D81074003F36F701836624873BD44 (Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C_mD3F466505D0BA5981B478702817979D38BD7AF19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874_mA450A041076F9F3A34D2B74115304EA51C076016_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string winner = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if (playerController.GetComponent<PlayerControl>().getWin())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___playerController_12;
		PlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874* L_1;
		L_1 = GameObject_GetComponent_TisPlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874_mA450A041076F9F3A34D2B74115304EA51C076016(L_0, GameObject_GetComponent_TisPlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874_mA450A041076F9F3A34D2B74115304EA51C076016_RuntimeMethod_var);
		bool L_2;
		L_2 = PlayerControl_getWin_m07581D3E6956E0C2DC709E75F9C99C8B998CCA71_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// winner = "Enemy";
		V_0 = _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
		goto IL_0038;
	}

IL_0020:
	{
		// else if (enemyController.GetComponent<EnemyControl>().getWin())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___enemyController_13;
		EnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C* L_4;
		L_4 = GameObject_GetComponent_TisEnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C_mD3F466505D0BA5981B478702817979D38BD7AF19(L_3, GameObject_GetComponent_TisEnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C_mD3F466505D0BA5981B478702817979D38BD7AF19_RuntimeMethod_var);
		bool L_5;
		L_5 = EnemyControl_getWin_mD3B45AFA89CF51921C59F91800FFE5A0081E6394_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		// winner = "Player";
		V_0 = _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
	}

IL_0038:
	{
		// endGame(winner);
		String_t* L_6 = V_0;
		Controller_endGame_m3072F23130B099E46DD9C035EC9424722C082D7D(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void Controller::endGame(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_endGame_m3072F23130B099E46DD9C035EC9424722C082D7D (Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* __this, String_t* ___winner0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E9E34245923A0BB21FDAA5FE52670E5EAD09AF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74B83A50A58269C4EECA165C2ABB62B80AAFC9D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!attackUI.GetComponent<AttackSequenceUI>().getActive())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___attackUI_16;
		AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* L_1;
		L_1 = GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403(L_0, GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403_RuntimeMethod_var);
		bool L_2;
		L_2 = AttackSequenceUI_getActive_mE36BB8079AAB6BFEAE856A940305231AA5624B02_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_0043;
		}
	}
	{
		// if (winner.Equals("Player"))
		String_t* L_3 = ___winner0;
		bool L_4;
		L_4 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_3, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// SceneManager.LoadScene("Win", LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF(_stringLiteral0E9E34245923A0BB21FDAA5FE52670E5EAD09AF1, 0, NULL);
		return;
	}

IL_002b:
	{
		// else if (winner.Equals("Enemy"))
		String_t* L_5 = ___winner0;
		bool L_6;
		L_6 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_5, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		// SceneManager.LoadScene("Lose", LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF(_stringLiteral74B83A50A58269C4EECA165C2ABB62B80AAFC9D0, 0, NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Boolean Controller::getStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Controller_getStart_mD96489ECE0F47C951074EDEFE9D8DC8FA9F81804 (Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* __this, const RuntimeMethod* method) 
{
	{
		// return (start);
		bool L_0 = __this->___start_5;
		return L_0;
	}
}
// System.Void Controller::setStart(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_setStart_mF0DF3CB8675BCD6C571CDFE888FC9A812D7652FA (Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* __this, bool ___start0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C_mD3F466505D0BA5981B478702817979D38BD7AF19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874_mA450A041076F9F3A34D2B74115304EA51C076016_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerController.GetComponent<PlayerControl>().Reset();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___playerController_12;
		PlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874* L_1;
		L_1 = GameObject_GetComponent_TisPlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874_mA450A041076F9F3A34D2B74115304EA51C076016(L_0, GameObject_GetComponent_TisPlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874_mA450A041076F9F3A34D2B74115304EA51C076016_RuntimeMethod_var);
		PlayerControl_Reset_m22585886C197C602F2760F074DC39DAF96407F98(L_1, NULL);
		// enemyController.GetComponent<EnemyControl>().Reset();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___enemyController_13;
		EnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C* L_3;
		L_3 = GameObject_GetComponent_TisEnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C_mD3F466505D0BA5981B478702817979D38BD7AF19(L_2, GameObject_GetComponent_TisEnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C_mD3F466505D0BA5981B478702817979D38BD7AF19_RuntimeMethod_var);
		EnemyControl_Reset_mD079EE4A4C0D64A05198D515BB8E37495229671A(L_3, NULL);
		// this.start = start;
		bool L_4 = ___start0;
		__this->___start_5 = L_4;
		// phase++;
		int32_t L_5 = __this->___phase_4;
		__this->___phase_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// runCount = 0;
		__this->___runCount_15 = 0;
		// }
		return;
	}
}
// System.Void Controller::playerPhase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_playerPhase_mBB6BD865E54B2870CCF3FCA39F54ECD1E380857D (Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874_mA450A041076F9F3A34D2B74115304EA51C076016_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextControl_t71D12CBDD07CE3910A0062CA9670EB7F7C6E0DE4_m699EF7E587C1E596DB9EE28AC2D9978113A1BFAE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!this.gameObject.GetComponent<TextControl>().getTimed() && runCount == 0)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		TextControl_t71D12CBDD07CE3910A0062CA9670EB7F7C6E0DE4* L_1;
		L_1 = GameObject_GetComponent_TisTextControl_t71D12CBDD07CE3910A0062CA9670EB7F7C6E0DE4_m699EF7E587C1E596DB9EE28AC2D9978113A1BFAE(L_0, GameObject_GetComponent_TisTextControl_t71D12CBDD07CE3910A0062CA9670EB7F7C6E0DE4_m699EF7E587C1E596DB9EE28AC2D9978113A1BFAE_RuntimeMethod_var);
		bool L_2;
		L_2 = TextControl_getTimed_m177EFEC927C56C5EB2F4CAC30832162F39ED059C_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = __this->___runCount_15;
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		// cursor.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___cursor_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// runCount++;
		int32_t L_5 = __this->___runCount_15;
		__this->___runCount_15 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0034:
	{
		// if (!playerController.gameObject.GetComponent<PlayerControl>().getActive() && !attackUI.GetComponent<AttackSequenceUI>().getActive())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___playerController_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_6, NULL);
		PlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874* L_8;
		L_8 = GameObject_GetComponent_TisPlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874_mA450A041076F9F3A34D2B74115304EA51C076016(L_7, GameObject_GetComponent_TisPlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874_mA450A041076F9F3A34D2B74115304EA51C076016_RuntimeMethod_var);
		bool L_9;
		L_9 = PlayerControl_getActive_m10E5D0D0307DC38974116E7C291D41E0C0224C1E_inline(L_8, NULL);
		if (L_9)
		{
			goto IL_0077;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___attackUI_16;
		AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* L_11;
		L_11 = GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403(L_10, GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403_RuntimeMethod_var);
		bool L_12;
		L_12 = AttackSequenceUI_getActive_mE36BB8079AAB6BFEAE856A940305231AA5624B02_inline(L_11, NULL);
		if (L_12)
		{
			goto IL_0077;
		}
	}
	{
		// isPlayer = false;
		__this->___isPlayer_7 = (bool)0;
		// setStart(true);
		Controller_setStart_mF0DF3CB8675BCD6C571CDFE888FC9A812D7652FA(__this, (bool)1, NULL);
		// cursor.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___cursor_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void Controller::enemyPhase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_enemyPhase_m560218D83A250E81715F31D652D6425925490D47 (Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C_mD3F466505D0BA5981B478702817979D38BD7AF19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextControl_t71D12CBDD07CE3910A0062CA9670EB7F7C6E0DE4_m699EF7E587C1E596DB9EE28AC2D9978113A1BFAE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!this.gameObject.GetComponent<TextControl>().getTimed())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		TextControl_t71D12CBDD07CE3910A0062CA9670EB7F7C6E0DE4* L_1;
		L_1 = GameObject_GetComponent_TisTextControl_t71D12CBDD07CE3910A0062CA9670EB7F7C6E0DE4_m699EF7E587C1E596DB9EE28AC2D9978113A1BFAE(L_0, GameObject_GetComponent_TisTextControl_t71D12CBDD07CE3910A0062CA9670EB7F7C6E0DE4_m699EF7E587C1E596DB9EE28AC2D9978113A1BFAE_RuntimeMethod_var);
		bool L_2;
		L_2 = TextControl_getTimed_m177EFEC927C56C5EB2F4CAC30832162F39ED059C_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		// setEnemyStart(true);
		Controller_setEnemyStart_m9EF8745CDDFBC33BB5B1733FB6C1311A2D574794_inline(__this, (bool)1, NULL);
	}

IL_0019:
	{
		// if (!enemyController.gameObject.GetComponent<EnemyControl>().getActive())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___enemyController_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_3, NULL);
		EnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C* L_5;
		L_5 = GameObject_GetComponent_TisEnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C_mD3F466505D0BA5981B478702817979D38BD7AF19(L_4, GameObject_GetComponent_TisEnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C_mD3F466505D0BA5981B478702817979D38BD7AF19_RuntimeMethod_var);
		bool L_6;
		L_6 = EnemyControl_getActive_m21BD9CCB836575A641BBA767CE5204D810B9C84E_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0045;
		}
	}
	{
		// isEnemy = false;
		__this->___isEnemy_6 = (bool)0;
		// setEnemyStart(false);
		Controller_setEnemyStart_m9EF8745CDDFBC33BB5B1733FB6C1311A2D574794_inline(__this, (bool)0, NULL);
		// setStart(true);
		Controller_setStart_mF0DF3CB8675BCD6C571CDFE888FC9A812D7652FA(__this, (bool)1, NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void Controller::allyPhase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_allyPhase_m0CF481D8259F17075FF6FDA541A8C721A5F70327 (Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* __this, const RuntimeMethod* method) 
{
	{
		// isAlly = false;
		__this->___isAlly_8 = (bool)0;
		// setStart(true);
		Controller_setStart_mF0DF3CB8675BCD6C571CDFE888FC9A812D7652FA(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Controller::armyPhase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_armyPhase_m33D39DCDC73DB123D51F1C30A150AE5ECDE10314 (Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* __this, const RuntimeMethod* method) 
{
	{
		// is3rd = false;
		__this->___is3rd_9 = (bool)0;
		// phase = -1;
		__this->___phase_4 = (-1);
		// setStart(true);
		Controller_setStart_mF0DF3CB8675BCD6C571CDFE888FC9A812D7652FA(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Controller::setEnemyStart(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_setEnemyStart_m9EF8745CDDFBC33BB5B1733FB6C1311A2D574794 (Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* __this, bool ___enemyStart0, const RuntimeMethod* method) 
{
	{
		// this.enemyStart = enemyStart;
		bool L_0 = ___enemyStart0;
		__this->___enemyStart_14 = L_0;
		// }
		return;
	}
}
// System.Boolean Controller::getEnemyStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Controller_getEnemyStart_mB9266E3A3C025C240B542248467AFA158204CE4B (Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* __this, const RuntimeMethod* method) 
{
	{
		// return (enemyStart);
		bool L_0 = __this->___enemyStart_14;
		return L_0;
	}
}
// System.Void Controller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller__ctor_mD8A105DFD9CAFDD0B419A5ECD5BC3B789338476A (Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CursorSet::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CursorSet_Start_m0AAC494BEC98CF7539DCE08E7CA6648578C55D04 (CursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = mainPlayer.transform.position + offset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___mainPlayer_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___offset_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_4, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void CursorSet::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CursorSet_Update_m77A87E455F42754C402F73030BFA30C4A0B9C2F1 (CursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F_mD718F09BE7E1BF9DC4D19A6A6966B992F912F7C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5847BC4F8CCFB1A4F41033F8982DC31E15E83B51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC7ACAFB3D712D6BA8F22C4DAFE2F7EAC4CC347D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// frame++;
		int32_t L_0 = __this->___frame_16;
		__this->___frame_16 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if (Input.GetKey(KeyCode.A) && (!isCommanding || isAttacking) && frame%multiple == 0)
		bool L_1;
		L_1 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)97), NULL);
		if (!L_1)
		{
			goto IL_0046;
		}
	}
	{
		bool L_2 = __this->___isCommanding_11;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		bool L_3 = __this->___isAttacking_13;
		if (!L_3)
		{
			goto IL_0046;
		}
	}

IL_0027:
	{
		int32_t L_4 = __this->___frame_16;
		int32_t L_5 = __this->___multiple_15;
		if (((int32_t)(L_4%L_5)))
		{
			goto IL_0046;
		}
	}
	{
		// transform.Translate(Vector3.left);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_6, L_7, NULL);
	}

IL_0046:
	{
		// if (Input.GetKey(KeyCode.D) && (!isCommanding || isAttacking) && frame % multiple == 0)
		bool L_8;
		L_8 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)100), NULL);
		if (!L_8)
		{
			goto IL_007e;
		}
	}
	{
		bool L_9 = __this->___isCommanding_11;
		if (!L_9)
		{
			goto IL_005f;
		}
	}
	{
		bool L_10 = __this->___isAttacking_13;
		if (!L_10)
		{
			goto IL_007e;
		}
	}

IL_005f:
	{
		int32_t L_11 = __this->___frame_16;
		int32_t L_12 = __this->___multiple_15;
		if (((int32_t)(L_11%L_12)))
		{
			goto IL_007e;
		}
	}
	{
		// transform.Translate(Vector3.right);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_13, L_14, NULL);
	}

IL_007e:
	{
		// if (Input.GetKey(KeyCode.W) && (!isCommanding || isAttacking) && frame % multiple == 0)
		bool L_15;
		L_15 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)119), NULL);
		if (!L_15)
		{
			goto IL_00b6;
		}
	}
	{
		bool L_16 = __this->___isCommanding_11;
		if (!L_16)
		{
			goto IL_0097;
		}
	}
	{
		bool L_17 = __this->___isAttacking_13;
		if (!L_17)
		{
			goto IL_00b6;
		}
	}

IL_0097:
	{
		int32_t L_18 = __this->___frame_16;
		int32_t L_19 = __this->___multiple_15;
		if (((int32_t)(L_18%L_19)))
		{
			goto IL_00b6;
		}
	}
	{
		// transform.Translate(Vector3.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_20, L_21, NULL);
	}

IL_00b6:
	{
		// if (Input.GetKey(KeyCode.S) && (!isCommanding || isAttacking) && frame % multiple == 0)
		bool L_22;
		L_22 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)115), NULL);
		if (!L_22)
		{
			goto IL_00ee;
		}
	}
	{
		bool L_23 = __this->___isCommanding_11;
		if (!L_23)
		{
			goto IL_00cf;
		}
	}
	{
		bool L_24 = __this->___isAttacking_13;
		if (!L_24)
		{
			goto IL_00ee;
		}
	}

IL_00cf:
	{
		int32_t L_25 = __this->___frame_16;
		int32_t L_26 = __this->___multiple_15;
		if (((int32_t)(L_25%L_26)))
		{
			goto IL_00ee;
		}
	}
	{
		// transform.Translate(Vector3.down);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_27, L_28, NULL);
	}

IL_00ee:
	{
		// if (isSelected && Input.GetKeyDown(KeyCode.Space))
		bool L_29 = __this->___isSelected_6;
		if (!L_29)
		{
			goto IL_011e;
		}
	}
	{
		bool L_30;
		L_30 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)32), NULL);
		if (!L_30)
		{
			goto IL_011e;
		}
	}
	{
		// tempCharacter.GetComponent<Unit>().getMoveVision();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___tempCharacter_7;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_32;
		L_32 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_31, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		Unit_getMoveVision_mA025A5932581A7C45B8BB358FCDFBA1D96B3D433(L_32, NULL);
		// isRange = true;
		__this->___isRange_8 = (bool)1;
		// isSelected = false;
		__this->___isSelected_6 = (bool)0;
		return;
	}

IL_011e:
	{
		// else if (!isRange && !isAttacking && Input.GetKeyDown(KeyCode.Space))
		bool L_33 = __this->___isRange_8;
		if (L_33)
		{
			goto IL_0148;
		}
	}
	{
		bool L_34 = __this->___isAttacking_13;
		if (L_34)
		{
			goto IL_0148;
		}
	}
	{
		bool L_35;
		L_35 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)32), NULL);
		if (!L_35)
		{
			goto IL_0148;
		}
	}
	{
		// tempCharacter.GetComponent<Unit>().killAll();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___tempCharacter_7;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_37;
		L_37 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_36, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		Unit_killAll_m5CB4367F6EC250283FE7ED20744CB6F82E9FAB42(L_37, NULL);
		return;
	}

IL_0148:
	{
		// else if (hasTarget && Input.GetKeyDown(KeyCode.Space) && !isCommanding)
		bool L_38 = __this->___hasTarget_9;
		if (!L_38)
		{
			goto IL_01c3;
		}
	}
	{
		bool L_39;
		L_39 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)32), NULL);
		if (!L_39)
		{
			goto IL_01c3;
		}
	}
	{
		bool L_40 = __this->___isCommanding_11;
		if (L_40)
		{
			goto IL_01c3;
		}
	}
	{
		// hasTarget = false;
		__this->___hasTarget_9 = (bool)0;
		// isCommanding = true;
		__this->___isCommanding_11 = (bool)1;
		// commandController.GetComponent<CommandControl>().setUpCommand(new Vector2(transform.position.x - offset.x, transform.position.y - offset.y), this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->___commandController_10;
		CommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F* L_42;
		L_42 = GameObject_GetComponent_TisCommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F_mD718F09BE7E1BF9DC4D19A6A6966B992F912F7C6(L_41, GameObject_GetComponent_TisCommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F_mD718F09BE7E1BF9DC4D19A6A6966B992F912F7C6_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_43, NULL);
		float L_45 = L_44.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_46 = (&__this->___offset_5);
		float L_47 = L_46->___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_48, NULL);
		float L_50 = L_49.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_51 = (&__this->___offset_5);
		float L_52 = L_51->___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53;
		memset((&L_53), 0, sizeof(L_53));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_53), ((float)il2cpp_codegen_subtract(L_45, L_47)), ((float)il2cpp_codegen_subtract(L_50, L_52)), /*hidden argument*/NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54;
		L_54 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		CommandControl_setUpCommand_mF26E88BD55546241F1A283E07404F66FD7BBD2BD(L_42, L_53, L_54, NULL);
		return;
	}

IL_01c3:
	{
		// else if (commandController.GetComponent<CommandControl>().getSelected() && !isAttacking)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55 = __this->___commandController_10;
		CommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F* L_56;
		L_56 = GameObject_GetComponent_TisCommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F_mD718F09BE7E1BF9DC4D19A6A6966B992F912F7C6(L_55, GameObject_GetComponent_TisCommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F_mD718F09BE7E1BF9DC4D19A6A6966B992F912F7C6_RuntimeMethod_var);
		bool L_57;
		L_57 = CommandControl_getSelected_m3C94E9B35BF87BE676E1917D0C80D9C98BABDCEC_inline(L_56, NULL);
		if (!L_57)
		{
			goto IL_020e;
		}
	}
	{
		bool L_58 = __this->___isAttacking_13;
		if (L_58)
		{
			goto IL_020e;
		}
	}
	{
		// Debug.Log("moved");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral5847BC4F8CCFB1A4F41033F8982DC31E15E83B51, NULL);
		// isRange = false;
		__this->___isRange_8 = (bool)0;
		// isSelected = false;
		__this->___isSelected_6 = (bool)0;
		// isCommanding = false;
		__this->___isCommanding_11 = (bool)0;
		// commandController.GetComponent<CommandControl>().setSelected(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59 = __this->___commandController_10;
		CommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F* L_60;
		L_60 = GameObject_GetComponent_TisCommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F_mD718F09BE7E1BF9DC4D19A6A6966B992F912F7C6(L_59, GameObject_GetComponent_TisCommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F_mD718F09BE7E1BF9DC4D19A6A6966B992F912F7C6_RuntimeMethod_var);
		CommandControl_setSelected_m108B17C71E445DB0C48385F08146B815C4443C17_inline(L_60, (bool)0, NULL);
		return;
	}

IL_020e:
	{
		// else if (isAttacking && isEnemy && Input.GetKeyDown(KeyCode.Space))
		bool L_61 = __this->___isAttacking_13;
		if (!L_61)
		{
			goto IL_024c;
		}
	}
	{
		bool L_62 = __this->___isEnemy_14;
		if (!L_62)
		{
			goto IL_024c;
		}
	}
	{
		bool L_63;
		L_63 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)32), NULL);
		if (!L_63)
		{
			goto IL_024c;
		}
	}
	{
		// Debug.Log("attacked");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralFC7ACAFB3D712D6BA8F22C4DAFE2F7EAC4CC347D, NULL);
		// tempCharacter.GetComponent<Unit>().setTarget(selectTarget("Enemy"));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64 = __this->___tempCharacter_7;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_65;
		L_65 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_64, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66;
		L_66 = CursorSet_selectTarget_m7C56AD3F0D6D47F4508E5BE4BAEE5E49A09EC36E(__this, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		Unit_setTarget_m139B852A8B736B9771EBBC7524E5CE9ABB69E558_inline(L_65, L_66, NULL);
	}

IL_024c:
	{
		// }
		return;
	}
}
// System.Void CursorSet::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CursorSet_OnTriggerEnter2D_m19D4200E17E20C305BB4075671536B5AA8D6E44F (CursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC94555AAEB6D35E377BD35C8D911D3641ED925C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.CompareTag("Player") && !isRange && collision.gameObject.GetComponent<Unit>().getActive())
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		bool L_3 = __this->___isRange_8;
		if (L_3)
		{
			goto IL_0040;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_6;
		L_6 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_5, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		bool L_7;
		L_7 = Unit_getActive_m86639388882C58CE77B4544970C888114615F821_inline(L_6, NULL);
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		// isSelected = true;
		__this->___isSelected_6 = (bool)1;
		// tempCharacter = collision.gameObject;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_8 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		__this->___tempCharacter_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempCharacter_7), (void*)L_9);
		return;
	}

IL_0040:
	{
		// else if (collision.gameObject.CompareTag("Bounds"))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_10 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		bool L_12;
		L_12 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_11, _stringLiteralEC94555AAEB6D35E377BD35C8D911D3641ED925C, NULL);
		if (!L_12)
		{
			goto IL_0059;
		}
	}
	{
		// Start();
		CursorSet_Start_m0AAC494BEC98CF7539DCE08E7CA6648578C55D04(__this, NULL);
		return;
	}

IL_0059:
	{
		// else if (collision.gameObject.CompareTag("Attack"))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_13 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		bool L_15;
		L_15 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_14, _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, NULL);
		if (!L_15)
		{
			goto IL_0073;
		}
	}
	{
		// isEnemy = true;
		__this->___isEnemy_14 = (bool)1;
		return;
	}

IL_0073:
	{
		// else if (collision.gameObject.CompareTag("Move"))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_16 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		bool L_18;
		L_18 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_17, _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1, NULL);
		if (!L_18)
		{
			goto IL_008c;
		}
	}
	{
		// isRange = true;
		__this->___isRange_8 = (bool)1;
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.Void CursorSet::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CursorSet_OnTriggerExit2D_mE023B9A9152F7B172B13C2DE4BCDEDFDEA6416D6 (CursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.CompareTag("Player"))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// isSelected = false;
		__this->___isSelected_6 = (bool)0;
		return;
	}

IL_001a:
	{
		// else if (collision.gameObject.CompareTag("Attack"))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_3 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		bool L_5;
		L_5 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_4, _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// isRange = false;
		__this->___isRange_8 = (bool)0;
		// isEnemy = false;
		__this->___isEnemy_14 = (bool)0;
		return;
	}

IL_003b:
	{
		// else if (collision.gameObject.CompareTag("Move"))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_6 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		bool L_8;
		L_8 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_7, _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1, NULL);
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		// hasTarget = false;
		__this->___hasTarget_9 = (bool)0;
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void CursorSet::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CursorSet_OnTriggerStay2D_m21B18E7354BB98CC2979B97E1810DF471362B194 (CursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isRange && collision.gameObject.CompareTag("Move"))
		bool L_0 = __this->___isRange_8;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_1 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		bool L_3;
		L_3 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_2, _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1, NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// hasTarget = true;
		__this->___hasTarget_9 = (bool)1;
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Boolean CursorSet::getIsCommanding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CursorSet_getIsCommanding_m7D732F52424EE8BEB2052F588BC0737495A762F4 (CursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E* __this, const RuntimeMethod* method) 
{
	{
		// return (isCommanding);
		bool L_0 = __this->___isCommanding_11;
		return L_0;
	}
}
// System.Void CursorSet::setIsCommanding(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CursorSet_setIsCommanding_m53F717F10C87EAB8977118C27DBC2E6CC738717D (CursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E* __this, bool ___isCommanding0, const RuntimeMethod* method) 
{
	{
		// this.isCommanding = isCommanding;
		bool L_0 = ___isCommanding0;
		__this->___isCommanding_11 = L_0;
		// }
		return;
	}
}
// UnityEngine.GameObject CursorSet::getTempcharacter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* CursorSet_getTempcharacter_m5A1F2203F432DF921B7F495C285286EAC55F3639 (CursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E* __this, const RuntimeMethod* method) 
{
	{
		// return (tempCharacter);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___tempCharacter_7;
		return L_0;
	}
}
// System.Void CursorSet::setTempCharacter(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CursorSet_setTempCharacter_m310874840C06C717378F64D3BD0EA4874444AB7E (CursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tempCharacter0, const RuntimeMethod* method) 
{
	{
		// this.tempCharacter = tempCharacter;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___tempCharacter0;
		__this->___tempCharacter_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempCharacter_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void CursorSet::setEnemySelected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CursorSet_setEnemySelected_m1B1DA96F502E068CB35639B489047810FF4B3605 (CursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E* __this, bool ___enemySelected0, const RuntimeMethod* method) 
{
	{
		// this.enemySelected = enemySelected;
		bool L_0 = ___enemySelected0;
		__this->___enemySelected_12 = L_0;
		// }
		return;
	}
}
// System.Boolean CursorSet::getEnemySelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CursorSet_getEnemySelected_mE2C284C95CDC05BBFED23C8176F5C24E5D39E32A (CursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E* __this, const RuntimeMethod* method) 
{
	{
		// return (enemySelected);
		bool L_0 = __this->___enemySelected_12;
		return L_0;
	}
}
// System.Boolean CursorSet::getAttacking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CursorSet_getAttacking_m86DCC6FCA92FD7C3077A13251048F7C256BDF6DC (CursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E* __this, const RuntimeMethod* method) 
{
	{
		// return (isAttacking);
		bool L_0 = __this->___isAttacking_13;
		return L_0;
	}
}
// System.Void CursorSet::setAttacking(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CursorSet_setAttacking_m3ACC50051442094190F2AA115AFEF217EE30DD46 (CursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E* __this, bool ___isAttacking0, const RuntimeMethod* method) 
{
	{
		// this.isAttacking = isAttacking;
		bool L_0 = ___isAttacking0;
		__this->___isAttacking_13 = L_0;
		// }
		return;
	}
}
// UnityEngine.GameObject CursorSet::selectTarget(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* CursorSet_selectTarget_m7C56AD3F0D6D47F4508E5BE4BAEE5E49A09EC36E (CursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E* __this, String_t* ___type0, const RuntimeMethod* method) 
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// GameObject[] victims = GameObject.FindGameObjectsWithTag(type);
		String_t* L_0 = ___type0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1;
		L_1 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(L_0, NULL);
		V_0 = L_1;
		// GameObject target = null;
		V_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		// for (int bogus = 0; bogus < victims.Length; bogus++)
		V_2 = 0;
		goto IL_0051;
	}

IL_000d:
	{
		// if (transform.position - offset == victims[bogus].transform.position && Input.GetKeyDown(KeyCode.Space))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___offset_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_3, L_4, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = V_0;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		bool L_12;
		L_12 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_5, L_11, NULL);
		if (!L_12)
		{
			goto IL_004d;
		}
	}
	{
		bool L_13;
		L_13 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)32), NULL);
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		// target = victims[bogus];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t L_16 = L_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		V_1 = L_17;
		// isAttacking = false;
		__this->___isAttacking_13 = (bool)0;
		// break;
		goto IL_0057;
	}

IL_004d:
	{
		// for (int bogus = 0; bogus < victims.Length; bogus++)
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0051:
	{
		// for (int bogus = 0; bogus < victims.Length; bogus++)
		int32_t L_19 = V_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_000d;
		}
	}

IL_0057:
	{
		// return (target);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_1;
		return L_21;
	}
}
// System.Void CursorSet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CursorSet__ctor_mF87637E115E5A4F904719B05975DFFB538811911 (CursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EnemyControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyControl_Start_mF11FCE4339C4F3E4AD0EE62ED6057FB79F9766B6 (EnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C* __this, const RuntimeMethod* method) 
{
	{
		// currentChild = 0;
		__this->___currentChild_10 = 0;
		// count = transform.childCount;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_1;
		L_1 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_0, NULL);
		__this->___count_5 = L_1;
		// setActive(false);
		EnemyControl_setActive_mEEE23731CA7E5E4B782124D44E12EE36E0363C69_inline(__this, (bool)0, NULL);
		// phaseRunning = false;
		__this->___phaseRunning_8 = (bool)0;
		// child = this.gameObject.transform.GetChild(currentChild).gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		int32_t L_4 = __this->___currentChild_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_3, L_4, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		__this->___child_9 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___child_9), (void*)L_6);
		// }
		return;
	}
}
// System.Void EnemyControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyControl_Update_mD5FB4D14DCEA05B1BA1B6B5B16082395BB25502D (EnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisController_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9_mF364E4B94D1E222775B6AE8790360D39AF249537_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5847BC4F8CCFB1A4F41033F8982DC31E15E83B51);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B6_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B5_0 = NULL;
	String_t* G_B7_0 = NULL;
	{
		// if (count < 1)
		int32_t L_0 = __this->___count_5;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_0010;
		}
	}
	{
		// playerWin = true;
		__this->___playerWin_11 = (bool)1;
	}

IL_0010:
	{
		// if (controller.GetComponent<Controller>().getEnemyStart()  && !phaseRunning)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___controller_6;
		Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* L_2;
		L_2 = GameObject_GetComponent_TisController_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9_mF364E4B94D1E222775B6AE8790360D39AF249537(L_1, GameObject_GetComponent_TisController_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9_mF364E4B94D1E222775B6AE8790360D39AF249537_RuntimeMethod_var);
		bool L_3;
		L_3 = Controller_getEnemyStart_mB9266E3A3C025C240B542248467AFA158204CE4B_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_007a;
		}
	}
	{
		bool L_4 = __this->___phaseRunning_8;
		if (L_4)
		{
			goto IL_007a;
		}
	}
	{
		// phaseRunning = true;
		__this->___phaseRunning_8 = (bool)1;
		// child = this.gameObject.transform.GetChild(currentChild).gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		int32_t L_7 = __this->___currentChild_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_6, L_7, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		__this->___child_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___child_9), (void*)L_9);
		// Debug.Log(child + "moved");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___child_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_10;
		G_B5_0 = L_11;
		if (L_11)
		{
			G_B6_0 = L_11;
			goto IL_005f;
		}
	}
	{
		G_B7_0 = ((String_t*)(NULL));
		goto IL_0064;
	}

IL_005f:
	{
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B6_0);
		G_B7_0 = L_12;
	}

IL_0064:
	{
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B7_0, _stringLiteral5847BC4F8CCFB1A4F41033F8982DC31E15E83B51, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_13, NULL);
		// moveInit();
		EnemyControl_moveInit_m07D090D008A6BBF20A4131129BDAA6FBFC98C81E(__this, NULL);
		return;
	}

IL_007a:
	{
		// else if (controller.GetComponent<Controller>().getEnemyStart() && phaseRunning && !UI.active)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___controller_6;
		Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* L_15;
		L_15 = GameObject_GetComponent_TisController_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9_mF364E4B94D1E222775B6AE8790360D39AF249537(L_14, GameObject_GetComponent_TisController_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9_mF364E4B94D1E222775B6AE8790360D39AF249537_RuntimeMethod_var);
		bool L_16;
		L_16 = Controller_getEnemyStart_mB9266E3A3C025C240B542248467AFA158204CE4B_inline(L_15, NULL);
		if (!L_16)
		{
			goto IL_00a7;
		}
	}
	{
		bool L_17 = __this->___phaseRunning_8;
		if (!L_17)
		{
			goto IL_00a7;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___UI_7;
		bool L_19;
		L_19 = GameObject_get_active_mAADB8845313470CFA8C2A937543D0B004E035BA5(L_18, NULL);
		if (L_19)
		{
			goto IL_00a7;
		}
	}
	{
		// cycleChild();
		EnemyControl_cycleChild_m305F4741982E4894AFB1994BB4CC74BEF51F4595(__this, NULL);
	}

IL_00a7:
	{
		// }
		return;
	}
}
// System.Void EnemyControl::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyControl_LateUpdate_mE1485D4EFCB50A07158889031DCA57E746D2589A (EnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C* __this, const RuntimeMethod* method) 
{
	{
		// count = transform.childCount;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_1;
		L_1 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_0, NULL);
		__this->___count_5 = L_1;
		// checkCount();
		EnemyControl_checkCount_mCC1365D9DDBCFE0D5BBA0CC55D788211DB3AE4EE(__this, NULL);
		// }
		return;
	}
}
// System.Void EnemyControl::setActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyControl_setActive_mEEE23731CA7E5E4B782124D44E12EE36E0363C69 (EnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C* __this, bool ___active0, const RuntimeMethod* method) 
{
	{
		// isActive = active;
		bool L_0 = ___active0;
		__this->___isActive_4 = L_0;
		// }
		return;
	}
}
// System.Boolean EnemyControl::getActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnemyControl_getActive_m21BD9CCB836575A641BBA767CE5204D810B9C84E (EnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C* __this, const RuntimeMethod* method) 
{
	{
		// return (isActive);
		bool L_0 = __this->___isActive_4;
		return L_0;
	}
}
// System.Void EnemyControl::checkCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyControl_checkCount_mCC1365D9DDBCFE0D5BBA0CC55D788211DB3AE4EE (EnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int tempCount = 0;
		V_0 = 0;
		// for (int bogus = 0; bogus < count; bogus++)
		V_1 = 0;
		goto IL_0030;
	}

IL_0006:
	{
		// if (!this.gameObject.transform.GetChild(bogus).gameObject.GetComponent<Unit>().getActive())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		int32_t L_2 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_1, L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_5;
		L_5 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_4, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		bool L_6;
		L_6 = Unit_getActive_m86639388882C58CE77B4544970C888114615F821_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		// tempCount++;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002c:
	{
		// for (int bogus = 0; bogus < count; bogus++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0030:
	{
		// for (int bogus = 0; bogus < count; bogus++)
		int32_t L_9 = V_1;
		int32_t L_10 = __this->___count_5;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0006;
		}
	}
	{
		// if (tempCount == count)
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___count_5;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0049;
		}
	}
	{
		// setActive(false);
		EnemyControl_setActive_mEEE23731CA7E5E4B782124D44E12EE36E0363C69_inline(__this, (bool)0, NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void EnemyControl::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyControl_Reset_mD079EE4A4C0D64A05198D515BB8E37495229671A (EnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// setActive(true);
		EnemyControl_setActive_mEEE23731CA7E5E4B782124D44E12EE36E0363C69_inline(__this, (bool)1, NULL);
		// phaseRunning = false;
		__this->___phaseRunning_8 = (bool)0;
		// currentChild = 0;
		__this->___currentChild_10 = 0;
		// if (transform.childCount > 0)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_1;
		L_1 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_0, NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		// child = this.gameObject.transform.GetChild(currentChild).gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		int32_t L_4 = __this->___currentChild_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_3, L_4, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		__this->___child_9 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___child_9), (void*)L_6);
	}

IL_0044:
	{
		// for (int bogus = 0; bogus < count; bogus++)
		V_0 = 0;
		goto IL_006d;
	}

IL_0048:
	{
		// this.gameObject.transform.GetChild(bogus).gameObject.GetComponent<Unit>().setActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		int32_t L_9 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_8, L_9, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_12;
		L_12 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_11, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		Unit_setActive_mBB63B3E8956968D61C6D53FCCBD0EABA00B399EF_inline(L_12, (bool)1, NULL);
		// for (int bogus = 0; bogus < count; bogus++)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_006d:
	{
		// for (int bogus = 0; bogus < count; bogus++)
		int32_t L_14 = V_0;
		int32_t L_15 = __this->___count_5;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0048;
		}
	}
	{
		// }
		return;
	}
}
// System.Void EnemyControl::moveInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyControl_moveInit_m07D090D008A6BBF20A4131129BDAA6FBFC98C81E (EnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// child.GetComponent<Unit>().enemyMove();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___child_9;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_1;
		L_1 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_0, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		Unit_enemyMove_mBD7E16D059AB03C67885E84C2570158FE65577DE(L_1, NULL);
		// }
		return;
	}
}
// System.Void EnemyControl::cycleChild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyControl_cycleChild_m305F4741982E4894AFB1994BB4CC74BEF51F4595 (EnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (child)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___child_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		// if (!child.GetComponent<Unit>().getActive())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___child_9;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_3;
		L_3 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_2, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		bool L_4;
		L_4 = Unit_getActive_m86639388882C58CE77B4544970C888114615F821_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		// phaseRunning = false;
		__this->___phaseRunning_8 = (bool)0;
		// deadChild();
		EnemyControl_deadChild_m24FCB1DEDF4D5BE6F9619B1943BD4D1DD8E46217(__this, NULL);
		return;
	}

IL_002d:
	{
		// phaseRunning = false;
		__this->___phaseRunning_8 = (bool)0;
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void EnemyControl::deadChild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyControl_deadChild_m24FCB1DEDF4D5BE6F9619B1943BD4D1DD8E46217 (EnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAE84006D80CACC9D56696D29EB6DF7160BB70BC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentChild < transform.childCount)
		int32_t L_0 = __this->___currentChild_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_2;
		L_2 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_1, NULL);
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_0053;
		}
	}
	{
		// currentChild++;
		int32_t L_3 = __this->___currentChild_10;
		__this->___currentChild_10 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		// Debug.Log(currentChild);
		int32_t L_4 = __this->___currentChild_10;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
		// child = this.gameObject.transform.GetChild(currentChild).gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		int32_t L_9 = __this->___currentChild_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_8, L_9, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		__this->___child_9 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___child_9), (void*)L_11);
		return;
	}

IL_0053:
	{
		// Debug.Log("Aborting");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralBAE84006D80CACC9D56696D29EB6DF7160BB70BC, NULL);
		// setActive(false);
		EnemyControl_setActive_mEEE23731CA7E5E4B782124D44E12EE36E0363C69_inline(__this, (bool)0, NULL);
		// currentChild = 0;
		__this->___currentChild_10 = 0;
		// child = this.gameObject.transform.GetChild(currentChild).gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		int32_t L_14 = __this->___currentChild_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_13, L_14, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
		__this->___child_9 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___child_9), (void*)L_16);
		// }
		return;
	}
}
// System.Boolean EnemyControl::getWin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnemyControl_getWin_mD3B45AFA89CF51921C59F91800FFE5A0081E6394 (EnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C* __this, const RuntimeMethod* method) 
{
	{
		// return (playerWin);
		bool L_0 = __this->___playerWin_11;
		return L_0;
	}
}
// System.Void EnemyControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyControl__ctor_mB3B75AD179F7DB7D33BEB5CB366A906DC56FAB52 (EnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControl_Start_mFADBD79243A6B6984704BCCACC7320F96F4D34C7 (PlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874* __this, const RuntimeMethod* method) 
{
	{
		// count = transform.childCount;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_1;
		L_1 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_0, NULL);
		__this->___count_5 = L_1;
		// setActive(true);
		PlayerControl_setActive_m9B467C14A66F41E6BD30A9DF63E68BE1F15759F2_inline(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void PlayerControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControl_Update_m3A67C6EE4E8A895323A173E7D58C82ECC002C428 (PlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874* __this, const RuntimeMethod* method) 
{
	{
		// if (count < 1)
		int32_t L_0 = __this->___count_5;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_0010;
		}
	}
	{
		// enemyWin = true;
		__this->___enemyWin_6 = (bool)1;
	}

IL_0010:
	{
		// }
		return;
	}
}
// System.Void PlayerControl::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControl_LateUpdate_m1DD999ABB790500BF5B8E41DE166B9BF17979C44 (PlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874* __this, const RuntimeMethod* method) 
{
	{
		// count = transform.childCount;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_1;
		L_1 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_0, NULL);
		__this->___count_5 = L_1;
		// checkCount();
		PlayerControl_checkCount_m82EE51CB7F4BFD2A4C5ED79D12A64DBB984E1C43(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayerControl::setActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControl_setActive_m9B467C14A66F41E6BD30A9DF63E68BE1F15759F2 (PlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874* __this, bool ___active0, const RuntimeMethod* method) 
{
	{
		// isActive = active;
		bool L_0 = ___active0;
		__this->___isActive_4 = L_0;
		// }
		return;
	}
}
// System.Boolean PlayerControl::getActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerControl_getActive_m10E5D0D0307DC38974116E7C291D41E0C0224C1E (PlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874* __this, const RuntimeMethod* method) 
{
	{
		// return (isActive);
		bool L_0 = __this->___isActive_4;
		return L_0;
	}
}
// System.Void PlayerControl::checkCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControl_checkCount_m82EE51CB7F4BFD2A4C5ED79D12A64DBB984E1C43 (PlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int tempCount = 0;
		V_0 = 0;
		// for (int bogus = 0; bogus < count; bogus++)
		V_1 = 0;
		goto IL_0030;
	}

IL_0006:
	{
		// if (!this.gameObject.transform.GetChild(bogus).gameObject.GetComponent<Unit>().getActive())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		int32_t L_2 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_1, L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_5;
		L_5 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_4, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		bool L_6;
		L_6 = Unit_getActive_m86639388882C58CE77B4544970C888114615F821_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		// tempCount++;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002c:
	{
		// for (int bogus = 0; bogus < count; bogus++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0030:
	{
		// for (int bogus = 0; bogus < count; bogus++)
		int32_t L_9 = V_1;
		int32_t L_10 = __this->___count_5;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0006;
		}
	}
	{
		// if (tempCount == count)
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___count_5;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0049;
		}
	}
	{
		// setActive(false);
		PlayerControl_setActive_m9B467C14A66F41E6BD30A9DF63E68BE1F15759F2_inline(__this, (bool)0, NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void PlayerControl::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControl_Reset_m22585886C197C602F2760F074DC39DAF96407F98 (PlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// setActive(true);
		PlayerControl_setActive_m9B467C14A66F41E6BD30A9DF63E68BE1F15759F2_inline(__this, (bool)1, NULL);
		// for (int bogus = 0; bogus < count; bogus++)
		V_0 = 0;
		goto IL_0030;
	}

IL_000b:
	{
		// this.gameObject.transform.GetChild(bogus).gameObject.GetComponent<Unit>().setActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		int32_t L_2 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_1, L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_5;
		L_5 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_4, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		Unit_setActive_mBB63B3E8956968D61C6D53FCCBD0EABA00B399EF_inline(L_5, (bool)1, NULL);
		// for (int bogus = 0; bogus < count; bogus++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0030:
	{
		// for (int bogus = 0; bogus < count; bogus++)
		int32_t L_7 = V_0;
		int32_t L_8 = __this->___count_5;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean PlayerControl::getWin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerControl_getWin_m07581D3E6956E0C2DC709E75F9C99C8B998CCA71 (PlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874* __this, const RuntimeMethod* method) 
{
	{
		// return (enemyWin);
		bool L_0 = __this->___enemyWin_6;
		return L_0;
	}
}
// System.Void PlayerControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControl__ctor_m2B3A599A61BE9CCA98820EB2390E965CBE920915 (PlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874* __this, const RuntimeMethod* method) 
{
	{
		// private bool isActive = true;
		__this->___isActive_4 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RandomNumberGenerator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomNumberGenerator_Start_m58F41DE170922E081C45FC3E09D98192CE99FF4A (RandomNumberGenerator_tD88337DD8ABCBC5650BBB20FF9F8730F979F9FD8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void RandomNumberGenerator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomNumberGenerator_Update_m69C2E7CE4E477C88AE8A6162D1BA2C0FE525FBAF (RandomNumberGenerator_tD88337DD8ABCBC5650BBB20FF9F8730F979F9FD8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Int32 RandomNumberGenerator::randomNumberGenerator(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RandomNumberGenerator_randomNumberGenerator_mC7EBFB13A643CBA1853113C0BF1E39A28DBF28D5 (RandomNumberGenerator_tD88337DD8ABCBC5650BBB20FF9F8730F979F9FD8* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___sequence0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// System.Random rand = new System.Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		V_0 = L_0;
		// int ave = 0;
		V_2 = 0;
		// for (int bogus = 0; bogus < sequence.Length; bogus++)
		V_3 = 0;
		goto IL_0023;
	}

IL_000c:
	{
		// rnRaw = (float)rand.NextDouble();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_1 = V_0;
		double L_2;
		L_2 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_1);
		// rn = (int)(rnRaw * 100);
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_2), (100.0f))));
		// sequence[bogus] = rn;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___sequence0;
		int32_t L_4 = V_3;
		int32_t L_5 = V_1;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_5);
		// for (int bogus = 0; bogus < sequence.Length; bogus++)
		int32_t L_6 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0023:
	{
		// for (int bogus = 0; bogus < sequence.Length; bogus++)
		int32_t L_7 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___sequence0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		// for (int bogus = 0; bogus < sequence.Length; bogus++)
		V_4 = 0;
		goto IL_003b;
	}

IL_002e:
	{
		// ave += sequence[bogus];
		int32_t L_9 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = ___sequence0;
		int32_t L_11 = V_4;
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, L_13));
		// for (int bogus = 0; bogus < sequence.Length; bogus++)
		int32_t L_14 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_003b:
	{
		// for (int bogus = 0; bogus < sequence.Length; bogus++)
		int32_t L_15 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ___sequence0;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_002e;
		}
	}
	{
		// ave = ave / sequence.Length;
		int32_t L_17 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = ___sequence0;
		V_2 = ((int32_t)(L_17/((int32_t)(((RuntimeArray*)L_18)->max_length))));
		// return (ave);
		int32_t L_19 = V_2;
		return L_19;
	}
}
// System.Void RandomNumberGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomNumberGenerator__ctor_m4C2D6E9FC1A9D7D582650848FB9570FFF145A5BD (RandomNumberGenerator_tD88337DD8ABCBC5650BBB20FF9F8730F979F9FD8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StartButton::onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartButton_onClick_m45290448182581F2082B53F0208DF222A3F7C69F (StartButton_tF8F6A56061EF51B26F82FD5C23D529D030248545* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(1, LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mC4BD32145437F282CAA13E1A8685001061E79D98(1, 0, NULL);
		// }
		return;
	}
}
// System.Void StartButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartButton__ctor_m8454B8AF76546ABE9126D56D36A2AC0DDCA673B3 (StartButton_tF8F6A56061EF51B26F82FD5C23D529D030248545* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TextControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextControl_Start_m2E4AEA3DAC5D77E9F13AA31EEC1D802923C61BD1 (TextControl_t71D12CBDD07CE3910A0062CA9670EB7F7C6E0DE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// phaseText.text = "";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___phaseText_4;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// tempTimer = null;
		__this->___tempTimer_7 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempTimer_7), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// }
		return;
	}
}
// System.Void TextControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextControl_Update_m558B9EBF24B2D54886CD0F098BE4FFDD50EC53A3 (TextControl_t71D12CBDD07CE3910A0062CA9670EB7F7C6E0DE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTimer_t2FE811324BD2C741B8D6EBC18E20230874E35A20_m04A2D1E271ADAEEE5975D3EF890F08E834863402_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// if (tempTimer.GetComponent<Timer>().getTime() < 0)
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___tempTimer_7;
			Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* L_1;
			L_1 = GameObject_GetComponent_TisTimer_t2FE811324BD2C741B8D6EBC18E20230874E35A20_m04A2D1E271ADAEEE5975D3EF890F08E834863402(L_0, GameObject_GetComponent_TisTimer_t2FE811324BD2C741B8D6EBC18E20230874E35A20_m04A2D1E271ADAEEE5975D3EF890F08E834863402_RuntimeMethod_var);
			float L_2;
			L_2 = Timer_getTime_mDB08066CE17689274FFA9AFB99C399B198E997BA_inline(L_1, NULL);
			if ((!(((float)L_2) < ((float)(0.0f)))))
			{
				goto IL_0045_1;
			}
		}
		{
			// isTimed = false;
			__this->___isTimed_6 = (bool)0;
			// phaseText.text = "";
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___phaseText_4;
			VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
			// phaseText.color = Color.white;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = __this->___phaseText_4;
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
			L_5 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
			// tempTimer = null;
			__this->___tempTimer_7 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___tempTimer_7), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		}

IL_0045_1:
		{
			// }
			goto IL_004a;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0047;
		}
		throw e;
	}

CATCH_0047:
	{// begin catch(System.Object)
		// catch
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004a;
	}// end catch (depth: 1)

IL_004a:
	{
		// }
		return;
	}
}
// System.Void TextControl::playerPhaseShow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextControl_playerPhaseShow_m7A0828E8430576EDC46BADB29215FE1787CA40B8 (TextControl_t71D12CBDD07CE3910A0062CA9670EB7F7C6E0DE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91A6E012240CCCE4A655675AB0A647F4F787809D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isTimed = true;
		__this->___isTimed_6 = (bool)1;
		// phaseText.color = Color.blue;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___phaseText_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// phaseText.text = "PLAYER PHASE";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___phaseText_4;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, _stringLiteral91A6E012240CCCE4A655675AB0A647F4F787809D);
		// tempTimer = Instantiate(timer);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___timer_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		__this->___tempTimer_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempTimer_7), (void*)L_4);
		// }
		return;
	}
}
// System.Void TextControl::enemyPhaseShow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextControl_enemyPhaseShow_m4D85B951BACFE887B32F1429DBA4A8254C26438D (TextControl_t71D12CBDD07CE3910A0062CA9670EB7F7C6E0DE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FF8D985C31E383E0E53B73107583F2870FF4C21);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isTimed = true;
		__this->___isTimed_6 = (bool)1;
		// phaseText.color = Color.red;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___phaseText_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// phaseText.text = "ENEMY PHASE";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___phaseText_4;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, _stringLiteral6FF8D985C31E383E0E53B73107583F2870FF4C21);
		// tempTimer = Instantiate(timer);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___timer_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		__this->___tempTimer_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempTimer_7), (void*)L_4);
		// }
		return;
	}
}
// System.Boolean TextControl::getTimed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextControl_getTimed_m177EFEC927C56C5EB2F4CAC30832162F39ED059C (TextControl_t71D12CBDD07CE3910A0062CA9670EB7F7C6E0DE4* __this, const RuntimeMethod* method) 
{
	{
		// return (isTimed);
		bool L_0 = __this->___isTimed_6;
		return L_0;
	}
}
// System.Void TextControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextControl__ctor_m4595095152E8442B570B8CB5DE0F3E1973B6B779 (TextControl_t71D12CBDD07CE3910A0062CA9670EB7F7C6E0DE4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tile::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_OnTriggerEnter2D_mC4FAAAE7E7FD260993620D31A456D71AA2175B33 (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31EB1587A3B4A2B074D542811AD6EB5F6570F4C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67E7A1294A9F70007D0898F169A0296695E940D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.CompareTag("Impassable"))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteral67E7A1294A9F70007D0898F169A0296695E940D9, NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
		return;
	}

IL_001e:
	{
		// else if ((collision.gameObject.CompareTag("Mountain") || collision.gameObject.CompareTag("Enemy")) && this.gameObject.CompareTag("Move"))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		bool L_6;
		L_6 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_5, _stringLiteral31EB1587A3B4A2B074D542811AD6EB5F6570F4C3, NULL);
		if (L_6)
		{
			goto IL_0042;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_7 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		bool L_9;
		L_9 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_8, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_9)
		{
			goto IL_00a0;
		}
	}

IL_0042:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_11;
		L_11 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_10, _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1, NULL);
		if (!L_11)
		{
			goto IL_00a0;
		}
	}
	{
		// Instantiate(attackSquare, transform.position, new Quaternion(0, 0, 0, 0), transform.parent.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___attackSquare_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_15), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_16, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_12, L_14, L_15, L_18, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_20, NULL);
		return;
	}

IL_00a0:
	{
		// else if (collision.gameObject.CompareTag("Player") && collision.gameObject != transform.parent.gameObject)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_21 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_21, NULL);
		bool L_23;
		L_23 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_22, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_23)
		{
			goto IL_00da;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_24 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_24, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_26, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_25, L_28, NULL);
		if (!L_29)
		{
			goto IL_00da;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_30, NULL);
	}

IL_00da:
	{
		// }
		return;
	}
}
// System.Void Tile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile__ctor_mB2C904B47040471552C938AE751AC0BF80B369E7 (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Timer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Start_m6820D211A06B2E5E24795D7EBE67EE865F39BC43 (Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* __this, const RuntimeMethod* method) 
{
	{
		// currentTime = time;
		float L_0 = __this->___time_4;
		__this->___currentTime_5 = L_0;
		// }
		return;
	}
}
// System.Void Timer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Update_m3AC30EFD54E8E1010F6E601AE179212E71E6B2CD (Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentTime > 0)
		float L_0 = __this->___currentTime_5;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0020;
		}
	}
	{
		// currentTime -= Time.deltaTime;
		float L_1 = __this->___currentTime_5;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___currentTime_5 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		return;
	}

IL_0020:
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
		// }
		return;
	}
}
// System.Single Timer::getTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Timer_getTime_mDB08066CE17689274FFA9AFB99C399B198E997BA (Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* __this, const RuntimeMethod* method) 
{
	{
		// return (currentTime);
		float L_0 = __this->___currentTime_5;
		return L_0;
	}
}
// System.Void Timer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer__ctor_m5FF13F1DAD0527F97E229A1904A8AD662731C4B5 (Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wait::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wait_Update_m8D721FE45509ECC26C18D0E959421678803E9506 (Wait_tCC9A6C65D8284B1D06D827760BA0C388AC1CB181* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E_m6F460C0B4AEBF8C0FA26BCCB4244C3C191FBE964_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (cursor.GetComponent<CursorSet>().getTempcharacter())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___cursor_5;
		CursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E* L_1;
		L_1 = GameObject_GetComponent_TisCursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E_m6F460C0B4AEBF8C0FA26BCCB4244C3C191FBE964(L_0, GameObject_GetComponent_TisCursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E_m6F460C0B4AEBF8C0FA26BCCB4244C3C191FBE964_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = CursorSet_getTempcharacter_m5A1F2203F432DF921B7F495C285286EAC55F3639_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// player = cursor.GetComponent<CursorSet>().getTempcharacter();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___cursor_5;
		CursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E* L_5;
		L_5 = GameObject_GetComponent_TisCursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E_m6F460C0B4AEBF8C0FA26BCCB4244C3C191FBE964(L_4, GameObject_GetComponent_TisCursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E_m6F460C0B4AEBF8C0FA26BCCB4244C3C191FBE964_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = CursorSet_getTempcharacter_m5A1F2203F432DF921B7F495C285286EAC55F3639_inline(L_5, NULL);
		__this->___player_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_4), (void*)L_6);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Wait::onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wait_onClick_mBB14E77E8ABA34918920681955147B3AC2622C80 (Wait_tCC9A6C65D8284B1D06D827760BA0C388AC1CB181* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F_m38D3DB93195924ABA99F76D561879EB33C5651DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E_m6F460C0B4AEBF8C0FA26BCCB4244C3C191FBE964_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.GetComponentInParent<CommandControl>().setSelected(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F* L_1;
		L_1 = Component_GetComponentInParent_TisCommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F_m38D3DB93195924ABA99F76D561879EB33C5651DA(L_0, Component_GetComponentInParent_TisCommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F_m38D3DB93195924ABA99F76D561879EB33C5651DA_RuntimeMethod_var);
		CommandControl_setSelected_m108B17C71E445DB0C48385F08146B815C4443C17_inline(L_1, (bool)1, NULL);
		// transform.GetComponentInParent<CommandControl>().Reset();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F* L_3;
		L_3 = Component_GetComponentInParent_TisCommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F_m38D3DB93195924ABA99F76D561879EB33C5651DA(L_2, Component_GetComponentInParent_TisCommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F_m38D3DB93195924ABA99F76D561879EB33C5651DA_RuntimeMethod_var);
		CommandControl_Reset_mDA6678BBB6E9BC9EC6352254525EAC170AE94662(L_3, NULL);
		// player.GetComponent<Unit>().move(cursor.transform.position - cursor.GetComponent<CursorSet>().offset, cursor, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___player_4;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_5;
		L_5 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_4, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___cursor_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___cursor_5;
		CursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E* L_10;
		L_10 = GameObject_GetComponent_TisCursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E_m6F460C0B4AEBF8C0FA26BCCB4244C3C191FBE964(L_9, GameObject_GetComponent_TisCursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E_m6F460C0B4AEBF8C0FA26BCCB4244C3C191FBE964_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = L_10->___offset_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_8, L_11, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___cursor_5;
		Unit_move_m715A8A5833E864069E6365181ABCB9E13560513F(L_5, L_12, L_13, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Wait::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wait__ctor_m653E6DF34C0733F48B5BF03EFC3EFDCDDC62B5D7 (Wait_tCC9A6C65D8284B1D06D827760BA0C388AC1CB181* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void unit.Unit::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_Start_mCB504F545433F20D66FA1B73D15A978DE961E513 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spriteRender = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___spriteRender_29 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteRender_29), (void*)L_0);
		// isActive = true;
		__this->___isActive_28 = (bool)1;
		// maxHp = hp;
		int32_t L_1 = __this->___hp_6;
		__this->___maxHp_21 = L_1;
		// target = null;
		__this->___target_30 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_30), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// isAttackSequence = false;
		__this->___isAttackSequence_35 = (bool)0;
		// parent = transform.parent.gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		__this->___parent_40 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_40), (void*)L_4);
		// }
		return;
	}
}
// System.Void unit.Unit::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_Update_m2D6D45ACD5A9037BF36E633A42F5F4B56A28611E (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isActive && this.gameObject.CompareTag("Player"))
		bool L_0 = __this->___isActive_28;
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		// spriteRender.color = new Color(255, 255, 255);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___spriteRender_29;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_4), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_3, L_4, NULL);
		goto IL_0095;
	}

IL_003b:
	{
		// else if (isActive && this.gameObject.CompareTag("Enemy"))
		bool L_5 = __this->___isActive_28;
		if (!L_5)
		{
			goto IL_0076;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_7;
		L_7 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_6, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_7)
		{
			goto IL_0076;
		}
	}
	{
		// spriteRender.color = new Color(255, 0, 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___spriteRender_29;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_9), (255.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_8, L_9, NULL);
		goto IL_0095;
	}

IL_0076:
	{
		// spriteRender.color = new Color(0, 0, 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___spriteRender_29;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_11), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_10, L_11, NULL);
	}

IL_0095:
	{
		// setAttack();
		Unit_setAttack_mDE6030AA133D1CA6D231C550F03FEA6835552428(__this, NULL);
		// setDefense();
		Unit_setDefense_m936A917F503C8E25217D65A31B1EC60FFC7FBF95(__this, NULL);
		// setAtkSpd();
		Unit_setAtkSpd_m49E9ACB2E221C14EE0E778C294EEE0A5D9955003(__this, NULL);
		// setAccuracy();
		Unit_setAccuracy_mAA55006F890ACAD23646C03489F45F6E3251F55F(__this, NULL);
		// setAvoid();
		Unit_setAvoid_mAABF59BAB2D722E52D555A6B3E2647C478CCD3AF(__this, NULL);
		// setCritRate();
		Unit_setCritRate_m978575C4099887A422D239367D3D67EE0CBCF2E9(__this, NULL);
		// setCritAvoid();
		Unit_setCritAvoid_m3B855940700E307FB10A6ADE320840F8BF140D9E(__this, NULL);
		// if (isSearching && target)
		bool L_12 = __this->___isSearching_31;
		if (!L_12)
		{
			goto IL_0167;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___target_30;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_13, NULL);
		if (!L_14)
		{
			goto IL_0167;
		}
	}
	{
		// if (!isAttackSequence)
		bool L_15 = __this->___isAttackSequence_35;
		if (L_15)
		{
			goto IL_0160;
		}
	}
	{
		// doubleOpp(target);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___target_30;
		Unit_doubleOpp_mC77B1EC4CBBBD16AD4AD636FBE119006FAF617F2(__this, L_16, NULL);
		// target.GetComponent<Unit>().doubleOpp(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___target_30;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_18;
		L_18 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_17, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Unit_doubleOpp_mC77B1EC4CBBBD16AD4AD636FBE119006FAF617F2(L_18, L_19, NULL);
		// currentAttackSequence = Instantiate(attackSequence);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___attackSequence_33;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_20, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		__this->___currentAttackSequence_36 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentAttackSequence_36), (void*)L_21);
		// attackUI.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___attackUI_34;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_22, (bool)1, NULL);
		// isAttackSequence = true;
		__this->___isAttackSequence_35 = (bool)1;
		// attackUI.GetComponent<AttackSequenceUI>().sequenceInit(this.gameObject, target, currentAttackSequence, getAttacks(), target.GetComponent<Unit>().getAttacks());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___attackUI_34;
		AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* L_24;
		L_24 = GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403(L_23, GameObject_GetComponent_TisAttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D_m718835E3DA415FBDF3E0087AE6D72F876BB52403_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___target_30;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___currentAttackSequence_36;
		int32_t L_28;
		L_28 = Unit_getAttacks_mA1AD69B034D9B8602C5E46EA30F761BFC4E18125_inline(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___target_30;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_30;
		L_30 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_29, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		int32_t L_31;
		L_31 = Unit_getAttacks_mA1AD69B034D9B8602C5E46EA30F761BFC4E18125_inline(L_30, NULL);
		AttackSequenceUI_sequenceInit_m353CE4BD56FAB2C0E09465DFC31CF6F8F75CD456(L_24, L_25, L_26, L_27, L_28, L_31, NULL);
	}

IL_0160:
	{
		// isSearching = false;
		__this->___isSearching_31 = (bool)0;
	}

IL_0167:
	{
		// }
		return;
	}
}
// System.Void unit.Unit::getMoveVision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_getMoveVision_mA025A5932581A7C45B8BB358FCDFBA1D96B3D433 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// Vector3 tempOffset = new Vector3(0, 0, 0);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), (0.0f), (0.0f), (0.0f), NULL);
		// int nonsense = 0;
		V_1 = 0;
		// for (int bogus = 0; bogus <= mov; bogus ++)
		V_2 = 0;
		goto IL_0392;
	}

IL_001f:
	{
		// tempOffset = new Vector3(squareOffsetX, squareOffsetY + bogus, 0.01f);
		float L_0 = __this->___squareOffsetX_26;
		float L_1 = __this->___squareOffsetY_25;
		int32_t L_2 = V_2;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_0, ((float)il2cpp_codegen_add(L_1, ((float)L_2))), (0.00999999978f), NULL);
		// Instantiate(attackSquare, (transform.position + tempOffset) + (new Vector3(1, 0, 0) * (bogus - (mov + 1))), new Quaternion(0, 0, 0, 0), transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___attackSquare_24;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		int32_t L_9 = V_2;
		int32_t L_10 = __this->___mov_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_8, ((float)((int32_t)il2cpp_codegen_subtract(L_9, ((int32_t)il2cpp_codegen_add(L_10, 1))))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_7, L_11, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_13), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_3, L_12, L_13, L_14, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		// if (bogus ==0)
		int32_t L_16 = V_2;
		if (!L_16)
		{
			goto IL_013e;
		}
	}
	{
		// tempOffset = new Vector3(squareOffsetX, squareOffsetY + bogus, -0.01f);
		float L_17 = __this->___squareOffsetX_26;
		float L_18 = __this->___squareOffsetY_25;
		int32_t L_19 = V_2;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_17, ((float)il2cpp_codegen_add(L_18, ((float)L_19))), (-0.00999999978f), NULL);
		// Instantiate(attackSquare, (transform.position - (tempOffset - new Vector3(0, 1, 0))) + (new Vector3(1, 0, 0) * (bogus - (mov + 1))), new Quaternion(0, 0, 0, 0), transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___attackSquare_24;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_23, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_22, L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_27), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		int32_t L_28 = V_2;
		int32_t L_29 = __this->___mov_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_27, ((float)((int32_t)il2cpp_codegen_subtract(L_28, ((int32_t)il2cpp_codegen_add(L_29, 1))))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_26, L_30, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_32), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_20, L_31, L_32, L_33, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
	}

IL_013e:
	{
		// for (int bogus2 = (mov * -1) + bogus; bogus2 <= mov - bogus; bogus2++)
		int32_t L_35 = __this->___mov_14;
		int32_t L_36 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_35, (-1))), L_36));
		goto IL_025f;
	}

IL_014e:
	{
		// tempOffset = new Vector3(squareOffsetX, squareOffsetY + bogus, 0.01f);
		float L_37 = __this->___squareOffsetX_26;
		float L_38 = __this->___squareOffsetY_25;
		int32_t L_39 = V_2;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_37, ((float)il2cpp_codegen_add(L_38, ((float)L_39))), (0.00999999978f), NULL);
		// Instantiate(moveSquare, (transform.position + tempOffset) + (new Vector3(1, 0, 0) * bogus2), new Quaternion(0, 0, 0, 0), transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___moveSquare_23;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_42, L_43, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_45), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		int32_t L_46 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_45, ((float)L_46), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_44, L_47, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_49;
		memset((&L_49), 0, sizeof(L_49));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_49), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51;
		L_51 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_40, L_48, L_49, L_50, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		// if (bogus == 0)
		int32_t L_52 = V_2;
		if (!L_52)
		{
			goto IL_025b;
		}
	}
	{
		// tempOffset = new Vector3(squareOffsetX, squareOffsetY + bogus, -0.01f);
		float L_53 = __this->___squareOffsetX_26;
		float L_54 = __this->___squareOffsetY_25;
		int32_t L_55 = V_2;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_53, ((float)il2cpp_codegen_add(L_54, ((float)L_55))), (-0.00999999978f), NULL);
		// Instantiate(moveSquare, (transform.position - (tempOffset - new Vector3(0, 1, 0))) + (new Vector3(1, 0, 0) * bogus2), new Quaternion(0, 0, 0, 0), transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = __this->___moveSquare_23;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57;
		L_57 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_57, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		memset((&L_60), 0, sizeof(L_60));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_60), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_59, L_60, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_58, L_61, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		memset((&L_63), 0, sizeof(L_63));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_63), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		int32_t L_64 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_63, ((float)L_64), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_62, L_65, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_67;
		memset((&L_67), 0, sizeof(L_67));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_67), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68;
		L_68 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69;
		L_69 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_56, L_66, L_67, L_68, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
	}

IL_025b:
	{
		// for (int bogus2 = (mov * -1) + bogus; bogus2 <= mov - bogus; bogus2++)
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
	}

IL_025f:
	{
		// for (int bogus2 = (mov * -1) + bogus; bogus2 <= mov - bogus; bogus2++)
		int32_t L_71 = V_3;
		int32_t L_72 = __this->___mov_14;
		int32_t L_73 = V_2;
		if ((((int32_t)L_71) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_72, L_73)))))
		{
			goto IL_014e;
		}
	}
	{
		// tempOffset = new Vector3(squareOffsetX, squareOffsetY + bogus, 0.01f);
		float L_74 = __this->___squareOffsetX_26;
		float L_75 = __this->___squareOffsetY_25;
		int32_t L_76 = V_2;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_74, ((float)il2cpp_codegen_add(L_75, ((float)L_76))), (0.00999999978f), NULL);
		// Instantiate(attackSquare, (transform.position + tempOffset) + (new Vector3(1, 0, 0) * ((mov + 1) - bogus)), new Quaternion(0, 0, 0, 0), transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_77 = __this->___attackSquare_24;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_78;
		L_78 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_78, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_79, L_80, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		memset((&L_82), 0, sizeof(L_82));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_82), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		int32_t L_83 = __this->___mov_14;
		int32_t L_84 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_82, ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_83, 1)), L_84))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_81, L_85, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_87;
		memset((&L_87), 0, sizeof(L_87));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_87), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_88;
		L_88 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_89;
		L_89 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_77, L_86, L_87, L_88, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		// if (bogus == 0)
		int32_t L_90 = V_2;
		if (!L_90)
		{
			goto IL_038c;
		}
	}
	{
		// tempOffset = new Vector3(squareOffsetX, squareOffsetY + bogus, -0.01f);
		float L_91 = __this->___squareOffsetX_26;
		float L_92 = __this->___squareOffsetY_25;
		int32_t L_93 = V_2;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_91, ((float)il2cpp_codegen_add(L_92, ((float)L_93))), (-0.00999999978f), NULL);
		// Instantiate(attackSquare, (transform.position - (tempOffset - new Vector3(0, 1, 0))) + (new Vector3(1, 0, 0) * ((mov + 1) - bogus)), new Quaternion(0, 0, 0, 0), transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_94 = __this->___attackSquare_24;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_95;
		L_95 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_95, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		L_99 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_97, L_98, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100;
		L_100 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_96, L_99, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
		memset((&L_101), 0, sizeof(L_101));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_101), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		int32_t L_102 = __this->___mov_14;
		int32_t L_103 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
		L_104 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_101, ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_102, 1)), L_103))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105;
		L_105 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_100, L_104, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_106;
		memset((&L_106), 0, sizeof(L_106));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_106), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_107;
		L_107 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_108;
		L_108 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_94, L_105, L_106, L_107, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
	}

IL_038c:
	{
		// nonsense = bogus;
		int32_t L_109 = V_2;
		V_1 = L_109;
		// for (int bogus = 0; bogus <= mov; bogus ++)
		int32_t L_110 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_110, 1));
	}

IL_0392:
	{
		// for (int bogus = 0; bogus <= mov; bogus ++)
		int32_t L_111 = V_2;
		int32_t L_112 = __this->___mov_14;
		if ((((int32_t)L_111) <= ((int32_t)L_112)))
		{
			goto IL_001f;
		}
	}
	{
		// tempOffset = new Vector3(squareOffsetX, squareOffsetY + nonsense, 0.01f);
		float L_113 = __this->___squareOffsetX_26;
		float L_114 = __this->___squareOffsetY_25;
		int32_t L_115 = V_1;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_113, ((float)il2cpp_codegen_add(L_114, ((float)L_115))), (0.00999999978f), NULL);
		// Instantiate(attackSquare, transform.position + (tempOffset + new Vector3(0, 1, 0)), new Quaternion(0, 0, 0, 0), transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_116 = __this->___attackSquare_24;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_117;
		L_117 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118;
		L_118 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_117, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120;
		memset((&L_120), 0, sizeof(L_120));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_120), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121;
		L_121 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_119, L_120, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122;
		L_122 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_118, L_121, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_123;
		memset((&L_123), 0, sizeof(L_123));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_123), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_124;
		L_124 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_125;
		L_125 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_116, L_122, L_123, L_124, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		// tempOffset = new Vector3(squareOffsetX, squareOffsetY + nonsense, -0.01f);
		float L_126 = __this->___squareOffsetX_26;
		float L_127 = __this->___squareOffsetY_25;
		int32_t L_128 = V_1;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_126, ((float)il2cpp_codegen_add(L_127, ((float)L_128))), (-0.00999999978f), NULL);
		// Instantiate(attackSquare, transform.position - tempOffset, new Quaternion(0, 0, 0, 0), transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_129 = __this->___attackSquare_24;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_130;
		L_130 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_131;
		L_131 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_130, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133;
		L_133 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_131, L_132, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_134;
		memset((&L_134), 0, sizeof(L_134));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_134), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_135;
		L_135 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_136;
		L_136 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_129, L_133, L_134, L_135, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void unit.Unit::killAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_killAll_m5CB4367F6EC250283FE7ED20744CB6F82E9FAB42 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int count = transform.childCount;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_1;
		L_1 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_0, NULL);
		V_0 = L_1;
		// for (int bogus = 0; bogus < count; bogus++)
		V_1 = 0;
		goto IL_002f;
	}

IL_0010:
	{
		// Destroy(this.gameObject.transform.GetChild(bogus).gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		int32_t L_4 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_3, L_4, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
		// for (int bogus = 0; bogus < count; bogus++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002f:
	{
		// for (int bogus = 0; bogus < count; bogus++)
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void unit.Unit::move(UnityEngine.Vector3,UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_move_m715A8A5833E864069E6365181ABCB9E13560513F (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cursor1, bool ___isAttack2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// cursor.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___cursor1;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// float x = target.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___target0;
		float L_2 = L_1.___x_2;
		// float y = target.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___target0;
		float L_4 = L_3.___y_3;
		V_0 = L_4;
		// int loopX = (int) (x - transform.position.x);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___x_2;
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(L_2, L_7)));
		// int loopY = (int) (y - transform.position.y);
		float L_8 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___y_3;
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(L_8, L_11)));
		// if (loopX != 0)
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_005a;
		}
	}
	{
		// xMove = new Vector3(loopX / Math.Abs(loopX), 0, 0);
		int32_t L_13 = V_1;
		int32_t L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_15;
		L_15 = il2cpp_codegen_abs(L_14);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_3), ((float)((int32_t)(L_13/L_15))), (0.0f), (0.0f), NULL);
		goto IL_0070;
	}

IL_005a:
	{
		// xMove = new Vector3(0, 0, 0);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_3), (0.0f), (0.0f), (0.0f), NULL);
	}

IL_0070:
	{
		// if (loopY != 0)
		int32_t L_16 = V_2;
		if (!L_16)
		{
			goto IL_008f;
		}
	}
	{
		// yMove = new Vector3(0, loopY / Math.Abs(loopY), 0);
		int32_t L_17 = V_2;
		int32_t L_18 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_19;
		L_19 = il2cpp_codegen_abs(L_18);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_4), (0.0f), ((float)((int32_t)(L_17/L_19))), (0.0f), NULL);
		goto IL_00be;
	}

IL_008f:
	{
		// yMove = new Vector3(0, 0, 0);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_4), (0.0f), (0.0f), (0.0f), NULL);
		goto IL_00be;
	}

IL_00a7:
	{
		// transform.Translate(xMove * speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_3;
		float L_22 = __this->___speed_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_21, L_22, NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_20, L_23, NULL);
	}

IL_00be:
	{
		// while (transform.position.x != target.x)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		float L_26 = L_25.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___target0;
		float L_28 = L_27.___x_2;
		if ((!(((float)L_26) == ((float)L_28))))
		{
			goto IL_00a7;
		}
	}
	{
		goto IL_00f0;
	}

IL_00d8:
	{
		// transform.Translate(yMove * speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_4;
		float L_31 = __this->___speed_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_30, L_31, NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_29, L_32, NULL);
	}

IL_00f0:
	{
		// while (transform.position.y != target.y)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_33, NULL);
		float L_35 = L_34.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = ___target0;
		float L_37 = L_36.___y_3;
		if ((!(((float)L_35) == ((float)L_37))))
		{
			goto IL_00d8;
		}
	}
	{
		// killAll();
		Unit_killAll_m5CB4367F6EC250283FE7ED20744CB6F82E9FAB42(__this, NULL);
		// cursor.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = ___cursor1;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_38, (bool)1, NULL);
		// if (!isAttack)
		bool L_39 = ___isAttack2;
		if (L_39)
		{
			goto IL_0120;
		}
	}
	{
		// Reset(true);
		Unit_Reset_m77910D75557B5C6F60F722005D8FF6C2DD17A27B(__this, (bool)1, NULL);
		return;
	}

IL_0120:
	{
		// getAttackVision();
		Unit_getAttackVision_m120FC3C1761CE00A36E6B9810C72F696B87E05D9(__this, NULL);
		// }
		return;
	}
}
// System.Void unit.Unit::getAttackVision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_getAttackVision_m120FC3C1761CE00A36E6B9810C72F696B87E05D9 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int bogus = -1; bogus <= 1; bogus++)
		V_0 = (-1);
		goto IL_00dd;
	}

IL_0007:
	{
		// if (bogus != 0)
		int32_t L_0 = V_0;
		if (!L_0)
		{
			goto IL_00d9;
		}
	}
	{
		// Instantiate(attackSquare, new Vector3(transform.position.x + bogus + squareOffsetX, transform.position.y + squareOffsetY, 0.01f), new Quaternion(0, 0, 0, 0), transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___attackSquare_24;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___x_2;
		int32_t L_5 = V_0;
		float L_6 = __this->___squareOffsetX_26;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___y_3;
		float L_10 = __this->___squareOffsetY_25;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_4, ((float)L_5))), L_6)), ((float)il2cpp_codegen_add(L_9, L_10)), (0.00999999978f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_12), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_1, L_11, L_12, L_13, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		// Instantiate(attackSquare, new Vector3(transform.position.x + squareOffsetX, transform.position.y + bogus + squareOffsetY, 0.01f), new Quaternion(0, 0, 0, 0), transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___attackSquare_24;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		float L_18 = L_17.___x_2;
		float L_19 = __this->___squareOffsetX_26;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		float L_22 = L_21.___y_3;
		int32_t L_23 = V_0;
		float L_24 = __this->___squareOffsetY_25;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_25), ((float)il2cpp_codegen_add(L_18, L_19)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_22, ((float)L_23))), L_24)), (0.00999999978f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_26), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_15, L_25, L_26, L_27, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
	}

IL_00d9:
	{
		// for (int bogus = -1; bogus <= 1; bogus++)
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00dd:
	{
		// for (int bogus = -1; bogus <= 1; bogus++)
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) <= ((int32_t)1)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void unit.Unit::Reset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_Reset_m77910D75557B5C6F60F722005D8FF6C2DD17A27B (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, bool ___initiated0, const RuntimeMethod* method) 
{
	{
		// killAll();
		Unit_killAll_m5CB4367F6EC250283FE7ED20744CB6F82E9FAB42(__this, NULL);
		// setTarget(null);
		Unit_setTarget_m139B852A8B736B9771EBBC7524E5CE9ABB69E558_inline(__this, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		// isAttackSequence = false;
		__this->___isAttackSequence_35 = (bool)0;
		// currentAttackSequence = null;
		__this->___currentAttackSequence_36 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentAttackSequence_36), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// if (initiated)
		bool L_0 = ___initiated0;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// setActive(false);
		Unit_setActive_mBB63B3E8956968D61C6D53FCCBD0EABA00B399EF_inline(__this, (bool)0, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void unit.Unit::enemyMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_enemyMove_mBD7E16D059AB03C67885E84C2570158FE65577DE (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	{
		// players = GameObject.FindGameObjectsWithTag("Player");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		V_0 = L_0;
		// closest = enemyMoveCalc(players);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Unit_enemyMoveCalc_mE68D84B4BD785BF47B3EE5C968271066023E7382(__this, L_1, NULL);
		V_1 = L_2;
		// Vector3 target = closest.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		// float x = target.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5;
		float L_7 = L_6.___x_2;
		V_2 = L_7;
		// float y = target.y;
		float L_8 = L_6.___y_3;
		V_3 = L_8;
		// int loopX = (int)(x - transform.position.x);
		float L_9 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___x_2;
		V_4 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(L_9, L_12)));
		// int loopY = (int)(y - transform.position.y);
		float L_13 = V_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		float L_16 = L_15.___y_3;
		V_5 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(L_13, L_16)));
		// if (loopX != 0)
		int32_t L_17 = V_4;
		if (!L_17)
		{
			goto IL_0077;
		}
	}
	{
		// xMove = new Vector3(loopX / Math.Abs(loopX), 0, 0);
		int32_t L_18 = V_4;
		int32_t L_19 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_20;
		L_20 = il2cpp_codegen_abs(L_19);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_6), ((float)((int32_t)(L_18/L_20))), (0.0f), (0.0f), NULL);
		goto IL_008d;
	}

IL_0077:
	{
		// xMove = new Vector3(0, 0, 0);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_6), (0.0f), (0.0f), (0.0f), NULL);
	}

IL_008d:
	{
		// if (loopY != 0)
		int32_t L_21 = V_5;
		if (!L_21)
		{
			goto IL_00af;
		}
	}
	{
		// yMove = new Vector3(0, loopY / Math.Abs(loopY), 0);
		int32_t L_22 = V_5;
		int32_t L_23 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_24;
		L_24 = il2cpp_codegen_abs(L_23);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_7), (0.0f), ((float)((int32_t)(L_22/L_24))), (0.0f), NULL);
		goto IL_00c5;
	}

IL_00af:
	{
		// yMove = new Vector3(0, 0, 0);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_7), (0.0f), (0.0f), (0.0f), NULL);
	}

IL_00c5:
	{
		// if (xMove.x < 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_6;
		float L_26 = L_25.___x_2;
		if ((!(((float)L_26) < ((float)(0.0f)))))
		{
			goto IL_00dd;
		}
	}
	{
		// x++;
		float L_27 = V_2;
		V_2 = ((float)il2cpp_codegen_add(L_27, (1.0f)));
		goto IL_0123;
	}

IL_00dd:
	{
		// else if (xMove.x > 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_6;
		float L_29 = L_28.___x_2;
		if ((!(((float)L_29) > ((float)(0.0f)))))
		{
			goto IL_00f5;
		}
	}
	{
		// x--;
		float L_30 = V_2;
		V_2 = ((float)il2cpp_codegen_subtract(L_30, (1.0f)));
		goto IL_0123;
	}

IL_00f5:
	{
		// else if (yMove.y < 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_7;
		float L_32 = L_31.___y_3;
		if ((!(((float)L_32) < ((float)(0.0f)))))
		{
			goto IL_010d;
		}
	}
	{
		// y++;
		float L_33 = V_3;
		V_3 = ((float)il2cpp_codegen_add(L_33, (1.0f)));
		goto IL_0123;
	}

IL_010d:
	{
		// else if (yMove.y > 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_7;
		float L_35 = L_34.___y_3;
		if ((!(((float)L_35) > ((float)(0.0f)))))
		{
			goto IL_0123;
		}
	}
	{
		// y--;
		float L_36 = V_3;
		V_3 = ((float)il2cpp_codegen_subtract(L_36, (1.0f)));
	}

IL_0123:
	{
		// int tempMov = mov;
		int32_t L_37 = __this->___mov_14;
		V_8 = L_37;
		goto IL_014b;
	}

IL_012d:
	{
		// transform.Translate(xMove * speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_6;
		float L_40 = __this->___speed_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_39, L_40, NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_38, L_41, NULL);
		// tempMov--;
		int32_t L_42 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_014b:
	{
		// while (transform.position.x != x && tempMov > 0)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_43, NULL);
		float L_45 = L_44.___x_2;
		float L_46 = V_2;
		if ((((float)L_45) == ((float)L_46)))
		{
			goto IL_0183;
		}
	}
	{
		int32_t L_47 = V_8;
		if ((((int32_t)L_47) > ((int32_t)0)))
		{
			goto IL_012d;
		}
	}
	{
		goto IL_0183;
	}

IL_0165:
	{
		// transform.Translate(yMove * speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = V_7;
		float L_50 = __this->___speed_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_49, L_50, NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_48, L_51, NULL);
		// tempMov--;
		int32_t L_52 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_52, 1));
	}

IL_0183:
	{
		// while (transform.position.y != y && tempMov > 0)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53;
		L_53 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_53, NULL);
		float L_55 = L_54.___y_3;
		float L_56 = V_3;
		if ((((float)L_55) == ((float)L_56)))
		{
			goto IL_019b;
		}
	}
	{
		int32_t L_57 = V_8;
		if ((((int32_t)L_57) > ((int32_t)0)))
		{
			goto IL_0165;
		}
	}

IL_019b:
	{
		// if (transform.position.x == x && transform.position.y == y)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_58, NULL);
		float L_60 = L_59.___x_2;
		float L_61 = V_2;
		if ((!(((float)L_60) == ((float)L_61))))
		{
			goto IL_0202;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62;
		L_62 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_62, NULL);
		float L_64 = L_63.___y_3;
		float L_65 = V_3;
		if ((!(((float)L_64) == ((float)L_65))))
		{
			goto IL_0202;
		}
	}
	{
		// Debug.Log(x + ", " + y);
		String_t* L_66;
		L_66 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_2), NULL);
		String_t* L_67;
		L_67 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_3), NULL);
		String_t* L_68;
		L_68 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_66, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_67, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_68, NULL);
		// Debug.Log(transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_69;
		L_69 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_69, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71 = L_70;
		RuntimeObject* L_72 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_71);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_72, NULL);
		// isSearching = true;
		__this->___isSearching_31 = (bool)1;
		// setTarget(closest);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_73 = V_1;
		Unit_setTarget_m139B852A8B736B9771EBBC7524E5CE9ABB69E558_inline(__this, L_73, NULL);
		return;
	}

IL_0202:
	{
		// Reset(true);
		Unit_Reset_m77910D75557B5C6F60F722005D8FF6C2DD17A27B(__this, (bool)1, NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject unit.Unit::enemyMoveCalc(UnityEngine.GameObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Unit_enemyMoveCalc_mE68D84B4BD785BF47B3EE5C968271066023E7382 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___players0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// double distance = 0;
		V_0 = (0.0);
		// double tempDistance = 0;
		V_1 = (0.0);
		// GameObject player = null;
		V_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		// GameObject tempPlayer = null;
		V_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		// bool exists = true;
		V_4 = (bool)1;
		// for (int bogus = 0; bogus < players.Length + 1; bogus++)
		V_5 = 0;
		goto IL_0138;
	}

IL_0023:
	{
		// if (bogus == 1)
		int32_t L_0 = V_5;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_00a6;
		}
	}
	try
	{// begin try (depth: 1)
		// player = players[bogus];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = ___players0;
		int32_t L_2 = V_5;
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// distance = Math.Sqrt(Math.Pow(this.gameObject.transform.position.x - player.transform.position.x, 2) + Math.Pow(this.gameObject.transform.position.y - player.transform.position.y, 2));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___x_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_13;
		L_13 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265(((double)((float)il2cpp_codegen_subtract(L_8, L_12))), (2.0), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___y_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		float L_21 = L_20.___y_3;
		double L_22;
		L_22 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265(((double)((float)il2cpp_codegen_subtract(L_17, L_21))), (2.0), NULL);
		double L_23;
		L_23 = sqrt(((double)il2cpp_codegen_add(L_13, L_22)));
		V_0 = L_23;
		// }
		goto IL_00a6;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a0;
		}
		throw e;
	}

CATCH_00a0:
	{// begin catch(System.Object)
		// catch
		// exists = false;
		V_4 = (bool)0;
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a6;
	}// end catch (depth: 1)

IL_00a6:
	{
		// if (bogus > 0)
		int32_t L_24 = V_5;
		if ((((int32_t)L_24) <= ((int32_t)0)))
		{
			goto IL_0132;
		}
	}
	{
		// tempPlayer = players[bogus - 1];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_25 = ___players0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		V_3 = L_28;
		// tempDistance = Math.Sqrt(Math.Pow(this.gameObject.transform.position.x - tempPlayer.transform.position.x, 2) + Math.Pow(this.gameObject.transform.position.y - tempPlayer.transform.position.y, 2));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		float L_32 = L_31.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = V_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		float L_36 = L_35.___x_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_37;
		L_37 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265(((double)((float)il2cpp_codegen_subtract(L_32, L_36))), (2.0), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_39, NULL);
		float L_41 = L_40.___y_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = V_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_43, NULL);
		float L_45 = L_44.___y_3;
		double L_46;
		L_46 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265(((double)((float)il2cpp_codegen_subtract(L_41, L_45))), (2.0), NULL);
		double L_47;
		L_47 = sqrt(((double)il2cpp_codegen_add(L_37, L_46)));
		V_1 = L_47;
		// if (tempDistance < distance || !exists)
		double L_48 = V_1;
		double L_49 = V_0;
		if ((((double)L_48) < ((double)L_49)))
		{
			goto IL_012e;
		}
	}
	{
		bool L_50 = V_4;
		if (L_50)
		{
			goto IL_0132;
		}
	}

IL_012e:
	{
		// distance = tempDistance;
		double L_51 = V_1;
		V_0 = L_51;
		// player = tempPlayer;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = V_3;
		V_2 = L_52;
	}

IL_0132:
	{
		// for (int bogus = 0; bogus < players.Length + 1; bogus++)
		int32_t L_53 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_0138:
	{
		// for (int bogus = 0; bogus < players.Length + 1; bogus++)
		int32_t L_54 = V_5;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_55 = ___players0;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_55)->max_length)), 1)))))
		{
			goto IL_0023;
		}
	}
	{
		// return (player);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = V_2;
		return L_56;
	}
}
// System.Boolean unit.Unit::getActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unit_getActive_m86639388882C58CE77B4544970C888114615F821 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	{
		// return (isActive);
		bool L_0 = __this->___isActive_28;
		return L_0;
	}
}
// System.Void unit.Unit::setActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_setActive_mBB63B3E8956968D61C6D53FCCBD0EABA00B399EF (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, bool ___active0, const RuntimeMethod* method) 
{
	{
		// isActive = active;
		bool L_0 = ___active0;
		__this->___isActive_28 = L_0;
		// }
		return;
	}
}
// System.Void unit.Unit::attackInit(System.String,UnityEngine.Vector3,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_attackInit_m3614FC80B96EA35A6823EF696562BC3CB5C7E31D (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, String_t* ___type0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cursorPos1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cursor2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E_m6F460C0B4AEBF8C0FA26BCCB4244C3C191FBE964_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// move(cursorPos, cursor, true);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___cursorPos1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___cursor2;
		Unit_move_m715A8A5833E864069E6365181ABCB9E13560513F(__this, L_0, L_1, (bool)1, NULL);
		// cursor.GetComponent<CursorSet>().setAttacking(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___cursor2;
		CursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E* L_3;
		L_3 = GameObject_GetComponent_TisCursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E_m6F460C0B4AEBF8C0FA26BCCB4244C3C191FBE964(L_2, GameObject_GetComponent_TisCursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E_m6F460C0B4AEBF8C0FA26BCCB4244C3C191FBE964_RuntimeMethod_var);
		CursorSet_setAttacking_m3ACC50051442094190F2AA115AFEF217EE30DD46_inline(L_3, (bool)1, NULL);
		// isSearching = true;
		__this->___isSearching_31 = (bool)1;
		// }
		return;
	}
}
// System.Boolean unit.Unit::hitCheck(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unit_hitCheck_m205E77285FAFBD23242AB3FD5F3E983AC394FD11 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___victim0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRandomNumberGenerator_tD88337DD8ABCBC5650BBB20FF9F8730F979F9FD8_m5DB892A7826F21A9A57B8B0DDF1E090B60A81BFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0469116788B8626C8DA3C69F79F8A3DD1B3DAF94);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// int trueAcc = getHit(victim);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___victim0;
		int32_t L_1;
		L_1 = Unit_getHit_m5B08DBC452BB3A6F57F84B73CD577B72847506F5(__this, L_0, NULL);
		V_0 = L_1;
		// Debug.Log(trueAcc);
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		// int ave = rnControl.GetComponent<RandomNumberGenerator>().randomNumberGenerator(new int[2]);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___rnControl_37;
		RandomNumberGenerator_tD88337DD8ABCBC5650BBB20FF9F8730F979F9FD8* L_6;
		L_6 = GameObject_GetComponent_TisRandomNumberGenerator_tD88337DD8ABCBC5650BBB20FF9F8730F979F9FD8_m5DB892A7826F21A9A57B8B0DDF1E090B60A81BFA(L_5, GameObject_GetComponent_TisRandomNumberGenerator_tD88337DD8ABCBC5650BBB20FF9F8730F979F9FD8_m5DB892A7826F21A9A57B8B0DDF1E090B60A81BFA_RuntimeMethod_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		int32_t L_8;
		L_8 = RandomNumberGenerator_randomNumberGenerator_mC7EBFB13A643CBA1853113C0BF1E39A28DBF28D5(L_6, L_7, NULL);
		// Debug.Log(ave);
		int32_t L_9 = L_8;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		// attacks--;
		int32_t L_12 = __this->___attacks_38;
		__this->___attacks_38 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		// if (ave < trueAcc)
		int32_t L_13 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)L_13)))
		{
			goto IL_0057;
		}
	}
	{
		// crit = critCheck(victim);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = ___victim0;
		bool L_15;
		L_15 = Unit_critCheck_m097E1A05C8AFB2084C471B565A874FB416AF811E(__this, L_14, NULL);
		V_1 = L_15;
		// damage(victim, crit);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = ___victim0;
		bool L_17 = V_1;
		Unit_damage_m9209DE5D78479FD8B1E8E57A416F82D7539D5C46(__this, L_16, L_17, NULL);
		// return (true);
		return (bool)1;
	}

IL_0057:
	{
		// Debug.Log("miss");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0469116788B8626C8DA3C69F79F8A3DD1B3DAF94, NULL);
		// return (false);
		return (bool)0;
	}
}
// System.Boolean unit.Unit::critCheck(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unit_critCheck_m097E1A05C8AFB2084C471B565A874FB416AF811E (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRandomNumberGenerator_tD88337DD8ABCBC5650BBB20FF9F8730F979F9FD8_m5DB892A7826F21A9A57B8B0DDF1E090B60A81BFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int trueAcc = getCrit(target);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___target0;
		int32_t L_1;
		L_1 = Unit_getCrit_mFF9383882BBB89D64615A0927CD822BFF60C9CFA(__this, L_0, NULL);
		V_0 = L_1;
		// int ave = rnControl.GetComponent<RandomNumberGenerator>().randomNumberGenerator(new int[2]);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___rnControl_37;
		RandomNumberGenerator_tD88337DD8ABCBC5650BBB20FF9F8730F979F9FD8* L_3;
		L_3 = GameObject_GetComponent_TisRandomNumberGenerator_tD88337DD8ABCBC5650BBB20FF9F8730F979F9FD8_m5DB892A7826F21A9A57B8B0DDF1E090B60A81BFA(L_2, GameObject_GetComponent_TisRandomNumberGenerator_tD88337DD8ABCBC5650BBB20FF9F8730F979F9FD8_m5DB892A7826F21A9A57B8B0DDF1E090B60A81BFA_RuntimeMethod_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		int32_t L_5;
		L_5 = RandomNumberGenerator_randomNumberGenerator_mC7EBFB13A643CBA1853113C0BF1E39A28DBF28D5(L_3, L_4, NULL);
		// if (ave < trueAcc)
		int32_t L_6 = V_0;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0023;
		}
	}
	{
		// return (true);
		return (bool)1;
	}

IL_0023:
	{
		// return (false);
		return (bool)0;
	}
}
// System.Void unit.Unit::damage(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_damage_m9209DE5D78479FD8B1E8E57A416F82D7539D5C46 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___victim0, bool ___crit1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int damage = getDamage(victim);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___victim0;
		int32_t L_1;
		L_1 = Unit_getDamage_m3276097273B692D3519F1D64D3C8B6F9360C3438(__this, L_0, NULL);
		V_0 = L_1;
		// if (damage < 0)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		// damage = 0;
		V_0 = 0;
	}

IL_000e:
	{
		// victim.GetComponent<Unit>().takeDamage(damage, this.gameObject, crit);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___victim0;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_4;
		L_4 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_3, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		int32_t L_5 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_7 = ___crit1;
		Unit_takeDamage_m336CBC0666A2C7FF4226E03065F98B88176656EB(L_4, L_5, L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void unit.Unit::takeDamage(System.Int32,UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_takeDamage_m336CBC0666A2C7FF4226E03065F98B88176656EB (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, int32_t ___damage0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___opponent1, bool ___crit2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00F28EC044F0BCC9FF9CE0F4EB8D079BA9C166F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5F5200C3FA1D8366A6C5825FC580B4B327DB79D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (crit)
		bool L_0 = ___crit2;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// damage *= 3;
		int32_t L_1 = ___damage0;
		___damage0 = ((int32_t)il2cpp_codegen_multiply(L_1, 3));
	}

IL_0008:
	{
		// hp = hp - damage;
		int32_t L_2 = __this->___hp_6;
		int32_t L_3 = ___damage0;
		__this->___hp_6 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		// if (damage == 0 && opponent.CompareTag("Player"))
		int32_t L_4 = ___damage0;
		if (L_4)
		{
			goto IL_0033;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___opponent1;
		bool L_6;
		L_6 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_5, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		// opponent.GetComponent<Unit>().setExp(0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = ___opponent1;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_8;
		L_8 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_7, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		Unit_setExp_m048B9183355BAB25D1E293F67AE27044D4A88E54(L_8, 0, NULL);
		return;
	}

IL_0033:
	{
		// else if (hp < 1)
		int32_t L_9 = __this->___hp_6;
		if ((((int32_t)L_9) >= ((int32_t)1)))
		{
			goto IL_0061;
		}
	}
	{
		// if (opponent.CompareTag("Player"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = ___opponent1;
		bool L_11;
		L_11 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_10, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_11)
		{
			goto IL_0055;
		}
	}
	{
		// opponent.GetComponent<Unit>().setExp(2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = ___opponent1;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_13;
		L_13 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_12, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		Unit_setExp_m048B9183355BAB25D1E293F67AE27044D4A88E54(L_13, 2, NULL);
	}

IL_0055:
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_14, NULL);
		return;
	}

IL_0061:
	{
		// if (opponent.CompareTag("Player"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = ___opponent1;
		bool L_16;
		L_16 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_15, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_16)
		{
			goto IL_007a;
		}
	}
	{
		// opponent.GetComponent<Unit>().setExp(1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = ___opponent1;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_18;
		L_18 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_17, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		Unit_setExp_m048B9183355BAB25D1E293F67AE27044D4A88E54(L_18, 1, NULL);
	}

IL_007a:
	{
		// Debug.Log(this.gameObject.name + " took " + damage + " damage");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_20;
		L_20 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_19, NULL);
		String_t* L_21;
		L_21 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___damage0), NULL);
		String_t* L_22;
		L_22 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_20, _stringLiteralE5F5200C3FA1D8366A6C5825FC580B4B327DB79D, L_21, _stringLiteral00F28EC044F0BCC9FF9CE0F4EB8D079BA9C166F4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_22, NULL);
		// }
		return;
	}
}
// System.Void unit.Unit::checkDouble(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_checkDouble_m98B8518639F7C5D0AFECF159F200DA7B72B5FCE5 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___opponent0, const RuntimeMethod* method) 
{
	{
		// if (getAttacks() > 0)
		int32_t L_0;
		L_0 = Unit_getAttacks_mA1AD69B034D9B8602C5E46EA30F761BFC4E18125_inline(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		// isAttackSequence = true;
		__this->___isAttackSequence_35 = (bool)1;
		// this.isSearching = true;
		__this->___isSearching_31 = (bool)1;
		// setTarget(opponent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___opponent0;
		Unit_setTarget_m139B852A8B736B9771EBBC7524E5CE9ABB69E558_inline(__this, L_1, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void unit.Unit::doubleOpp(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_doubleOpp_mC77B1EC4CBBBD16AD4AD636FBE119006FAF617F2 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int targetAtkSpd = target.GetComponent<Unit>().getAtkSpd();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___target0;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_1;
		L_1 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_0, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Unit_getAtkSpd_m832871CCD61624241965A05ED8F52A3E4A081B26_inline(L_1, NULL);
		V_0 = L_2;
		// if ((atkSpd - targetAtkSpd) >= 4)
		int32_t L_3 = __this->___atkSpd_22;
		int32_t L_4 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))) < ((int32_t)4)))
		{
			goto IL_0020;
		}
	}
	{
		// attacks = 2;
		__this->___attacks_38 = 2;
		goto IL_0027;
	}

IL_0020:
	{
		// attacks = 1;
		__this->___attacks_38 = 1;
	}

IL_0027:
	{
		// Debug.Log(attacks);
		int32_t L_5 = __this->___attacks_38;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject[] unit.Unit::getEntities(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* Unit_getEntities_mACFDA071A756E5F3EFEFC317ABBEE0170465093B (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, String_t* ___type0, const RuntimeMethod* method) 
{
	{
		// GameObject[] entities = GameObject.FindGameObjectsWithTag(type);
		String_t* L_0 = ___type0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1;
		L_1 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(L_0, NULL);
		// return (entities);
		return L_1;
	}
}
// System.Int32 unit.Unit::getAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unit_getAttack_mB9E8D22219143B0C3DBD7EB2FE69CCD639702F6A (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	{
		// return (attack);
		int32_t L_0 = __this->___attack_15;
		return L_0;
	}
}
// System.Void unit.Unit::setAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_setAttack_mDE6030AA133D1CA6D231C550F03FEA6835552428 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	{
		// attack = str;
		int32_t L_0 = __this->___str_7;
		__this->___attack_15 = L_0;
		// }
		return;
	}
}
// System.Int32 unit.Unit::getDefense()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unit_getDefense_m51DF82DB104FBEFC30EB92C7FB50D79092FAE897 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	{
		// return (defense);
		int32_t L_0 = __this->___defense_16;
		return L_0;
	}
}
// System.Void unit.Unit::setDefense()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_setDefense_m936A917F503C8E25217D65A31B1EC60FFC7FBF95 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	{
		// defense = def;
		int32_t L_0 = __this->___def_11;
		__this->___defense_16 = L_0;
		// }
		return;
	}
}
// System.Int32 unit.Unit::getAccuracy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unit_getAccuracy_m6CBC059C2BE39FB1E6DB878C7E8199B727BFE9EE (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	{
		// return (accuracy);
		int32_t L_0 = __this->___accuracy_17;
		return L_0;
	}
}
// System.Void unit.Unit::setAccuracy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_setAccuracy_mAA55006F890ACAD23646C03489F45F6E3251F55F (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	{
		// accuracy = 75 + (skl * 2) + (lck / 2);
		int32_t L_0 = __this->___skl_8;
		int32_t L_1 = __this->___lck_10;
		__this->___accuracy_17 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)75), ((int32_t)il2cpp_codegen_multiply(L_0, 2)))), ((int32_t)(L_1/2))));
		// }
		return;
	}
}
// System.Int32 unit.Unit::getAvoid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unit_getAvoid_mF30A6C0F9AB8118113A380F6EF9532A23B0FA72F (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	{
		// return (avoid);
		int32_t L_0 = __this->___avoid_18;
		return L_0;
	}
}
// System.Void unit.Unit::setAvoid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_setAvoid_mAABF59BAB2D722E52D555A6B3E2647C478CCD3AF (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	{
		// avoid = (atkSpd * 2) + lck;
		int32_t L_0 = __this->___atkSpd_22;
		int32_t L_1 = __this->___lck_10;
		__this->___avoid_18 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, 2)), L_1));
		// }
		return;
	}
}
// System.Int32 unit.Unit::getAtkSpd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unit_getAtkSpd_m832871CCD61624241965A05ED8F52A3E4A081B26 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	{
		// return (atkSpd);
		int32_t L_0 = __this->___atkSpd_22;
		return L_0;
	}
}
// System.Void unit.Unit::setAtkSpd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_setAtkSpd_m49E9ACB2E221C14EE0E778C294EEE0A5D9955003 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	{
		// atkSpd = spd;
		int32_t L_0 = __this->___spd_9;
		__this->___atkSpd_22 = L_0;
		// }
		return;
	}
}
// UnityEngine.GameObject unit.Unit::getTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Unit_getTarget_m36FCA3B0A2A67956B73F64C3BC37FD9D4760754E (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	{
		// return (target);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___target_30;
		return L_0;
	}
}
// System.Void unit.Unit::setTarget(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_setTarget_m139B852A8B736B9771EBBC7524E5CE9ABB69E558 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, const RuntimeMethod* method) 
{
	{
		// this.target = target;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___target0;
		__this->___target_30 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_30), (void*)L_0);
		// }
		return;
	}
}
// System.Int32 unit.Unit::getHit(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unit_getHit_m5B08DBC452BB3A6F57F84B73CD577B72847506F5 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___victim0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int trueAcc = accuracy - victim.GetComponent<Unit>().getAvoid();
		int32_t L_0 = __this->___accuracy_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___victim0;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_2;
		L_2 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_1, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		int32_t L_3;
		L_3 = Unit_getAvoid_mF30A6C0F9AB8118113A380F6EF9532A23B0FA72F_inline(L_2, NULL);
		// return (trueAcc);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_3));
	}
}
// System.Int32 unit.Unit::getDamage(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unit_getDamage_m3276097273B692D3519F1D64D3C8B6F9360C3438 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___victim0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int damage = attack - victim.GetComponent<Unit>().getDefense();
		int32_t L_0 = __this->___attack_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___victim0;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_2;
		L_2 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_1, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		int32_t L_3;
		L_3 = Unit_getDefense_m51DF82DB104FBEFC30EB92C7FB50D79092FAE897_inline(L_2, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_3));
		// if (damage < 0)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		// damage = 0;
		V_0 = 0;
	}

IL_0019:
	{
		// return (damage);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Void unit.Unit::levelUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_levelUp_m78EDD0C40AD63DD92FE82FBCA24DC424534F41B6 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB03332BB8FF600C96D963CDF160CFA6A57866E2F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hp++;
		int32_t L_0 = __this->___hp_6;
		__this->___hp_6 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// maxHp++;
		int32_t L_1 = __this->___maxHp_21;
		__this->___maxHp_21 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// str++;
		int32_t L_2 = __this->___str_7;
		__this->___str_7 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// skl++;
		int32_t L_3 = __this->___skl_8;
		__this->___skl_8 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		// spd++;
		int32_t L_4 = __this->___spd_9;
		__this->___spd_9 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// lck++;
		int32_t L_5 = __this->___lck_10;
		__this->___lck_10 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// def++;
		int32_t L_6 = __this->___def_11;
		__this->___def_11 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		// res++;
		int32_t L_7 = __this->___res_12;
		__this->___res_12 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		// Debug.Log("Leveled up");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralB03332BB8FF600C96D963CDF160CFA6A57866E2F, NULL);
		// }
		return;
	}
}
// System.Int32 unit.Unit::getHp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unit_getHp_m2B1D935A2EA64A394015C685C4B70CC6758341E9 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	{
		// if (hp < 0)
		int32_t L_0 = __this->___hp_6;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		// hp = 0;
		__this->___hp_6 = 0;
	}

IL_0010:
	{
		// return (hp);
		int32_t L_1 = __this->___hp_6;
		return L_1;
	}
}
// System.Void unit.Unit::setHp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_setHp_m85F1B3D15B831D7E1C35B2F54EC79F512C662279 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, int32_t ___hp0, const RuntimeMethod* method) 
{
	{
		// this.hp = hp;
		int32_t L_0 = ___hp0;
		__this->___hp_6 = L_0;
		// }
		return;
	}
}
// System.Int32 unit.Unit::getAttacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unit_getAttacks_mA1AD69B034D9B8602C5E46EA30F761BFC4E18125 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	{
		// return (attacks);
		int32_t L_0 = __this->___attacks_38;
		return L_0;
	}
}
// System.Void unit.Unit::setAttacks(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_setAttacks_mEFE1B3FCE2E38541830A1B8F3A9A162032F99DEF (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, int32_t ___attacks0, const RuntimeMethod* method) 
{
	{
		// this.attacks = attacks;
		int32_t L_0 = ___attacks0;
		__this->___attacks_38 = L_0;
		// }
		return;
	}
}
// System.Int32 unit.Unit::getCritRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unit_getCritRate_m88DCB34B598E8A1C9335EEFAA9C20686B60D9187 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	{
		// return (critRate);
		int32_t L_0 = __this->___critRate_19;
		return L_0;
	}
}
// System.Void unit.Unit::setCritRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_setCritRate_m978575C4099887A422D239367D3D67EE0CBCF2E9 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	{
		// critRate = (skl + lck)/ 2;
		int32_t L_0 = __this->___skl_8;
		int32_t L_1 = __this->___lck_10;
		__this->___critRate_19 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_0, L_1))/2));
		// }
		return;
	}
}
// System.Int32 unit.Unit::getCritAvoid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unit_getCritAvoid_mCB2C096C8A928B3A2F62A86D9B9214449B2D9FD1 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	{
		// return (critAvoid);
		int32_t L_0 = __this->___critAvoid_20;
		return L_0;
	}
}
// System.Void unit.Unit::setCritAvoid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_setCritAvoid_m3B855940700E307FB10A6ADE320840F8BF140D9E (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	{
		// critAvoid = lck;
		int32_t L_0 = __this->___lck_10;
		__this->___critAvoid_20 = L_0;
		// }
		return;
	}
}
// System.Int32 unit.Unit::getCrit(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unit_getCrit_mFF9383882BBB89D64615A0927CD822BFF60C9CFA (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int crit = critRate - target.GetComponent<Unit>().getCritAvoid();
		int32_t L_0 = __this->___critRate_19;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___target0;
		Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* L_2;
		L_2 = GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E(L_1, GameObject_GetComponent_TisUnit_t92885F0F022EF93C363B19CE32EA7756844F2158_mD3DE9B6EAB0ADE036D3FC356411064E34229075E_RuntimeMethod_var);
		int32_t L_3;
		L_3 = Unit_getCritAvoid_mCB2C096C8A928B3A2F62A86D9B9214449B2D9FD1_inline(L_2, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_3));
		// if (crit < 0)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		// crit = 0;
		V_0 = 0;
	}

IL_0019:
	{
		// return (crit);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean unit.Unit::getDead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unit_getDead_m104F9173B5DF0745915A50A630F9ED70D1DB0C5D (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	{
		// return (dead);
		bool L_0 = __this->___dead_39;
		return L_0;
	}
}
// System.Void unit.Unit::setDead(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_setDead_m480D4A3E5D1E73B3ADE4829E0AA3D869B020C728 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, bool ___dead0, const RuntimeMethod* method) 
{
	{
		// this.dead = dead;
		bool L_0 = ___dead0;
		__this->___dead_39 = L_0;
		// }
		return;
	}
}
// System.Int32 unit.Unit::getExp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unit_getExp_mC188832459C87CCD6AEC318F179265F242184520 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	{
		// return (exp);
		int32_t L_0 = __this->___exp_5;
		return L_0;
	}
}
// System.Void unit.Unit::setExp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_setExp_m048B9183355BAB25D1E293F67AE27044D4A88E54 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, int32_t ___modifier0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// exp += 50 * modifier;
		int32_t L_0 = __this->___exp_5;
		int32_t L_1 = ___modifier0;
		__this->___exp_5 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)il2cpp_codegen_multiply(((int32_t)50), L_1))));
		// if (exp > 99)
		int32_t L_2 = __this->___exp_5;
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)99))))
		{
			goto IL_0030;
		}
	}
	{
		// exp -= 100;
		int32_t L_3 = __this->___exp_5;
		__this->___exp_5 = ((int32_t)il2cpp_codegen_subtract(L_3, ((int32_t)100)));
		// levelUp();
		Unit_levelUp_m78EDD0C40AD63DD92FE82FBCA24DC424534F41B6(__this, NULL);
	}

IL_0030:
	{
		// Debug.Log(exp);
		int32_t L_4 = __this->___exp_5;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
		// }
		return;
	}
}
// System.Void unit.Unit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit__ctor_mAF89850FACC050EF5513C139C3F7BFA00E6D4DD1 (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* CursorSet_getTempcharacter_m5A1F2203F432DF921B7F495C285286EAC55F3639_inline (CursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E* __this, const RuntimeMethod* method) 
{
	{
		// return (tempCharacter);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___tempCharacter_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CommandControl_setSelected_m108B17C71E445DB0C48385F08146B815C4443C17_inline (CommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F* __this, bool ___selected0, const RuntimeMethod* method) 
{
	{
		// this.selected = selected;
		bool L_0 = ___selected0;
		__this->___selected_5 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AttackSequenceUI_getHpPlayer_mCAB232BFA1BAF0B684573AB99AC42E02DBD6FAC0_inline (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, const RuntimeMethod* method) 
{
	{
		// return (hpPlayer);
		int32_t L_0 = __this->___hpPlayer_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AttackSequenceUI_getHpEnemy_mF118FC69B871959CC56F4C75DAD99CFEC32D228D_inline (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, const RuntimeMethod* method) 
{
	{
		// return (hpEnemy);
		int32_t L_0 = __this->___hpEnemy_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AttackSequenceAnimation_getPlayerAttacks_m64A7CC3900FCBBC3F3EDD0868CC55FF8F92D7D3E_inline (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, const RuntimeMethod* method) 
{
	{
		// return (playerAttacks);
		int32_t L_0 = __this->___playerAttacks_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AttackSequenceAnimation_getEnemyAttacks_mD5EEA4304D147633B552A932864963D722CC2F51_inline (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, const RuntimeMethod* method) 
{
	{
		// return (enemyAttacks);
		int32_t L_0 = __this->___enemyAttacks_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AttackSequenceAnimation_getInit_m59D6328CC7150C00F661319F7544940534D08311_inline (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, const RuntimeMethod* method) 
{
	{
		// return (init);
		bool L_0 = __this->___init_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AttackSequenceUI_setActive_m40076EE1E602361DFE5F82A11887D162403A5DE3_inline (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, bool ___isActive0, const RuntimeMethod* method) 
{
	{
		// this.isActive = isActive;
		bool L_0 = ___isActive0;
		__this->___isActive_19 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AttackSequenceAnimation_setPlayerAttacks_mFF3B968AFDB06CD846BA1209F676FC201A20B290_inline (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, int32_t ___playerAttacks0, const RuntimeMethod* method) 
{
	{
		// this.playerAttacks = playerAttacks;
		int32_t L_0 = ___playerAttacks0;
		__this->___playerAttacks_15 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AttackSequenceAnimation_setEnemyAttacks_mD311A57C2D8DCEB046621CF136BD6309E09B27BF_inline (AttackSequenceAnimation_t83661EBD50ABDF000847ABD7E033EFEA707ED2AD* __this, int32_t ___enemyAttacks0, const RuntimeMethod* method) 
{
	{
		// this.enemyAttacks = enemyAttacks;
		int32_t L_0 = ___enemyAttacks0;
		__this->___enemyAttacks_16 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AttackSequenceUI_getActive_mE36BB8079AAB6BFEAE856A940305231AA5624B02_inline (AttackSequenceUI_t8754934889D70B2025C92F953724AA16B93DC24D* __this, const RuntimeMethod* method) 
{
	{
		// return (isActive);
		bool L_0 = __this->___isActive_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayerControl_getWin_m07581D3E6956E0C2DC709E75F9C99C8B998CCA71_inline (PlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874* __this, const RuntimeMethod* method) 
{
	{
		// return (enemyWin);
		bool L_0 = __this->___enemyWin_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EnemyControl_getWin_mD3B45AFA89CF51921C59F91800FFE5A0081E6394_inline (EnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C* __this, const RuntimeMethod* method) 
{
	{
		// return (playerWin);
		bool L_0 = __this->___playerWin_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TextControl_getTimed_m177EFEC927C56C5EB2F4CAC30832162F39ED059C_inline (TextControl_t71D12CBDD07CE3910A0062CA9670EB7F7C6E0DE4* __this, const RuntimeMethod* method) 
{
	{
		// return (isTimed);
		bool L_0 = __this->___isTimed_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayerControl_getActive_m10E5D0D0307DC38974116E7C291D41E0C0224C1E_inline (PlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874* __this, const RuntimeMethod* method) 
{
	{
		// return (isActive);
		bool L_0 = __this->___isActive_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Controller_setEnemyStart_m9EF8745CDDFBC33BB5B1733FB6C1311A2D574794_inline (Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* __this, bool ___enemyStart0, const RuntimeMethod* method) 
{
	{
		// this.enemyStart = enemyStart;
		bool L_0 = ___enemyStart0;
		__this->___enemyStart_14 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EnemyControl_getActive_m21BD9CCB836575A641BBA767CE5204D810B9C84E_inline (EnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C* __this, const RuntimeMethod* method) 
{
	{
		// return (isActive);
		bool L_0 = __this->___isActive_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CommandControl_getSelected_m3C94E9B35BF87BE676E1917D0C80D9C98BABDCEC_inline (CommandControl_t16F4A0B233F22B2102CC1E4198B01FE61D2A842F* __this, const RuntimeMethod* method) 
{
	{
		// return (selected);
		bool L_0 = __this->___selected_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Unit_setTarget_m139B852A8B736B9771EBBC7524E5CE9ABB69E558_inline (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, const RuntimeMethod* method) 
{
	{
		// this.target = target;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___target0;
		__this->___target_30 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_30), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Unit_getActive_m86639388882C58CE77B4544970C888114615F821_inline (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	{
		// return (isActive);
		bool L_0 = __this->___isActive_28;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnemyControl_setActive_mEEE23731CA7E5E4B782124D44E12EE36E0363C69_inline (EnemyControl_tE7E9E94B60E86B6B822CF0A55DFCE839828C218C* __this, bool ___active0, const RuntimeMethod* method) 
{
	{
		// isActive = active;
		bool L_0 = ___active0;
		__this->___isActive_4 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Controller_getEnemyStart_mB9266E3A3C025C240B542248467AFA158204CE4B_inline (Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* __this, const RuntimeMethod* method) 
{
	{
		// return (enemyStart);
		bool L_0 = __this->___enemyStart_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Unit_setActive_mBB63B3E8956968D61C6D53FCCBD0EABA00B399EF_inline (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, bool ___active0, const RuntimeMethod* method) 
{
	{
		// isActive = active;
		bool L_0 = ___active0;
		__this->___isActive_28 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerControl_setActive_m9B467C14A66F41E6BD30A9DF63E68BE1F15759F2_inline (PlayerControl_t781FCF85E3A6C0C5DE12B0E19832A8A1A0B71874* __this, bool ___active0, const RuntimeMethod* method) 
{
	{
		// isActive = active;
		bool L_0 = ___active0;
		__this->___isActive_4 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Timer_getTime_mDB08066CE17689274FFA9AFB99C399B198E997BA_inline (Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* __this, const RuntimeMethod* method) 
{
	{
		// return (currentTime);
		float L_0 = __this->___currentTime_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Unit_getAttacks_mA1AD69B034D9B8602C5E46EA30F761BFC4E18125_inline (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	{
		// return (attacks);
		int32_t L_0 = __this->___attacks_38;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CursorSet_setAttacking_m3ACC50051442094190F2AA115AFEF217EE30DD46_inline (CursorSet_t8EC028E5A474DF01E5A2B73477204BF087E3A36E* __this, bool ___isAttacking0, const RuntimeMethod* method) 
{
	{
		// this.isAttacking = isAttacking;
		bool L_0 = ___isAttacking0;
		__this->___isAttacking_13 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Unit_getAtkSpd_m832871CCD61624241965A05ED8F52A3E4A081B26_inline (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	{
		// return (atkSpd);
		int32_t L_0 = __this->___atkSpd_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Unit_getAvoid_mF30A6C0F9AB8118113A380F6EF9532A23B0FA72F_inline (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	{
		// return (avoid);
		int32_t L_0 = __this->___avoid_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Unit_getDefense_m51DF82DB104FBEFC30EB92C7FB50D79092FAE897_inline (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	{
		// return (defense);
		int32_t L_0 = __this->___defense_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Unit_getCritAvoid_mCB2C096C8A928B3A2F62A86D9B9214449B2D9FD1_inline (Unit_t92885F0F022EF93C363B19CE32EA7756844F2158* __this, const RuntimeMethod* method) 
{
	{
		// return (critAvoid);
		int32_t L_0 = __this->___critAvoid_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
