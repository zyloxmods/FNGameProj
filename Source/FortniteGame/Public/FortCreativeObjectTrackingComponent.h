#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "FortCreativeObjectTrackingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortCreativeObjectTrackingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFortCreativeObjectTrackingComponent();
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPreviewLocation(bool bPreviewActive, const FVector& Location);
    
};

