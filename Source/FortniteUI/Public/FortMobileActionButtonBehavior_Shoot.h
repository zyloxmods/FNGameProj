#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortMobileActionButtonBehavior.h"
#include "IconPicker.h"
#include "FortMobileActionButtonBehavior_Shoot.generated.h"

class UPaperSprite;

UCLASS(Blueprintable)
class FORTNITEUI_API UFortMobileActionButtonBehavior_Shoot : public UFortMobileActionButtonBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* PlaceItemSprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* ThrowSprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* PickaxeSprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DefaultIconOverrideItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIconPicker> PawnSpriteOverrides;
    
public:
    UFortMobileActionButtonBehavior_Shoot();
private:
    UFUNCTION(BlueprintCallable)
    void OnVehicleChanged();
    
};

