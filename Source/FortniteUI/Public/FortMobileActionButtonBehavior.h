#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HUDWidgetBehavior.h"
#include "FortMobileActionButtonBehavior.generated.h"

class UFortMobileButtonBehaviorComponent;
class UPaperSprite;

UCLASS(Abstract, Blueprintable)
class FORTNITEUI_API UFortMobileActionButtonBehavior : public UHUDWidgetBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ActionNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* Sprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClickthrough;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HUDLayoutToolSaveTag_Legacy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortMobileButtonBehaviorComponent*> ButtonBehaviorComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForcedZOrder;
    
public:
    UFortMobileActionButtonBehavior();
};

