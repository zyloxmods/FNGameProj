#pragma once
#include "CoreMinimal.h"
#include "FortPlayerFeedbackModalSubscreenBase.h"
#include "FortPlayerFeedbackModalSubscreen_Screenshot.generated.h"

class UCommonButton;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerFeedbackModalSubscreen_Screenshot : public UFortPlayerFeedbackModalSubscreenBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_TakeScreenshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Continue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Preview;
    
public:
    UFortPlayerFeedbackModalSubscreen_Screenshot();
};

