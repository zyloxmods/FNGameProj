#pragma once
#include "CoreMinimal.h"
#include "CommonNumericTextBlock.h"
#include "EFortItemCountStyle.h"
#include "FortItemCountTextBlock.generated.h"

class UFortItemDefinition;

UCLASS(Blueprintable)
class UFortItemCountTextBlock : public UCommonNumericTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* ItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemCountStyle CountStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemCountMaxInterpolateDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemCountMinInterpolateRate;
    
    UFortItemCountTextBlock();
    UFUNCTION(BlueprintCallable)
    void SetOverrideValue(int32 InOverrideValue);
    
    UFUNCTION(BlueprintCallable)
    void SetItemDefinition(UFortItemDefinition* InItemDefinition);
    
    UFUNCTION(BlueprintCallable)
    void SetCountStyle(EFortItemCountStyle InCountStyle);
    
    UFUNCTION(BlueprintCallable)
    void InterpolateOverrideToValue(const int32 TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleItemCountChanged(UFortItemDefinition* Definition, int32 Delta);
    
};

