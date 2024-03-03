#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortAthenaMOTDNewsChildren.h"
#include "FortAthenaMOTDSimpleNewsWidget.generated.h"

class UCommonButton;
class UEpicCMSImage;
class URichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAthenaMOTDSimpleNewsWidget : public UCommonActivatableWidget, public IFortAthenaMOTDNewsChildren {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEpicCMSImage* CMSImage_NewsImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* RichTextBlock_NewsTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* RichTextBlock_NewsBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* CommonButton_Close;
    
public:
    UFortAthenaMOTDSimpleNewsWidget();
    
    // Fix for true pure virtual functions not being implemented
};

