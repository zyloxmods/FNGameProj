#pragma once
#include "CoreMinimal.h"
#include "AthenaDanceItemDefinition.h"
#include "AthenaToyItemDefinition.generated.h"

class AActor;
class AFortToyPreviewActor;
class UFortGameplayAbility;

UCLASS(Blueprintable, MinimalAPI)
class UAthenaToyItemDefinition : public UAthenaDanceItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortGameplayAbility> ToySpawnAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ToyActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortToyPreviewActor> FrontEndPreviewActor;
    
public:
    UAthenaToyItemDefinition(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<AActor> GetToyActorClass() const;
    
    UFUNCTION(BlueprintCallable)
    void BakeLaunchPositions();
    
};

