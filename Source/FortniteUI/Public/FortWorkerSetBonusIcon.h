#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortBrushSize.h"
#include "GameplayTagContainer.h"
#include "FortWorkerSetBonusIcon.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortWorkerSetBonusIcon : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortBrushSize::Type> ImageSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Icon;
    
    UFortWorkerSetBonusIcon();
    UFUNCTION(BlueprintCallable)
    void SetGameplayTag(const FGameplayTag& InGameplayTag);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDifferentGameplayTagSetBP();
    
};

