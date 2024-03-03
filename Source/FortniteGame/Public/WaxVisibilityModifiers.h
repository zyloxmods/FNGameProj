#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "Styling/SlateBrush.h"
#include "Templates/SubclassOf.h"
#include "WaxVisibilityModifiers.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FWaxVisibilityModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat UI_VisibilityMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush CompassIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush MinimapIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> TemporarilyGrantedEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> PermanentlyGrantedEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DistanceConsideredCloseForUI;
    
    FORTNITEGAME_API FWaxVisibilityModifiers();
};

