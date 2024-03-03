#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Components/StaticMeshComponent.h"
#include "OverlapComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PLAYSPACESYSTEM_API UOverlapComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UOverlapComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnEndActorOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginActorOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

