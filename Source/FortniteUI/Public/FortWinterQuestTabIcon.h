#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortWinterQuestTabIcon.generated.h"

class UCommonTextBlock;
class UOverlay;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortWinterQuestTabIcon : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* PresentBang;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PresentsToOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WinterQuestItemTemplateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WinterQuestKeyTemplateId;
    
public:
    UFortWinterQuestTabIcon();
};

