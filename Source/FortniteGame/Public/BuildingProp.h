#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "BuildingTimeOfDayLights.h"
#include "BuildingProp.generated.h"

class AActor;
class AController;

UCLASS(Blueprintable)
class FORTNITEGAME_API ABuildingProp : public ABuildingTimeOfDayLights {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoNotBlockMarkerTraceWhenOverlappingPlayer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AnalyticsTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSuppressSimpleInteractionWidgetForTouch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bKeepWhenUnderwater: 1;
    
public:
    ABuildingProp();
protected:
    UFUNCTION(BlueprintCallable)
    bool DestroyIfUnderwater(float MinSubmergedPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_GetEyesViewpoint(FVector& OutLocation, FRotator& OutRotation) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float BlueprintModifyIncomingDamage(float Damage, const FGameplayTagContainer& InTags, const FGameplayEffectContextHandle& EffectContext, AController* EventInstigator, AActor* DamageCauser);
    
};

