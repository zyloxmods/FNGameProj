#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "ELinkToDirection.h"
#include "FortLinkToActorComponent.generated.h"

class AActor;
class AController;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortLinkToActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLinkedActorDisconnected);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLinkedActorDestroyed);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLinkedActorDestroyed OnLinkedActorDestroyed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLinkedActorDisconnected OnLinkedActorDisconnected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPerformLinkingCheckOnBeginPlay: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRegisterWithOwnerMovementComponent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseActorRotationForDirectionVectors: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMonitorLinkedActorForChanges: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELinkToDirection DirectionForLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionTraceLength;
    
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ActorLinkedTo;
    
public:
    UFortLinkToActorComponent();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetUseActorRotationForDirectionVectors(const bool InbUseActorRotationForDirectionVectors);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetRegisterWithOwnerMovementComponent(const bool bRegisterWithMovementComp);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPerformLinkingCheckOnBeginPlay(const bool bCheckOnBeginPlay);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterWithOwnersProjectileMovementComponent();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool PerformLinkingCheck(const ELinkToDirection InDirection, UPARAM(Ref) AActor*& OutActorLinkedTo);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMonitorLinkedActor();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleMovementStopped(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void HandleLinkedActorDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void HandleBuildingActorDestroyed(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    AActor* GetActorLinkedTo() const;
    
};

