#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortWinterQuestIntroScreen.generated.h"

class UCommonTextBlock;
class UFortLazyImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortWinterQuestIntroScreen : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Violater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* Image_GlowBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* Image_SnowBackground;
    
public:
    UFortWinterQuestIntroScreen();
};

