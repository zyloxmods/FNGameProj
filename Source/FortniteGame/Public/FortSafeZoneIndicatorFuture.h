#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "Engine/NetSerialization.h"
#include "FortSafeZoneIndicatorFuture.generated.h"

UCLASS(Blueprintable)
class AFortSafeZoneIndicatorFuture : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 NextNextCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float NextNextRadius;
    
    AFortSafeZoneIndicatorFuture();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

