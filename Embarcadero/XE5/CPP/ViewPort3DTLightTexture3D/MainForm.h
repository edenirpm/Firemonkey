//---------------------------------------------------------------------------

#ifndef MainFormH
#define MainFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Ani.hpp>
#include <FMX.Materials.hpp>
#include <FMX.Objects3D.hpp>
#include <FMX.Types.hpp>
#include <FMX.Types3D.hpp>
#include <FMX.Controls3D.hpp>
#include <FMX.MaterialSources.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Viewport3D.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
	TViewport3D *Viewport3D1;
	TPanel *Panel1;
	TCheckBox *CheckBox1;
	TSphere *Sphere1;
	TRectangle3D *Rectangle3D1;
	TColorMaterialSource *ColorMaterialSource1;
	TLightMaterialSource *LightMaterialSource1;
	TLight *Light1;
	TFloatAnimation *FloatAnimation1;
	TFloatAnimation *FloatAnimation2;
	void __fastcall CheckBox1Change(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
