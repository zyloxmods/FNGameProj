#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_GenerateOverlapEventsOverride.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_GenerateOverlapEventsOverride : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bGenerateOverlapEventsOverrideValue: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CenterLocation;
    
public:
    AFortAthenaMutator_GenerateOverlapEventsOverride();
    UFUNCTION(BlueprintCallable)
    void SetRadius(float NewRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetCenterLocation(FVector NewCenterLocation);
    
};

