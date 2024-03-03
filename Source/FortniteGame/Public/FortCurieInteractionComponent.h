#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CurieContainerHandle.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "FortCurieExecutionEntry.h"
#include "FortCurieInteractionComponent.generated.h"

class AActor;
class UObject;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortCurieInteractionComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCurieExecutionEntry> ExecutionEntries;
    
public:
    UFortCurieInteractionComponent();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnregisterCollisionComponent();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterCollisionComponent(UPrimitiveComponent* InCollisionComponent);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCurieStateDetached(UObject* Owner, FCurieContainerHandle ContainerHandle, const FGameplayTag& StateIdentifier);
    
    UFUNCTION(BlueprintCallable)
    void OnCurieStateAttached(UObject* Owner, FCurieContainerHandle ContainerHandle, const FGameplayTag& StateIdentifier);
    
    UFUNCTION(BlueprintCallable)
    void HandleHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void HandleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

